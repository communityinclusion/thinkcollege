<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */

/**
 * This template file is for fields on the "full content" display of Program
 * Record nodes.
 *
 * Most of the fields are rendered as table rows in each of the various sections
 * of the page, but some of them are not. The fields that aren't rendered as
 * table rows are listed in the $nontablefields array. If additional fields
 * are added to node--program-record--full.tpl.php, they will be rendered as
 * table rows unless they are added to the array.
 */

// These fields are not to be rendered as table rows.
$nontablefields = array(
  'field_prog_col_univ_name',
  'field_prog_street_address',
  'field_prog_address_line_2',
  'field_prog_city',
  'field_prog_state',
  'field_zip_code',
  'field_progprogram_contact_person',
  'field_prog_program_contact_email',
  'field_prog_contact_phone',
  'field_prog_program_website',
  'body',
);

?>


<?php if (in_array($element['#field_name'], $nontablefields)): ?>
  <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php if (!$label_hidden): ?>
      <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
    <?php endif; ?>
    <div class="field-items"<?php print $content_attributes; ?>>
      <?php foreach ($items as $delta => $item): ?>
        <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
      <?php endforeach; ?>
    </div>
  </div>
<?php else: ?>
  <tr class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <th><?php print $label ?></th>
    <td>
      <?php
      if (count($items) > 1) {
        $processed_items = array();
        foreach ($items as $key => $value) {
          $processed_items[] = $value['#markup'];
        }
        print theme('item_list', array('items' => $processed_items));
      }
      else {
        print render($items[0]);
      }
      ?>
      <?php //print render($items[0]); ?>
    </td>
  </tr>
<?php endif ?>
