<?php

/**
 * @file
 * template.php
 */

/**
 * Implements theme_form_element().
 *
 * @param $variables
 * @return string
 */
function thinkcollege_boot_form_element(&$variables) {
  $element = &$variables['element'];
  // print_r($element);
  $is_checkbox = FALSE;
  $is_radio = FALSE;

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }

  // Check for errors and set correct error class.
  if (isset($element['#parents']) && form_get_error($element)) {
    $attributes['class'][] = 'error';
  }

  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(
        ' ' => '-',
        '_' => '-',
        '[' => '-',
        ']' => '',
      ));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  if (!empty($element['#autocomplete_path']) && drupal_valid_path($element['#autocomplete_path'])) {
    $attributes['class'][] = 'form-autocomplete';
  }
  $attributes['class'][] = 'form-item';

  // See http://getbootstrap.com/css/#forms-controls.
  if (isset($element['#type'])) {
    if ($element['#type'] == "radio") {
      $attributes['class'][] = 'radio';
      $is_radio = TRUE;
    }
    elseif ($element['#type'] == "checkbox") {
      $attributes['class'][] = 'checkbox';
      $is_checkbox = TRUE;
    }
    else {
      $attributes['class'][] = 'form-group';
    }
  }

  $description = FALSE;
  $tooltip = FALSE;
  // Convert some descriptions to tooltips.
  // @see bootstrap_tooltip_descriptions setting in _bootstrap_settings_form()
  if (!empty($element['#description']) && $element['#parents'][0] != 'radio_cols') {
    $description = $element['#description'];
    if (theme_get_setting('bootstrap_tooltip_enabled') && theme_get_setting('bootstrap_tooltip_descriptions') && $description === strip_tags($description) && strlen($description) <= 200) {
      $tooltip = TRUE;
      $attributes['data-toggle'] = 'tooltip';
      $attributes['title'] = $description;
    }
  } else {if (!empty($element['#description'])) $description = $element['#description']; }

  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }

  $prefix = '';
  $suffix = '';
  if (isset($element['#field_prefix']) || isset($element['#field_suffix'])) {
    // Determine if "#input_group" was specified.
    if (!empty($element['#input_group'])) {
      $prefix .= '<div class="input-group">';
      $prefix .= isset($element['#field_prefix']) ? '<span class="input-group-addon">' . $element['#field_prefix'] . '</span>' : '';
      $suffix .= isset($element['#field_suffix']) ? '<span class="input-group-addon">' . $element['#field_suffix'] . '</span>' : '';
      $suffix .= '</div>';
    }
    else {
      $prefix .= isset($element['#field_prefix']) ? $element['#field_prefix'] : '';
      $suffix .= isset($element['#field_suffix']) ? $element['#field_suffix'] : '';
    }
  }

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
    $output .= ' ' . theme('form_element_label', $variables);
    $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
    break;

    case 'after':
      if ($is_radio || $is_checkbox) {
        $output .= ' ' . $prefix . $element['#children'] . $suffix;
      }
      else {
        $variables['#children'] = ' ' . $prefix . $element['#children'] . $suffix;
      }
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
    // Output no label and no required marker, only the children.
    $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
    break;
  }

  if (($description && $element['#parents'][0] == 'radio_cols') || ($description && !$tooltip)) {
    $output .= '<p class="help-block">' . $element['#description'] . "</p>\n";
  }

  $output .= "</div>\n";

  return $output;
}

/**
 * Implements template_preprocess_page().
 *
 * @param $vars
 */
function thinkcollege_boot_preprocess_page(&$vars) {
  if (drupal_is_front_page()) {
    drupal_set_title(''); //removes welcome message (page title)
  }

  if (isset($vars['node'])) {
    if ($vars['node']->type == 'program_record') {
      //krumo($vars['node']);
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
    }
  }
}

/**
 * Implements template_preprocess_page().
 *
 * Since we have a sidebar_first_top, we have to make sure that the content region
 * resizes properly when there is a sidebar_first_top but no sidebar_first content.
 *
 * Do it in theme_process_page so we don't have to copy the entire
 * bootstrap_preprocess_page function here.
 */
function thinkcollege_boot_process_page(&$variables) {
  // Add information about the number of sidebars.
  if ((!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_first_top'])) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_first_top'] || !empty($variables['page']['sidebar_second']))) {
    $variables['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }
}

/**
 * Implements template_preprocess_html().
 * @param $vars
 */
function thinkcollege_boot_preprocess_html(&$vars) {
  $filepath = path_to_theme() . '/font-awesome/css/font-awesome.min.css';
  drupal_add_css($filepath, array(
    'group' => CSS_THEME,
  ));

  // Add ScrollSpy stuff for Program Record "full content" pages.
  if (in_array('node-type-program-record', $vars['classes_array'])) {
    $vars['attributes_array']['data-spy'] = 'scroll';
    $vars['attributes_array']['data-target'] = '#block-menu-menu-program-record-scrollspy';
    $vars['attributes_array']['data-offset'] = '50';
  }
}

/**
 * Implements template_preprocess_node().
 */
function thinkcollege_boot_preprocess_node(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];

  // Determine display of various Program Record icons.
  if ($vars['type'] == 'program_record') {
    $node = $vars['node'];

    $vars['tc_housing_icon'] = FALSE;
    if (isset($node->field_prog_housing_y_n['und'][0]['value'])) {
      if ($node->field_prog_housing_y_n['und'][0]['value'] == 'Yes') {
        $vars['tc_housing_icon'] = TRUE;
      }
    }

    $vars['tc_financial_aid_icon'] = FALSE;
    if (isset($node->field_prog_ctp_y_n['und'][0]['value'])) {
      if ($node->field_prog_ctp_y_n['und'][0]['value'] == 'Yes') {
        $vars['tc_financial_aid_icon'] = TRUE;
      }
    }

    $vars['tc_tpsid_icon'] = FALSE;
    if (isset($node->field_prog_tpsid_display['und'][0]['value'])) {
      if ($node->field_prog_tpsid_display['und'][0]['value'] == 'Yes') {
        $vars['tc_tpsid_icon'] = TRUE;
      }
    }
  }
}

/**
 * Implements template_preprocess_field().
 */
function thinkcollege_boot_preprocess_field(&$vars) {
  $vars['theme_hook_suggestions'][] = 'field__' . $vars['element']['#bundle'] . '__' . $vars['element']['#view_mode'];
}

/**
 * Implements template_preprocess_block().
 */
function thinkcollege_boot_preprocess_block(&$vars) {
  // Add Bootstrap "affix" settings for Program Record ScrollSpy menu block.
  if ($vars['block_html_id'] == 'block-menu-menu-program-record-scrollspy') {
    $vars['attributes_array']['data-spy'] = 'affix';
    $vars['attributes_array']['data-offset-top'] = '100';
    $vars['attributes_array']['data-offset-bottom'] = '660';
    $vars['attributes_array']['data-clampedwidth'] = '.region-sidebar-first';
  }

  /*
   * Individual facet <section> blocks are not automatically marked with their
   * facet name as a class, we need to target them directly, so add the
   * field_name to the <section> class.
   */
  if ($vars['block']->module == "facetapi") {
    $vars['classes_array'][] = $vars['title_suffix']['contextual_links']['#element']['#facet']['field'];

    /*
     * One facet (TPSID) is displayed as a bootstrap well as per requirements.
     */
    if ($vars['title_suffix']['contextual_links']['#element']['#facet']['field'] == "tc_tpsid") {
      $vars['classes_array'][] = "well well-sm";
    }
  }
}

/**
 * Implements theme_link().
 */
function thinkcollege_boot_link($vars) {
  // Allow #fragment links to be used via ':#fragment' - used in Program Record ScrollSpy menu.
  if (strpos($vars['path'], ':#') !== FALSE) {
    return '<a href="#' . check_plain(substr($vars['path'], 2)) . '"' . drupal_attributes($vars['options']['attributes']) . '>' . ($vars['options']['html'] ? $vars['text'] : check_plain($vars['text'])) . '</a>';
  }

  return '<a href="' . check_plain(url($vars['path'], $vars['options'])) . '"' . drupal_attributes($vars['options']['attributes']) . '>' . ($vars['options']['html'] ? $vars['text'] : check_plain($vars['text'])) . '</a>';
}

/**
 * Implementation of hook_field_attach_view_alter().
 *
 * Via https://www.drupal.org/node/2417017
 *
 * This makes the Display Label available in $content in template files.
 */
function thinkcollege_boot_field_attach_view_alter(&$output, $context) {
  foreach($output as $key => $item) {
    if (!empty($item['#field_name'])) {
      $field = field_info_instance($output['#entity_type'], $item['#field_name'], $output['#bundle']);
      if (isset($field['display_label']) && strlen(trim($field['display_label'])) > 0) {
        if (module_exists('i18n_field')) {
          $output[$key]['#display_label'] = check_plain(i18n_field_translate_property($field, 'display_label'));
        }
        else {
          $output[$key]['#display_label'] = check_plain($field['display_label']);
        }
      }
    }
  }
}

/**
 * Implements THEME_facetapi_title().
 *
 * @param object $variables
 *   Values associated with facets.
 *
 * @return string
 *   Renamed Facet title, or blank.
 */
function thinkcollege_boot_facetapi_title($variables) {
  // Rename specific TC facet title labels.
  switch ($variables['title']) {
    case "State/Province":
      $variables['title'] = "Location";
      break;
    case "Please indicate which disabilities students in this program have":
      $variables['title'] = "Disability";
      break;
    case "Does program offer housing for students?":
      $variables['title'] = "Housing";
      break;
    case "Is this program able to provide federal financial aid as a Comprehensive Transition Program (CTP)?":
      $variables['title'] = "Offer Financial Aid";
      break;
    case "Is the college or univ. where the program is located public or private institution? ":
      $variables['title'] = "Public or Private";
      break;
    case "What type of school is this?":
      $variables['title'] = "Type of School";
      break;
    case "What is the planned length of this program?":
      $variables['title'] = "Planned Length of Program";
      break;
    case "Is/was this program a federally funded TPSID program? ":
      $variables['title'] = "Program is a federally funded TPSID program";
      break;
    case "TC:Dual Enrollment":
      $variables['title'] = "Program features";
      break;
    case "TC:State/Province":
      $variables['title'] = "Location";
      break;
    case "TC:School Type":
      $variables['title'] = "Type of School";
      break;
  }
  $title = "<div class='tc-facet-title'><span class='facet-title'>";
  $tit = t('@title', array('@title' => $variables['title']));
  return $title . $tit . "</span></div>";
}

/**
 * Implements theme_breadcrumb().
 *
 * Returns HTML for a breadcrumb trail.
 *
 * @param array $variables
 *   An associative array containing:
 *   - breadcrumb: An array containing the breadcrumb links.
 *
 * @return string
 *   The constructed HTML.
 *
 * @see theme_breadcrumb()
 *
 * @ingroup theme_functions
 */
function thinkcollege_boot_breadcrumb($variables) {

  // Use the Path Breadcrumbs theme function if it should be used instead.
  if (_bootstrap_use_path_breadcrumbs()) {
    return path_breadcrumbs_breadcrumb($variables);
  }

  $output = '';
  $breadcrumb = $variables['breadcrumb'];
  $breadcrumb = _thinkcollege_boot_fix_yes_facets($breadcrumb);

  // Special ordering in TC search - for when search is at /college-search
  if (current_path() == "college-search") {
    if (!drupal_is_front_page()) {
      unset($breadcrumb[sizeof($breadcrumb) - 1]);
      array_splice($breadcrumb, 1, 0, '<a href="' . base_path() . 'college-search" class="active">Think College Search</a>');
    }
    // Search is on front page - arrange breadcrumbs slightly differently.
    else {
      array_splice($breadcrumb, 0, 0, '<a href="' . base_path() . '" class="active">Think College Search</a>');
    }
  }

  // Determine if we are to display the breadcrumb.
  $bootstrap_breadcrumb = bootstrap_setting('breadcrumb');
  if (($bootstrap_breadcrumb == 1 || ($bootstrap_breadcrumb == 2 && arg(0) == 'admin')) && !empty($breadcrumb)) {
    $output = theme('item_list', array(
      'attributes' => array(
        'class' => array('breadcrumb'),
      ),
      'items' => $breadcrumb,
      'type' => 'ol',
    ));
  }
  return $output;
}

/**
 * A few of the facets say "YES".
 * This isn't very useful so make sure the "yes" actually shows something useful
 * instead.
 *
 * @param $breadcrumb
 * @return mixed
 */
function _thinkcollege_boot_fix_yes_facets($breadcrumb) {
  global $_REQUEST;
  if (array_key_exists('f', $_REQUEST)) {
    $x = $_REQUEST['f'];
    foreach ($x as $id => $crumb) {
      // If we have a search term, we need to skip it for replacement.
      if ($_REQUEST['search_api_views_fulltext']) {
        $id++;
      }
      switch ($crumb) {
        case "tc_tpsid:Yes":
          if (substr($breadcrumb[$id], 0, 2) == "<a") {
            $breadcrumb[$id] = _str_lreplace("Yes", "TPSID Program", $breadcrumb[$id]);
          }
          else {
            $breadcrumb[$id] = "TPSID Program";
          }
          break;
        case "tc_dual_enroll:Yes":
          if (substr($breadcrumb[$id], 0, 2) == "<a") {
            $breadcrumb[$id] = _str_lreplace("Yes", "Enrolled in HS", $breadcrumb[$id]);
          }
          else {
            $breadcrumb[$id] = "Enrolled in HS";
          }
          break;
        case "tc_financial_aid:Yes":
          if (substr($breadcrumb[$id], 0, 2) == "<a") {
            $breadcrumb[$id] = _str_lreplace("Yes", "Financial Aid", $breadcrumb[$id]);
          }
          else {
            $breadcrumb[$id] = "Financial Aid";
          }
          break;
        case "tc_housing:Yes":
          if (substr($breadcrumb[$id], 0, 2) == "<a") {
            $breadcrumb[$id] = _str_lreplace("Yes", "Housing", $breadcrumb[$id]);
          }
          else {
            $breadcrumb[$id] = "Housing";
          }
          break;
      }

    }
  }
  return $breadcrumb;
}

/**
 * Replace the last occurrence of a $search in $subject with $replace.
 *
 * @param $search string to be replaced.
 * @param $replace replacement string to be swapped out with $search.
 * @param $subject string to replace $search inside of.
 *
 * @return mixed $subject with last occurrence of $search replaced with $replace.
 */
function _str_lreplace($search, $replace, $subject) {
  $pos = strrpos($subject, $search);
  if ($pos !== false) {
    $subject = substr_replace($subject, $replace, $pos, strlen($search));
  }
  return $subject;
}
