<?php

/**
 * @file
 * program_record.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function program_record_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_academic|node|program_record|default';
  $field_group->group_name = 'group_prog_academic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Academic',
    'weight' => '84',
    'children' => array(
      0 => 'field_prog_course_types',
      1 => 'field_prog_more_course_detail',
      2 => 'field_prog_spec_courses_mor_info',
      3 => 'field_prog_credential',
      4 => 'field_name_of_credential_degree_',
      5 => 'field_please_select_any_all_of_t',
      6 => 'field_prog_perc_acad_time',
      7 => 'field_students_take_courses_disp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Academic',
      'instance_settings' => array(
        'id' => 'academic',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_acad|node|program_record|form';
  $field_group->group_name = 'group_prog_acad';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Academics',
    'weight' => '7',
    'children' => array(
      0 => 'field_prog_course_types',
      1 => 'field_prog_more_course_detail',
      2 => 'field_prog_special_courses',
      3 => 'field_prog_spec_courses_mor_info',
      4 => 'field_prog_credential',
      5 => 'field_name_of_credential_degree_',
      6 => 'field_prog_perc_acad_time',
      7 => 'field_prog_other_credent',
      8 => 'field_prog__ihe_support_svces',
      9 => 'field_prog_cred_ihe_approv',
      10 => 'field_prog_stem_cert',
      11 => 'field_prog_stem_courses',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_accep_reten_complet|node|program_record|form';
  $field_group->group_name = 'group_prog_accep_reten_complet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Acceptance, Retention and Completion Rates',
    'weight' => '5',
    'children' => array(
      0 => 'field_prog_length_years',
      1 => 'field_prog_explain_nums',
      2 => 'field_prog_accept_rate',
      3 => 'field_prog_retention_rate',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_accept_ret_comp|node|program_record|default';
  $field_group->group_name = 'group_prog_accept_ret_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Acceptance, Rentention, and Completion Rates',
    'weight' => '82',
    'children' => array(
      0 => 'field_prog_length_years',
      1 => 'field_prog_explain_nums',
      2 => 'field_admission_rate_display',
      3 => 'field_prog_retention_rate_displa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Acceptance, Rentention, and Completion Rates',
      'instance_settings' => array(
        'id' => 'acceptance-rates',
        'classes' => 'group-prog-accept-ret-comp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_affiliate|node|program_record|default';
  $field_group->group_name = 'group_prog_affiliate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Affiliates',
    'weight' => '80',
    'children' => array(
      0 => 'field_prog_school_dist',
      1 => 'field_prog_school_dist_contact',
      2 => 'field_prog_schl_dist_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Affiliates',
      'instance_settings' => array(
        'id' => 'affiliate-information',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_affiliate|node|program_record|form';
  $field_group->group_name = 'group_prog_affiliate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Program Info. part 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_prog_type_of_school',
      1 => 'field_prog_school_dist',
      2 => 'field_prog_school_dist_contact',
      3 => 'field_prog_schl_dist_email',
      4 => 'field_prog_hs_coll',
      5 => 'field_prog_public_or_privat',
      6 => 'field_prog_is_was_tpsid',
      7 => 'field_prog_when_will_progr_start',
      8 => 'field_prog_summer_prog_y_n',
      9 => 'field_prog_summer_descrip',
      10 => 'field_prog_summer_info_link',
      11 => 'field_how_many_students_total_at',
      12 => 'field_prog_other_explain',
      13 => 'field_prog_district_only',
      14 => 'field_prog_summer_prog_name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_cost|node|program_record|default';
  $field_group->group_name = 'group_prog_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Cost',
    'weight' => '83',
    'children' => array(
      0 => 'field_prog_ctp_y_n',
      1 => 'field_prog_addl_scholarships',
      2 => 'field_prog_scholarship_link',
      3 => 'field_prog_cost_of_the_program',
      4 => 'field_prog_other_costs_display',
      5 => 'field_prog_room_and_board_displa',
      6 => 'field_prog_specific_fees_display',
      7 => 'field_prog_students_pay_display',
      8 => 'field_tuition_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cost',
      'instance_settings' => array(
        'id' => 'cost',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_cost|node|program_record|form';
  $field_group->group_name = 'group_prog_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Costs for Current Academic Year',
    'weight' => '6',
    'children' => array(
      0 => 'field_prog_ctp_y_n',
      1 => 'field_prog_pay_methods',
      2 => 'field_prog_pay_other',
      3 => 'field_prog_other_costs',
      4 => 'field_prog_explain_other_costs',
      5 => 'field_prog_tuition',
      6 => 'field__prog_room_and_board',
      7 => 'field_prog_specific_fees',
      8 => 'field_prog_other_costs_amount',
      9 => 'field_prog_addl_scholarships',
      10 => 'field_prog_scholarship_link',
      11 => 'field_prog_out_of_stat_tuition',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_employment|node|program_record|default';
  $field_group->group_name = 'group_prog_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Employment',
    'weight' => '85',
    'children' => array(
      0 => 'field_prog_perc_w_compet_employ',
      1 => 'field_prog_perc_employed_af_grad',
      2 => 'field_prog_vocational_credential',
      3 => 'field_prog_other_career_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Employment',
      'instance_settings' => array(
        'id' => 'employment',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_employment|node|program_record|form';
  $field_group->group_name = 'group_prog_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Employment',
    'weight' => '8',
    'children' => array(
      0 => 'field_prog_other_career_dev',
      1 => 'field_prog_perc_w_compet_employ',
      2 => 'field_prog_perc_employed_af_grad',
      3 => 'field_prog_vocational_credential',
      4 => 'field_prog_vr_partner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_extracurr|node|program_record|default';
  $field_group->group_name = 'group_prog_extracurr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Extracurricular',
    'weight' => '87',
    'children' => array(
      0 => 'field_prog_student_orgs_y_n',
      1 => 'field_prog_overall_time_dist',
      2 => 'field_prog_extracurric_explain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extracurricular',
      'instance_settings' => array(
        'id' => 'extracurricular',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_housing|node|program_record|default';
  $field_group->group_name = 'group_prog_housing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Housing',
    'weight' => '86',
    'children' => array(
      0 => 'field_prog_housing_y_n',
      1 => 'field_prog_studt_housing_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Housing',
      'instance_settings' => array(
        'id' => 'housing',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_housing|node|program_record|form';
  $field_group->group_name = 'group_prog_housing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Housing and Extracurricular',
    'weight' => '9',
    'children' => array(
      0 => 'field_prog_housing_y_n',
      1 => 'field_prog_studt_housing_options',
      2 => 'field_prog_other_hous_explain',
      3 => 'field_prog_student_orgs_y_n',
      4 => 'field_prog_overall_time_dist',
      5 => 'field_prog_extracurric_explain',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Housing and Extracurricular',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_preliminary|node|program_record|form';
  $field_group->group_name = 'group_prog_preliminary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Instructions and Preliminary questions',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_prog_info|node|program_record|form';
  $field_group->group_name = 'group_prog_prog_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Program Information',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_prog_program_email',
      2 => 'field_progprogram_contact_person',
      3 => 'field_prog_program_contact_email',
      4 => 'field_prog_program_website',
      5 => 'field_prog_col_univ_name',
      6 => 'field_prog_contact_phone',
      7 => 'field_prog_photo',
      8 => 'field_prog_serves_id',
      9 => 'field_prog_accredited',
      10 => 'field_address',
      11 => 'field_prog_facebook_page',
      12 => 'field_prog_submit_date',
      13 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_requirements|node|program_record|form';
  $field_group->group_name = 'group_prog_requirements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sections';
  $field_group->data = array(
    'label' => 'Requirements for Attendance',
    'weight' => '4',
    'children' => array(
      0 => 'field_prog_admit_deadline',
      1 => 'field_prog_admiss_link',
      2 => 'field_prog_age_range',
      3 => 'field_prog_explain_other',
      4 => 'field_prog_which_dis_specify',
      5 => 'field_prog_which_disabilities',
      6 => 'field_prog_out_of_stat',
      7 => 'field_prog_admiss_criteria',
      8 => 'field_prog_have_left_hs',
      9 => 'field_prog_hs_dipl_req',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_requir|node|program_record|default';
  $field_group->group_name = 'group_prog_requir';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'Requirements',
    'weight' => '81',
    'children' => array(
      0 => 'field_prog_admit_deadline',
      1 => 'field_prog_admiss_link',
      2 => 'field_disabilities_display_',
      3 => 'field_requirements_display',
      4 => 'field_prog_out_of_stat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Requirements',
      'instance_settings' => array(
        'id' => 'requirements',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_tabs|node|program_record|default';
  $field_group->group_name = 'group_prog_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '10',
    'children' => array(
      0 => 'group_prog_academic',
      1 => 'group_prog_accept_ret_comp',
      2 => 'group_prog_affiliate',
      3 => 'group_prog_cost',
      4 => 'group_prog_employment',
      5 => 'group_prog_extracurr',
      6 => 'group_prog_housing',
      7 => 'group_prog_requir',
      8 => 'group_program_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_info|node|program_record|default';
  $field_group->group_name = 'group_program_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_prog_tabs';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '79',
    'children' => array(
      0 => 'field_prog_hs_coll',
      1 => 'field_prog_public_or_privat',
      2 => 'field_prog_when_will_progr_start',
      3 => 'field_prog_summer_info_link',
      4 => 'field_how_many_students_total_at',
      5 => 'field_prog_tpsid_display',
      6 => 'field_summer_program_display',
      7 => 'field_type_of_school_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'id' => 'general',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections|node|program_record|form';
  $field_group->group_name = 'group_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Survey',
    'weight' => '1',
    'children' => array(
      0 => 'group_prog_acad',
      1 => 'group_prog_accep_reten_complet',
      2 => 'group_prog_affiliate',
      3 => 'group_prog_cost',
      4 => 'group_prog_employment',
      5 => 'group_prog_housing',
      6 => 'group_prog_preliminary',
      7 => 'group_prog_prog_info',
      8 => 'group_prog_requirements',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-sections field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Academic');
  t('Academics');
  t('Acceptance, Rentention, and Completion Rates');
  t('Acceptance, Retention and Completion Rates');
  t('Affiliates');
  t('Cost');
  t('Costs for Current Academic Year');
  t('Employment');
  t('Extracurricular');
  t('General');
  t('Housing');
  t('Housing and Extracurricular');
  t('Instructions and Preliminary questions');
  t('Program Info. part 2');
  t('Program Information');
  t('Program Survey');
  t('Requirements');
  t('Requirements for Attendance');
  t('Tabs');

  return $field_groups;
}
