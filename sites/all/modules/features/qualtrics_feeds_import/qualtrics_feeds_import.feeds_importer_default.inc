<?php

/**
 * @file
 * qualtrics_feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function qualtrics_feeds_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'qualtrics_program_import';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import Qualtrics survey to program form',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
        'direct' => 0,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Qualtrics program import',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => '1',
        'authorize' => 0,
        'bundle' => 'program_record',
        'expire' => '-1',
        'input_format' => 'full_html',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'Q1',
            'target' => 'field_prog_accredited',
            'unique' => FALSE,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'Q2',
            'target' => 'field_prog_serves_id',
            'unique' => FALSE,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Q3',
            'target' => 'title',
            'unique' => 0,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Q4',
            'target' => 'field_prog_col_univ_name',
            'unique' => FALSE,
          ),
          4 => array(
            'format' => 'filtered_html',
            'language' => 'und',
            'source' => 'Q5',
            'target' => 'body',
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Q10',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Q11',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Q12',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          8 => array(
            'language' => 'und',
            'source' => 'Q9',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          9 => array(
            'language' => 'und',
            'source' => 'Q14',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          10 => array(
            'language' => 'und',
            'source' => 'Q21',
            'target' => 'field_prog_facebook_page:url',
            'unique' => FALSE,
          ),
          11 => array(
            'language' => 'und',
            'source' => 'Q15',
            'target' => 'field_prog_program_email',
            'unique' => FALSE,
          ),
          12 => array(
            'language' => 'und',
            'source' => 'Q16',
            'target' => 'field_progprogram_contact_person',
            'unique' => FALSE,
          ),
          13 => array(
            'language' => 'und',
            'source' => 'Q17',
            'target' => 'field_prog_program_contact_email',
            'unique' => FALSE,
          ),
          14 => array(
            'language' => 'und',
            'source' => 'Q18',
            'target' => 'field_prog_contact_phone',
            'unique' => FALSE,
          ),
          15 => array(
            'language' => 'und',
            'source' => 'Q19',
            'target' => 'field_prog_program_website:url',
            'unique' => FALSE,
          ),
          16 => array(
            'language' => 'und',
            'source' => 'Q22',
            'target' => 'field_prog_public_or_privat',
            'unique' => FALSE,
          ),
          17 => array(
            'language' => 'und',
            'source' => 'Q22a',
            'target' => 'field_prog_type_of_school',
            'unique' => FALSE,
          ),
          18 => array(
            'language' => 'und',
            'source' => 'Q23',
            'target' => 'field_prog_other_explain',
            'unique' => FALSE,
          ),
          19 => array(
            'language' => 'und',
            'source' => 'Q24',
            'target' => 'field_prog_is_was_tpsid',
            'unique' => FALSE,
          ),
          20 => array(
            'language' => 'und',
            'source' => 'Q25',
            'target' => 'field_prog_hs_coll',
            'unique' => FALSE,
          ),
          21 => array(
            'language' => 'und',
            'source' => 'Q26',
            'target' => 'field_how_many_students_total_at',
            'unique' => FALSE,
          ),
          22 => array(
            'language' => 'und',
            'source' => 'Q27',
            'target' => 'field_prog_when_will_progr_start',
            'unique' => FALSE,
          ),
          23 => array(
            'language' => 'und',
            'source' => 'Q28',
            'target' => 'field_prog_summer_prog_y_n',
            'unique' => FALSE,
          ),
          24 => array(
            'language' => 'und',
            'source' => 'Q102',
            'target' => 'field_prog_summer_prog_name',
            'unique' => FALSE,
          ),
          25 => array(
            'format' => 'filtered_html',
            'language' => 'und',
            'source' => 'Q29',
            'target' => 'field_prog_summer_descrip',
          ),
          26 => array(
            'language' => 'und',
            'source' => 'Q30',
            'target' => 'field_prog_summer_info_link:url',
            'unique' => FALSE,
          ),
          27 => array(
            'language' => 'und',
            'source' => 'Q102',
            'target' => 'field_prog_summer_info_link:title',
            'unique' => FALSE,
          ),
          28 => array(
            'language' => 'und',
            'source' => 'Q32',
            'target' => 'field_prog_district_only',
            'unique' => FALSE,
          ),
          29 => array(
            'language' => 'und',
            'source' => 'Q31',
            'target' => 'field_prog_school_dist',
            'unique' => FALSE,
          ),
          30 => array(
            'language' => 'und',
            'source' => 'Q33',
            'target' => 'field_prog_school_dist_contact',
            'unique' => FALSE,
          ),
          31 => array(
            'language' => 'und',
            'source' => 'Q34',
            'target' => 'field_prog_schl_dist_email',
            'unique' => FALSE,
          ),
          32 => array(
            'language' => 'und',
            'source' => 'Q87',
            'target' => 'field_prog_have_left_hs',
            'unique' => FALSE,
          ),
          33 => array(
            'language' => 'und',
            'source' => 'Q38',
            'target' => 'field_prog_admiss_criteria',
            'unique' => FALSE,
          ),
          34 => array(
            'language' => 'und',
            'source' => 'Q86',
            'target' => 'field_prog_hs_dipl_req',
            'unique' => FALSE,
          ),
          35 => array(
            'language' => 'und',
            'source' => 'Q39',
            'target' => 'field_prog_age_range',
            'unique' => FALSE,
          ),
          36 => array(
            'language' => 'und',
            'source' => 'Q88',
            'target' => 'field_prog_explain_other',
            'unique' => FALSE,
          ),
          37 => array(
            'language' => 'und',
            'source' => 'Q36',
            'target' => 'field_prog_admit_deadline',
            'unique' => FALSE,
          ),
          38 => array(
            'language' => 'und',
            'source' => 'Q37',
            'target' => 'field_prog_admiss_link:url',
            'unique' => FALSE,
          ),
          39 => array(
            'language' => 'und',
            'source' => 'Q35',
            'target' => 'field_prog_out_of_stat',
            'unique' => FALSE,
          ),
          40 => array(
            'language' => 'und',
            'source' => 'Q41',
            'target' => 'field_prog_which_disabilities',
            'unique' => FALSE,
          ),
          41 => array(
            'language' => 'und',
            'source' => 'Q42',
            'target' => 'field_prog_which_dis_specify',
            'unique' => FALSE,
          ),
          42 => array(
            'language' => 'und',
            'source' => 'Q105',
            'target' => 'field_prog_accept_rate',
            'unique' => FALSE,
          ),
          43 => array(
            'language' => 'und',
            'source' => 'Q106',
            'target' => 'field_prog_retention_rate',
            'unique' => FALSE,
          ),
          44 => array(
            'language' => 'und',
            'source' => 'Q97',
            'target' => 'field_prog_explain_nums',
            'unique' => FALSE,
          ),
          45 => array(
            'language' => 'und',
            'source' => 'Q89_4',
            'target' => 'field_prog_tuition',
            'unique' => FALSE,
          ),
          46 => array(
            'language' => 'und',
            'source' => 'Q95_4',
            'target' => 'field_prog_out_of_stat_tuition',
            'unique' => FALSE,
          ),
          47 => array(
            'language' => 'und',
            'source' => 'Q90_4',
            'target' => 'field_prog_specific_fees',
            'unique' => FALSE,
          ),
          48 => array(
            'language' => 'und',
            'source' => 'Q91_4',
            'target' => 'field__prog_room_and_board',
            'unique' => FALSE,
          ),
          49 => array(
            'language' => 'und',
            'source' => 'Q54',
            'target' => 'field_prog_other_costs',
            'unique' => FALSE,
          ),
          50 => array(
            'language' => 'und',
            'source' => 'Q56',
            'target' => 'field_prog_explain_other_costs',
            'unique' => FALSE,
          ),
          51 => array(
            'language' => 'und',
            'source' => 'Q57',
            'target' => 'field_prog_ctp_y_n',
            'unique' => FALSE,
          ),
          52 => array(
            'language' => 'und',
            'source' => 'Q58',
            'target' => 'field_prog_pay_methods',
            'unique' => FALSE,
          ),
          53 => array(
            'language' => 'und',
            'source' => 'Q59',
            'target' => 'field_prog_pay_other',
            'unique' => FALSE,
          ),
          54 => array(
            'language' => 'und',
            'source' => 'Q60',
            'target' => 'field_prog_addl_scholarships',
            'unique' => FALSE,
          ),
          55 => array(
            'language' => 'und',
            'source' => 'Q65',
            'target' => 'field_prog_course_types',
            'unique' => FALSE,
          ),
          56 => array(
            'language' => 'und',
            'source' => 'Q66',
            'target' => 'field_prog_more_course_detail',
            'unique' => FALSE,
          ),
          57 => array(
            'language' => 'und',
            'source' => 'Q67',
            'target' => 'field_prog_special_courses',
            'unique' => FALSE,
          ),
          58 => array(
            'language' => 'und',
            'source' => 'Q68',
            'target' => 'field_prog_spec_courses_mor_info',
            'unique' => FALSE,
          ),
          59 => array(
            'language' => 'und',
            'source' => 'Q70',
            'target' => 'field_prog_credential',
            'unique' => FALSE,
          ),
          60 => array(
            'language' => 'und',
            'source' => 'Q71',
            'target' => 'field_name_of_credential_degree_',
            'unique' => FALSE,
          ),
          61 => array(
            'language' => 'und',
            'source' => 'Q72',
            'target' => 'field_prog_cred_ihe_approv',
            'unique' => FALSE,
          ),
          62 => array(
            'language' => 'und',
            'source' => 'Q74',
            'target' => 'field_prog_perc_w_compet_employ',
            'unique' => FALSE,
          ),
          63 => array(
            'language' => 'und',
            'source' => 'Q75',
            'target' => 'field_prog_other_career_dev',
            'unique' => FALSE,
          ),
          64 => array(
            'language' => 'und',
            'source' => 'Q101',
            'target' => 'field_prog_vocational_credential',
            'unique' => FALSE,
          ),
          65 => array(
            'language' => 'und',
            'source' => 'Q76',
            'target' => 'field_prog_perc_employed_af_grad',
            'unique' => FALSE,
          ),
          66 => array(
            'language' => 'und',
            'source' => 'Q78',
            'target' => 'field_prog_vr_partner',
            'unique' => FALSE,
          ),
          67 => array(
            'language' => 'und',
            'source' => 'Q79',
            'target' => 'field_prog_housing_y_n',
            'unique' => FALSE,
          ),
          68 => array(
            'language' => 'und',
            'source' => 'Q80',
            'target' => 'field_prog_studt_housing_options',
            'unique' => FALSE,
          ),
          69 => array(
            'language' => 'und',
            'source' => 'Q81',
            'target' => 'field_prog_other_hous_explain',
            'unique' => FALSE,
          ),
          70 => array(
            'language' => 'und',
            'source' => 'Q20_Name',
            'target' => 'field_prog_photo:uri',
            'unique' => FALSE,
          ),
          71 => array(
            'language' => 'und',
            'source' => 'submit_date',
            'target' => 'field_prog_submit_date',
            'unique' => FALSE,
          ),
          72 => array(
            'language' => 'und',
            'source' => 'Q109',
            'target' => 'field_all_students_in_course',
            'unique' => FALSE,
          ),
          73 => array(
            'language' => 'und',
            'source' => 'Q110',
            'target' => 'field_prog_remote_learning',
            'unique' => FALSE,
          ),
          74 => array(
            'language' => 'und',
            'source' => 'Q116',
            'target' => 'field_prog_campus_services',
            'unique' => FALSE,
          ),
          75 => array(
            'language' => 'und',
            'source' => 'Q117',
            'target' => 'field_prog_college_events',
            'unique' => FALSE,
          ),
          76 => array(
            'language' => 'und',
            'source' => 'Q118',
            'target' => 'field_prog__extracurr_activ',
            'unique' => FALSE,
          ),
          77 => array(
            'language' => 'und',
            'source' => 'Q119',
            'target' => 'field_prog_perc_academic',
            'unique' => FALSE,
          ),
          78 => array(
            'language' => 'und',
            'source' => 'Q49',
            'target' => 'field_prog_length_years2',
            'unique' => FALSE,
          ),
          79 => array(
            'language' => 'und',
            'source' => 'Q110_4_TEXT',
            'target' => 'field_prog_remote_explain',
            'unique' => FALSE,
          ),
          80 => array(
            'language' => 'und',
            'source' => 'Q100',
            'target' => 'field_prog_stem_cert',
            'unique' => FALSE,
          ),
          81 => array(
            'language' => 'und',
            'source' => 'Q99',
            'target' => 'field_prog_stem_courses',
            'unique' => FALSE,
          ),
          82 => array(
            'language' => 'und',
            'source' => 'Q83',
            'target' => 'field_prog_extracurr_inclusive',
            'unique' => FALSE,
          ),
          83 => array(
            'source' => 'Q126',
            'target' => 'nid',
            'unique' => 1,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['qualtrics_program_import'] = $feeds_importer;

  return $export;
}
