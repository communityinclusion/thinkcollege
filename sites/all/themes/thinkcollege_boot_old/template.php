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
}

function thinkcollege_boot_preprocess_html(&$vars) {
$filepath = path_to_theme() . '/font-awesome/css/font-awesome.min.css';
drupal_add_css($filepath, array(
'group' => CSS_THEME,
));
}
