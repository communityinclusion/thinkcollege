<?php

/**
 * @file
 * template.php
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

/*
 * Implements hook_preprocess_node().
 */
function thinkcollege_boot_preprocess_node(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];

  // Determine display of various Program Record icons.
  if ($vars['type'] == 'program_record') {
    $node = $vars['node'];

    $vars['tc_housing_icon'] = FALSE;
    if ($node->field_prog_housing_y_n['und'][0]['value'] == 'Yes') {
      $vars['tc_housing_icon'] = TRUE;
    }

    $vars['tc_financial_aid_icon'] = FALSE;
    if ($node->field_prog_ctp_y_n['und'][0]['value'] == 'Yes') {
      $vars['tc_financial_aid_icon'] = TRUE;
    }

    $vars['tc_tpsid_icon'] = FALSE;
    if ($node->field_prog_is_was_tpsid['und'][0]['value'] != 'No') {
      $vars['tc_tpsid_icon'] = TRUE;
    }
  }
}

/*
 * Implements hook_preprocess_field().
 */
function thinkcollege_boot_preprocess_field(&$vars) {
  $vars['theme_hook_suggestions'][] = 'field__' . $vars['element']['#bundle'] . '__' . $vars['element']['#view_mode'];
}

/*
 * Implements hook_preprocess_block().
 */
function thinkcollege_boot_preprocess_block(&$vars) {
  // Add Bootstrap "affix" settings for Program Record ScrollSpy menu block.
  if ($vars['block_html_id'] == 'block-menu-menu-program-record-scrollspy') {
    $vars['attributes_array']['data-spy'] = 'affix';
    $vars['attributes_array']['data-offset-top'] = '100';
    $vars['attributes_array']['data-offset-bottom'] = '660';
    $vars['attributes_array']['data-clampedwidth'] = '.region-sidebar-first';
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
