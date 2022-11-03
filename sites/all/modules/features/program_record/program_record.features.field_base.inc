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

  // Exported field_base: 'field_all_students_in_course'.
  $field_bases['field_all_students_in_course'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_all_students_in_course',
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

  // Exported field_base: 'field_prog__extracurr_activ'.
  $field_bases['field_prog__extracurr_activ'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog__extracurr_activ',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Registered student organizations' => 'Registered student organizations',
        'Student government' => 'Student government',
        'Club sports' => 'Club sports',
        'Campus events' => 'Campus events',
        'Study abroad' => 'Study abroad',
        'Fraternities/sororities' => 'Fraternities/sororities',
        'Not applicable' => 'Not applicable',
        'None of the above' => 'None of the above',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
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

 else if ($type_value[\'value\'] == \'legal guardian\') {
    $output[] = \' The student is not under guardianship\';
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
      'recalculate' => FALSE,
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

  // Exported field_base: 'field_prog_campus_services'.
  $field_bases['field_prog_campus_services'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_campus_services',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Career services' => 'Career services',
        'Disability/accessibility services' => 'Disability/accessibility services',
        'Academic tutoring services' => 'Academic tutoring services',
        'Health services' => 'Health services',
        'Access to a transcript via the registrar' => 'Access to a transcript via the registrar',
        'Academic advising services (not program staff)' => 'Academic advising services (not program staff)',
        'Not applicable' => 'Not applicable',
        'None of the above' => 'None of the above',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_college_events'.
  $field_bases['field_prog_college_events'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_college_events',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'IHE Student orientation' => 'IHE Student orientation',
        'IHE Family orientation' => 'IHE Family orientation',
        'IHE Graduation' => 'IHE Graduation',
        'Not applicable' => 'Not applicable',
        'None of the above' => 'None of the above',
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

  // Exported field_base: 'field_prog_extracurr_inclusive'.
  $field_bases['field_prog_extracurr_inclusive'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_extracurr_inclusive',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '100%' => '100%',
        '75-99%' => '75-99%',
        '50-74%' => '50-74%',
        '25-49%' => '25-49%',
        '1-24%' => '1-24%',
        '0%' => '0%',
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

  // Exported field_base: 'field_prog_length_years2'.
  $field_bases['field_prog_length_years2'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_length_years2',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '1 year' => '1 year',
        '2 years' => '2 years',
        '3 years' => '3 years',
        '4 years' => '4 years',
        'Varies from student to student' => 'Varies from student to student',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
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

  // Exported field_base: 'field_prog_out_of_stat'.
  $field_bases['field_prog_out_of_stat'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_out_of_stat',
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
      'allowed_values_php' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
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

  // Exported field_base: 'field_prog_perc_academic'.
  $field_bases['field_prog_perc_academic'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_perc_academic',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '100%' => '100%',
        '75-99%' => '75-99%',
        '50-74%' => '50-74%',
        '25-49%' => '25-49%',
        '1-24%' => '1-24%',
        '0%' => '0%',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_remote_explain'.
  $field_bases['field_prog_remote_explain'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_remote_explain',
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

  // Exported field_base: 'field_prog_remote_learning'.
  $field_bases['field_prog_remote_learning'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_remote_learning',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Students enroll in all of their courses via remote learning' => 'Students enroll in all of their courses via remote learning',
        'Students can enroll in select courses via remote learning if they choose' => 'Students can enroll in select courses via remote learning if they choose',
        'Students are not permitted to take courses via remote learning' => 'Students are not permitted to take courses via remote learning',
        'Other: explain.' => 'Other,explain below',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_prog_remote_learning_displ'.
  $field_bases['field_prog_remote_learning_displ'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_remote_learning_displ',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$type_values = field_get_items($entity_type, $entity, \'field_prog_remote_learning\');
if (isset(field_get_items($entity_type, $entity, \'field_prog_remote_explain\')[0][\'value\'])) {
  $remote_explain = field_get_items($entity_type, $entity, \'field_prog_remote_explain\')[0][\'value\'];
}


$output = array();
foreach ($type_values as $key => $type_value) {
  if ($type_value[\'value\'] == \'Other: explain.\') {
    $output[] = $remote_explain;
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
}',
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
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
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

  // Exported field_base: 'field_prog_submit_date'.
  $field_bases['field_prog_submit_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prog_submit_date',
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
      'recalculate' => FALSE,
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
