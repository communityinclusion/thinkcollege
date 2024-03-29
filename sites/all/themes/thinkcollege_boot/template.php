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
        $output .= ' ' . $prefix .  $suffix;
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

  // (temporarily) Swap out the main menu ($primary_nav) for anonymous users.
  /*
  if (user_is_anonymous()) {
    $menu = menu_tree('menu-temporary-main-menu');
    $menu['#theme_wrappers'][0] = 'menu_tree__primary';
    $vars['primary_nav'] = $menu;
  }
  */


  // Add logos template
  $vars['think_college_logo'] = file_create_url(drupal_get_path('theme', 'thinkcollege_boot') . '/images/thinkcollege_new_white-sm.png');
}

/**
 * Implements template_process_page().
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
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_first_top']) || !empty($variables['page']['sidebar_second'])) {
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

    $vars['tc_selected_districts_icon'] = FALSE;
    if (isset($node->field_prog_district_only['und'][0]['value'])) {
      if ($node->field_prog_district_only['und'][0]['value'] == 'Yes') {
        $vars['tc_selected_districts_icon'] = TRUE;
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
    if (isset($vars['title_suffix']['contextual_links']['#element']['#facet']['field'])) {
      $vars['classes_array'][] = $vars['title_suffix']['contextual_links']['#element']['#facet']['field'];

      /*
       * One facet (TPSID) is displayed as a bootstrap well as per requirements.
       */
      if ($vars['title_suffix']['contextual_links']['#element']['#facet']['field'] == "tc_tpsid") {
        $vars['classes_array'][] = "well well-sm";
      }
    }
  }
}

/**
 * Implements template_preprocess_panels_pane().
 */
function thinkcollege_boot_preprocess_panels_pane(&$vars) {
  /**
   * Add JavaScript from https://github.com/kevinburke/customize-twitter-1.1 when
   * Twitter block is rendered in order to add styling.
   */
  $pane = $vars['pane'];
  if (isset($pane->css['css_id'])) {
    if ($pane->css['css_id'] == 'tc-home-twitter-block') {
      drupal_add_js(drupal_get_path('theme', 'thinkcollege_boot') . '/js/customize-twitter-1.1.min.js', array('scope' => 'footer', 'weight' => 10));
      drupal_add_js('var options = { "url": "' . base_path() . drupal_get_path('theme', 'thinkcollege_boot') . '/css/twitter_block.css' . '" }; CustomizeTwitterWidget(options);', array('type' => 'inline', 'scope' => 'footer', 'weight' => 20));
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
  if (isset($output['#entity_type'])) {
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
      $variables['title'] = "Offers Housing";
      break;
    case "Is this program able to provide federal financial aid as a Comprehensive Transition Program (CTP)?":
      $variables['title'] = "Offers Financial Aid";
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
    case "TC:State/Province":
      $variables['title'] = "Location";
      break;
    case "TC:School Type":
      $variables['title'] = "Type of School";
      break;
  }
  $title = "<div class='tc-facet-title'><span class='facet-title'>";
  $tit = t('@title', array('@title' => $variables['title']));
  if ($variables['title'] == "TC:Dual Enrollment" || $variables['title'] == "TC:Financial Aid"  || $variables['title'] == "TC:Housing"  || $variables['title'] == "TC:Particular school district") return ""; else return $title . $tit . "</span></div>";
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

  // Special ordering in TC College search - for when search is at /college-search
  if (current_path() == "college-search") {
    if (!drupal_is_front_page()) {

      // June, 2019 - save the most recent search URI for use in a breadcrumb on Program Record pages.
      $_SESSION['tc_college_search_last'] = $_SERVER['REQUEST_URI'];

      unset($breadcrumb[sizeof($breadcrumb) - 1]);
      array_splice($breadcrumb, 1, 0, '<a href="' . base_path() . 'college-search" class="active">Think College Search</a>');
    }
    // Search is on front page - arrange breadcrumbs slightly differently.
    else {
      array_splice($breadcrumb, 0, 0, '<a href="' . base_path() . '" class="active">Think College Search</a>');
    }
  }

  // June, 2019 - add a breadcrumb to the College Search from the comparison chart
  // and the FAQ.
  if ((substr(request_path(), 0, 25) == 'college-comparison-chart/') || (substr(request_path(), 0, 17) == 'search/favorites/')) {
    unset($breadcrumb[sizeof($breadcrumb) - 1]);
    array_splice($breadcrumb, 1, 0, '<a href="' . base_path() . 'college-search" class="active">Think College Search</a>');
  }

  // June, 2019 - if the user is looking at one of the following pages and there exists
  // previous search criteria, then inject it into the breadcrumb:
  //  1. Program record page (programs/*)
  //  2. Favorites page (search/favorites/*)
  //  3. FAQ page (faq)
  //  4. College Comparison page (college-comparison-chart/*)
  if ((substr(request_path(), 0, 9) == 'programs/') &&
    (isset($_SESSION['tc_college_search_last']))) {
    array_splice($breadcrumb, 2, 0, '<a href="' . check_plain($_SESSION['tc_college_search_last']) . '" class="active">Back to your search</a>');
  }
  if ((substr(request_path(), 0, 17) == 'search/favorites/') &&
    (isset($_SESSION['tc_college_search_last']))) {
    array_splice($breadcrumb, 2, 0, '<a href="' . check_plain($_SESSION['tc_college_search_last']) . '" class="active">Back to your search</a>');
  }
  if ((substr(request_path(), 0, 3) == 'faq') &&
    (isset($_SESSION['tc_college_search_last']))) {
    array_splice($breadcrumb, 1, 0, '<a href="' . check_plain($_SESSION['tc_college_search_last']) . '" class="active">Back to your search</a>');
  }
  if ((substr(request_path(), 0,25) == 'college-comparison-chart/') &&
    (isset($_SESSION['tc_college_search_last']))) {
    array_splice($breadcrumb, 2, 0, '<a href="' . check_plain($_SESSION['tc_college_search_last']) . '" class="active">Back to your search</a>');
  }

  // Special ordering in TC Resource search - for when search is at /resource-search
  if (current_path() == "resource-search") {
    unset($breadcrumb[sizeof($breadcrumb) - 1]);
    array_splice($breadcrumb, 1, 0, '<a href="' . base_path() . 'resource-search" class="active">Resource Search</a>');
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
      $id++; // Bump the $id up by one to account for the "Home" breadcrumb.
      // If we have a search term, we need to skip it for replacement.
      if (isset($_REQUEST['search_api_views_fulltext'])) {
        if ($_REQUEST['search_api_views_fulltext']) {
          $id++;
        }
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
        case "field_prog_district_only:Yes":
          if (substr($breadcrumb[$id], 0, 2) == "<a") {
            $breadcrumb[$id] = _str_lreplace("Yes", "Not limited by district", $breadcrumb[$id]);
          }
          else {
            $breadcrumb[$id] = "Not limited by district";
          }
          break;
        case "tc_school_type:Other":
          if (substr($breadcrumb[$id], 0, 2) == "<a") {
            $breadcrumb[$id] = _str_lreplace("Other", "Other (type of school)", $breadcrumb[$id]);
          }
          else {
            $breadcrumb[$id] = "Other (type of school)";
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

/*
 * THIS SHOULD ONLY BE ENABLED ON LOCAL SITES TO PERMIT DEVEL/dsm() DEBUGGING!!!!
 * See https://www.drupal.org/node/2824575#comment-11951277
 */
/*
function thinkcollege_boot_status_messages($variables) {
	$display = $variables ['display'];
	$output = '';

	$status_heading = array (
			'status' => t ( 'Status message' ),
			'error' => t ( 'Error message' ),
			'warning' => t ( 'Warning message' ),
			'info' => t ( 'Informative message' )
	);

	// Map Drupal message types to their corresponding Bootstrap classes.
	// @see http://twitter.github.com/bootstrap/components.html#alerts
	$status_class = array (
			'status' => 'success',
			'error' => 'danger',
			'warning' => 'warning',
			// Not supported, but in theory a module could send any type of message.
			// @see drupal_set_message()
			// @see theme_status_messages()
			'info' => 'info'
	);

	// Retrieve messages.
	$message_list = drupal_get_messages ( $display );

	// Allow the disabled_messages module to filter the messages, if enabled.
	if (module_exists ( 'disable_messages' ) && variable_get ( 'disable_messages_enable', '1' )) {
		$message_list = disable_messages_apply_filters ( $message_list );
	}

	foreach ( $message_list as $type => $messages ) {
		$class = (isset ( $status_class [$type] )) ? ' alert-' . $status_class [$type] : '';
		$output .= "\n";
		$output .= "  ×\n";

		if (! empty ( $status_heading [$type] )) {
			if (! module_exists ( 'devel' )) {
				$output .= '' . _bootstrap_filter_xss ( $status_heading [$type] ) . "\n";
			} else {
				$output .= '' . $status_heading [$type] . "\n";
			}
		}

		if (count ( $messages ) > 1) {
			$output .= " \n";
			foreach ( $messages as $message ) {
				if (! module_exists ( 'devel' )) {
					$output .= '  ' . _bootstrap_filter_xss ( $message ) . "\n";
				} else {
					$output .= ' ' . $message . "\n";
				}
			}
			$output .= " \n";
		} else {
			if (! module_exists ( 'devel' )) {
				$output .= _bootstrap_filter_xss ( $messages [0] );
			} else {
				$output .= $messages [0];
			}
		}
		$output .= "\n";
	}
	return $output;
}
*/

/**
 * Theme a list of sort options.
 *
 * @param array $variables
 *   An associative array containing:
 *   - items: The sort options
 *   - options: Various options to pass
 *
 * @return string
 */
function thinkcollege_boot_search_api_sorts_list(array $variables) {
  $params =  drupal_get_query_parameters();
  $have_selected = FALSE;
  foreach ($variables['items'] as $id => $item) {
    //$variables['items'][$id]['#theme'] = 'tc_option_select_item';
    $vars['search_sort_vars'] = $variables['items'][$id];
    $params =  drupal_get_query_parameters();

    // sort=search_api_relevance
    // sort=created
    // sort=tc_alpha_sortable_title
    // This logic block only works if Relevance is the last listed sort in the config.
    $vars['isselected'] = "";
    if (!$have_selected) {
      if ($item['#name'] == 'Alphabetical') {
        if (isset($params['sort'])) {
          if ($params['sort'] == "tc_alpha_sortable_title") {
            $vars['isselected'] = "selected";
            $have_selected = TRUE;
          }
        }
      }
      else if ($item['#name'] == 'Publication Date') {
        if (isset($params['sort'])) {
          if (in_array($params['sort'], array("created", "field_resourc_publication_date"))) {
            $vars['isselected'] = "selected";
            $have_selected = TRUE;
          }
        }
      }
      else {
        // Relevance
        $vars['isselected'] = "selected";
        $have_selected = TRUE;
      }
    }

    if (isset($item['#order_options']['query'])) {
      if (sizeof($item['#order_options']['query']) > 0) {
        foreach($item['#order_options']['query'] as $thing => $value) {
          $params[$thing] = $value;
        }
      }
      else {
        foreach($item['#options']['query'] as $thing => $value) {
          $params[$thing] = $value;
        }
      }
    }
    else {
      foreach($item['#options']['query'] as $thing => $value) {
        $params[$thing] = $value;
      }
    }

    $qr = http_build_query($params);
    $vars['currenturl'] = current_path();
    $vars['newurl'] = $qr;
    $vars['link_name'] = $item['#name'];
    $items[] = theme('tc_option_select_item', $vars);
  }


  $output = '<select class="form-control" onchange="location = this.value;">';
  foreach ($items as $item) {
    $output .= $item;
  }
  $output .= "</select>";
  return $output;
}


function thinkcollege_boot_date_all_day_label() {
  return '';
}
