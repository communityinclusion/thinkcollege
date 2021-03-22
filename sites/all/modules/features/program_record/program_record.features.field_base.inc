<?php

/**
 * @file
 * program_record.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function program_record_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_check_the_box_below_to_con'.
  $field_bases['field_check_the_box_below_to_con'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_check_the_box_below_to_con',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'static_field',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'static_field',
  );

  // Exported field_base: 'field_i_confirm_this_program_s_i'.
  $field_bases['field_i_confirm_this_program_s_i'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_i_confirm_this_program_s_i',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'not complete 2020',
        1 => 'complete 2020',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_prog__ihe_support_svces'.
  $field_bases['field_prog__ihe_support_svces'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog__ihe_support_svces',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_accept_rate'.
  $field_bases['field_prog_accept_rate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_accept_rate',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_prog_admiss_crit_display'.
  $field_bases['field_prog_admiss_crit_display'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_admiss_crit_display',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$type_values = field_get_items($entity_type, $entity, \'field_prog_admiss_criteria\');
if (isset(field_get_items($entity_type, $entity, \'field_prog_age_range\')[0][\'value\'])) {
  $age_range = field_get_items($entity_type, $entity, \'field_prog_age_range\')[0][\'value\'];
}
if (isset(field_get_items($entity_type, $entity, \'field_prog_explain_other\')[0][\'value\'])) {
  $other_value = field_get_items($entity_type, $entity, \'field_prog_explain_other\')[0][\'value\'];
}

$output = array();
foreach ($type_values as $key => $type_value) {
  if ($type_value[\'value\'] == \'Age range\') {
    $output[] = \'Age range: \' . $age_range;
  }
  else if ($type_value[\'value\'] == \'Other\') {
    $output[] = $other_value;
  }
  else {
    $output[] = $type_value[\'value\'];
  }
}

if (count($output)) {
  $entity_field[0][\'value\'] = theme(\'item_list\', array(\'items\' => $output));
}
else {
  unset($entity_field[0][\'value\']);
}
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'longtext',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'profile2_private' => FALSE,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_prog_admiss_criteria'.
  $field_bases['field_prog_admiss_criteria'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_admiss_criteria',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Age range' => 'Age range (enter ages below)',
        'legal guardian' => 'Student must be their own legal guardian',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_cred_ihe_approv'.
  $field_bases['field_prog_cred_ihe_approv'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_cred_ihe_approv',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes, this credential has been through a formal approval process at the IHE' => 'Yes, this credential has been through a formal approval process at the IHE',
        'Awarded by program, not officially recognized by the IHE' => 'Awarded by program, not officially recognized by the IHE',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_district_only'.
  $field_bases['field_prog_district_only'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_district_only',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_facebook_page'.
  $field_bases['field_prog_facebook_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_facebook_page',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'profile2_private' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_prog_have_left_hs'.
  $field_bases['field_prog_have_left_hs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_have_left_hs',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes, all of our students have left high school' => 'Yes, all of our students have left high school',
        'Some of our students have left high school' => 'Some of our students have left high school',
        'No, all of our students are still in high school' => 'No, all of our students are still in high school',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_hs_dipl_req'.
  $field_bases['field_prog_hs_dipl_req'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_hs_dipl_req',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes, a regular high school diploma or GED is required' => 'Yes, a regular high school diploma or GED is required',
        'No, an IEP/non-standard diploma/certificate of attendance is accepted' => 'No, an IEP/non-standard diploma/certificate of attendance is accepted',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_instructions'.
  $field_bases['field_prog_instructions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_instructions',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'static_field',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'static_field',
  );

  // Exported field_base: 'field_prog_other_credent'.
  $field_bases['field_prog_other_credent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_other_credent',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_prog_out_of_stat_tuition'.
  $field_bases['field_prog_out_of_stat_tuition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_out_of_stat_tuition',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_prog_retention_rate'.
  $field_bases['field_prog_retention_rate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_retention_rate',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_prog_stem_cert'.
  $field_bases['field_prog_stem_cert'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_stem_cert',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_stem_courses'.
  $field_bases['field_prog_stem_courses'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_stem_courses',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_summ_prog_nm_display'.
  $field_bases['field_prog_summ_prog_nm_display'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_summ_prog_nm_display',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$yn_value = "No";
if (isset(field_get_items($entity_type, $entity, \'field_prog_summer_prog_y_n\')[0][\'value\'])) {
  $yn_value = field_get_items($entity_type, $entity, \'field_prog_summer_prog_y_n\')[0][\'value\'];
}

if (isset(field_get_items($entity_type, $entity, \'field_prog_summer_prog_name\')[0][\'value\'])) {
  $desc_value = field_get_items($entity_type, $entity, \'field_prog_summer_prog_name\')[0][\'value\'];
}

// If there\'s a summer program, display the name.
if ($yn_value == "Yes") {
  $entity_field[0][\'value\'] = $desc_value;
}
else {
  unset($entity_field[0][\'value\']);
}
',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'text',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'profile2_private' => FALSE,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_prog_summer_prog_name'.
  $field_bases['field_prog_summer_prog_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_summer_prog_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_prog_vr_partner'.
  $field_bases['field_prog_vr_partner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_vr_partner',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
