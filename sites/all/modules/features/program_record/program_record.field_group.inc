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
    'weight' => '83',
    'children' => array(
      0 => 'field_prog_course_types',
      1 => 'field_prog_other_career_dev',
      2 => 'field_prog_special_courses',
      3 => 'field_prog_spec_courses_mor_info',
      4 => 'field_prog_credential',
      5 => 'field_prog_perc_w_compet_employ',
      6 => 'field_prog_vocational_credential',
      7 => 'field_prog_perc_acad_time',
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
  $field_groups['group_prog_academic|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_acad|node|program_record|form';
  $field_group->group_name = 'group_prog_acad';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
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
      6 => 'field_please_select_any_all_of_t',
      7 => 'field_prog_perc_acad_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prog-acad field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prog_acad|node|program_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_accep_reten_complet|node|program_record|form';
  $field_group->group_name = 'group_prog_accep_reten_complet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Acceptance, Retention and Completion Rates',
    'weight' => '5',
    'children' => array(
      0 => 'field_prog_num_applied',
      1 => 'field_prog_15_16_accepted',
      2 => 'field_prog_new_studt_f14',
      3 => 'field_prog_studt_retn_f15',
      4 => 'field_prog_length_years',
      5 => 'field_prog_know_how_many',
      6 => 'field_prog_explain_nums',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prog-accep-reten-complet field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prog_accep_reten_complet|node|program_record|form'] = $field_group;

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
    'weight' => '86',
    'children' => array(
      0 => 'field_prog_num_applied',
      1 => 'field_prog_15_16_accepted',
      2 => 'field_prog_new_studt_f14',
      3 => 'field_prog_studt_retn_f15',
      4 => 'field_prog_length_years',
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
  $field_groups['group_prog_accept_ret_comp|node|program_record|default'] = $field_group;

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
  $field_groups['group_prog_affiliate|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_affiliate|node|program_record|form';
  $field_group->group_name = 'group_prog_affiliate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliates',
    'weight' => '3',
    'children' => array(
      0 => 'field_prog_school_dist',
      1 => 'field_prog_school_dist_contact',
      2 => 'field_prog_schl_dist_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Affiliates',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-prog-affiliate field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_prog_affiliate|node|program_record|form'] = $field_group;

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
    'weight' => '81',
    'children' => array(
      0 => 'field_prog_ctp_y_n',
      1 => 'field_prog_pay_methods',
      2 => 'field_prog_other_costs',
      3 => 'field_prog_explain_other_costs',
      4 => 'field_prog_tuition',
      5 => 'field__prog_room_and_board',
      6 => 'field_prog_other_costs_amount',
      7 => 'field_prog_addl_scholarships',
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
  $field_groups['group_prog_cost|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_cost|node|program_record|form';
  $field_group->group_name = 'group_prog_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
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
      11 => 'field_prog_cost_y_n',
      12 => 'field_prog_costs_describe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Costs for Current Academic Year',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-prog-cost field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_prog_cost|node|program_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_employment|node|program_record|default';
  $field_group->group_name = 'group_prog_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employment',
    'weight' => '87',
    'children' => array(
      0 => 'field_prog_perc_employed_af_grad',
    ),
    'format_type' => 'hidden',
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
  $field_groups['group_prog_employment|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_employment|node|program_record|form';
  $field_group->group_name = 'group_prog_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employment',
    'weight' => '8',
    'children' => array(
      0 => 'field_prog_other_career_dev',
      1 => 'field_prog_perc_w_compet_employ',
      2 => 'field_prog_perc_employed_af_grad',
      3 => 'field_prog_vocational_credential',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prog-employment field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prog_employment|node|program_record|form'] = $field_group;

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
    'weight' => '85',
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
  $field_groups['group_prog_extracurr|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_extracur|node|program_record|form';
  $field_group->group_name = 'group_prog_extracur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extracurricular',
    'weight' => '10',
    'children' => array(
      0 => 'field_prog_student_orgs_y_n',
      1 => 'field_prog_overall_time_dist',
      2 => 'field_prog_extracurric_explain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prog-extracur field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prog_extracur|node|program_record|form'] = $field_group;

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
    'weight' => '84',
    'children' => array(
      0 => 'field_prog_housing_y_n',
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
  $field_groups['group_prog_housing|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_housing|node|program_record|form';
  $field_group->group_name = 'group_prog_housing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Housing',
    'weight' => '9',
    'children' => array(
      0 => 'field_prog_housing_y_n',
      1 => 'field_prog_studt_housing_options',
      2 => 'field_prog_other_hous_explain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prog-housing field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prog_housing|node|program_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_preliminary|node|program_record|form';
  $field_group->group_name = 'group_prog_preliminary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instructions and Preliminary questions',
    'weight' => '1',
    'children' => array(
      0 => 'field_prog_serves_id',
      1 => 'field_prog_accredited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Instructions and Preliminary questions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-prog-preliminary field-group-fieldset',
        'description' => '<h3><strong>Instructions: </strong>Please fill in <strong>ALL</strong> required fields in the form below (with an asterisk(*)).  The form <strong>will not save any information</strong> if there are unfilled required fields or errors in fields.  Save the link  to this page and your login information.  You may return to correct information if you don\'t have it on hand now.</h3>',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_prog_preliminary|node|program_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_priorities|node|program_record|default';
  $field_group->group_name = 'group_prog_priorities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top three program priorities',
    'weight' => '13',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_prog_priorities|node|program_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_prog_info|node|program_record|form';
  $field_group->group_name = 'group_prog_prog_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Information',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_prog_street_address',
      2 => 'field_prog_address_line_2',
      3 => 'field_prog_city',
      4 => 'field_prog_state',
      5 => 'field_zip_code',
      6 => 'field_prog_program_email',
      7 => 'field_progprogram_contact_person',
      8 => 'field_prog_program_contact_email',
      9 => 'field_prog_program_website',
      10 => 'field_prog_col_univ_name',
      11 => 'field_prog_type_of_school',
      12 => 'field_prog_hs_coll',
      13 => 'field_prog_public_or_privat',
      14 => 'field_prog_is_was_tpsid',
      15 => 'field_prog_when_will_progr_start',
      16 => 'field_prog_summer_prog_y_n',
      17 => 'field_prog_summer_descrip',
      18 => 'field_prog_summer_info_link',
      19 => 'field_how_many_students_total_at',
      20 => 'field_prog_contact_phone',
      21 => 'field_prog_photo',
      22 => 'field_prog_other_explain',
      23 => 'field_address',
      24 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Program Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-prog-prog-info field-group-fieldset',
        'description' => '<p> Questions with a red * are <strong>required</strong>.</p><p>If you do not answer a required question, your record will not be saved.  You can enter “filler” responses and go back and replace them later by logging in again and returning to those questions.</p>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_prog_prog_info|node|program_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prog_requirements|node|program_record|form';
  $field_group->group_name = 'group_prog_requirements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Requirements for Attendance',
    'weight' => '4',
    'children' => array(
      0 => 'field_prog_admit_deadline',
      1 => 'field_prog_admiss_link',
      2 => 'field_prog_admiss_requirements',
      3 => 'field_prog_age_range',
      4 => 'field_prog_explain_other',
      5 => 'field_prog_which_disabilities',
      6 => 'field_prog_which_dis_specify',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prog-requirements field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_prog_requirements|node|program_record|form'] = $field_group;

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
    'weight' => '82',
    'children' => array(
      0 => 'field_prog_admiss_link',
      1 => 'field_prog_admiss_requirements',
      2 => 'field_prog_explain_other',
      3 => 'field_prog_which_disabilities',
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
  $field_groups['group_prog_requir|node|program_record|default'] = $field_group;

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
    'weight' => '12',
    'children' => array(
      0 => 'group_prog_academic',
      1 => 'group_prog_accept_ret_comp',
      2 => 'group_prog_affiliate',
      3 => 'group_prog_cost',
      4 => 'group_prog_extracurr',
      5 => 'group_prog_housing',
      6 => 'group_prog_requir',
      7 => 'group_program_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_prog_tabs|node|program_record|default'] = $field_group;

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
      0 => 'field_prog_type_of_school',
      1 => 'field_prog_hs_coll',
      2 => 'field_prog_public_or_privat',
      3 => 'field_prog_is_was_tpsid',
      4 => 'field_prog_when_will_progr_start',
      5 => 'field_prog_summer_prog_y_n',
      6 => 'field_prog_summer_descrip',
      7 => 'field_prog_summer_info_link',
      8 => 'field_how_many_students_total_at',
      9 => 'field_prog_other_explain',
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
  $field_groups['group_program_info|node|program_record|default'] = $field_group;

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
  t('Instructions and Preliminary questions');
  t('Program Information');
  t('Requirements');
  t('Requirements for Attendance');
  t('Tabs');
  t('Top three program priorities');

  return $field_groups;
}
