<?php

/**
 * @file
 * tc_solr_program_record_index.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function tc_solr_program_record_index_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::field_prog_length_years';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'field_prog_length_years';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::field_prog_length_years'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::field_prog_state';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'field_prog_state';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => '0',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(
      'search_api_views:tc_solr_college_search:college_search_solr_search_block' => 'search_api_views:tc_solr_college_search:college_search_solr_search_block',
    ),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::field_prog_state'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::field_prog_which_disabilities';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'field_prog_which_disabilities';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::field_prog_which_disabilities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::tc_dual_enroll';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'tc_dual_enroll';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::tc_dual_enroll'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::tc_financial_aid';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'tc_financial_aid';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::tc_financial_aid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::tc_housing';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'tc_housing';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::tc_housing'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::tc_school_type';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'tc_school_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::tc_school_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::tc_state_province';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'tc_state_province';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '-1',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'or',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::tc_state_province'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index::tc_tpsid';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = '';
  $facet->facet = 'tc_tpsid';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => 0,
    'hard_limit' => '50',
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@program_records_index::tc_tpsid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:author';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Author',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:body:value';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'body:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'The main body text » Text',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:body:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field__prog_room_and_board';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field__prog_room_and_board';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Room and Board (numbers and decimals only, no commas or dollar signs)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field__prog_room_and_board'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_categories';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_categories';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'categories',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_categories'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_how_many_students_total_at';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_how_many_students_total_at';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How many students, total, attended this program in the most recently completed academic year?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_how_many_students_total_at'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_name_of_credential_degree_';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_name_of_credential_degree_';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Name of credential (degree/certificate) awarded to students who complete this program',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_name_of_credential_degree_'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_please_select_any_all_of_t';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_please_select_any_all_of_t';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Please select any/all of the conditions below that describe the credential awarded by this program',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_please_select_any_all_of_t'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_15_16_accepted';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_15_16_accepted';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How many students were accepted for the most recently completed academic year? (number only, no text) ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_15_16_accepted'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_15_16_admit_rate';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_15_16_admit_rate';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_15_16_admit_rate'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_accredited';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_accredited';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'This program is operated by and/or is a program of an accredited institute of higher education.',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_accredited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_address_line_2';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_address_line_2';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_address_line_2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_admiss_requirements';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_admiss_requirements';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Which of the following are basic requirements for admission to your program?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_admiss_requirements'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_admit_deadline';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_admit_deadline';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Admission application deadline',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_admit_deadline'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_age_range';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_age_range';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Enter required age range',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_age_range'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_city';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_city';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_city'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_col_univ_name';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_col_univ_name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'College/university where the program is located',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_col_univ_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_contact_phone';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_contact_phone';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Program contact person phone',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_contact_phone'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_cost_of_the_program';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_cost_of_the_program';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_cost_of_the_program'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_cost_y_n';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_cost_y_n';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Can you provide specific dollar amounts for tuition, fees, room and board?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_cost_y_n'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_course_types';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_course_types';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Students enrolled in this program take the following types of courses that are offered by the college/university',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_course_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_credential';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_credential';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Do students earn a credential of any kind when they complete this program?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_credential'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_ctp_y_n';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_ctp_y_n';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Is this program able to provide federal financial aid as a Comprehensive Transition Program (CTP)?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_ctp_y_n'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_explain_other';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_explain_other';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Explain "other" requirements',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_explain_other'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_housing_y_n';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_housing_y_n';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Does program offer housing for students?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_housing_y_n'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_hs_coll';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_hs_coll';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Students in this program (check all that apply)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_hs_coll'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_is_was_tpsid';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_is_was_tpsid';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Is/was this program a federally funded TPSID program? ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_is_was_tpsid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_know_how_many';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_know_how_many';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Can you tell us how many students applied to, were accepted to, or entered your program in the most recent academic year?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_know_how_many'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_length_years';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_length_years';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'exclude' => '',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'rewrite_items' => 1,
    'show_expanded' => 0,
    'show_minimum_items' => 2,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-50',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'What is the planned length of this program?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:field_prog_length_years'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_new_studt_f14';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_new_studt_f14';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How many new students entered the program in the fall of the year before last? (number only, no text)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_new_studt_f14'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_num_applied';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_num_applied';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'For the most recently completed academic year, how many students applied to your program (number only, no text)? ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_num_applied'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_other_career_dev';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_other_career_dev';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'What other types of career development activities do students participate in (check all that apply)?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_other_career_dev'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_other_costs';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_other_costs';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Other costs?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_other_costs'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_other_costs_amount';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_other_costs_amount';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Other costs amount (numbers and decimals only, no commas or dollar signs)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_other_costs_amount'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_other_costs_display';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_other_costs_display';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Other costs (display)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_other_costs_display'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_overall_time_dist';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_overall_time_dist';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How much overall time on campus is spent only with other students in this program?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_overall_time_dist'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_pay_methods';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_pay_methods';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How do students pay to attend this program (check all that apply)?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_pay_methods'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_perc_acad_time';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_perc_acad_time';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How much academic time is spent only with other students in this program?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_perc_acad_time'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_perc_employed_af_grad';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_perc_employed_af_grad';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Of students who completed your program last year, what percentage found paid competitive employment within 90 days of exiting?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_perc_employed_af_grad'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_perc_w_compet_employ';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_perc_w_compet_employ';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'What % of students in the most recently completed academic year had paid, competitive, integrated work while in the program? ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_perc_w_compet_employ'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_program_contact_email';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_program_contact_email';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Program Contact Email',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_program_contact_email'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_program_email';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_program_email';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Program Email',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_program_email'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_public_or_privat';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_public_or_privat';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-50',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'Is the college or univ. where the program is located public or private institution? ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:field_prog_public_or_privat'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_retention_rate';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_retention_rate';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_retention_rate'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_room_and_board_displa';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_room_and_board_displa';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Room and Board (display)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_room_and_board_displa'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_schl_dist_email';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_schl_dist_email';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'School District or Agency Contact Person E-mail',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_schl_dist_email'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_school_dist';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_school_dist';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'School district or agency partner (if applicable)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_school_dist'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_school_dist_contact';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_school_dist_contact';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'School District or Agency Contact Person',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_school_dist_contact'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_serves_id';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_serves_id';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'This program serves students who meet the definition of intellectual disability. ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_serves_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_special_courses';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_special_courses';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Do students take special courses that are only for students in this program? ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_special_courses'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_specific_fees';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_specific_fees';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Program specific fees (numbers and decimals only, no commas or dollar signs)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_specific_fees'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_state';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_state';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-48',
      'count' => '-50',
      'display' => '-49',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:field_prog_state'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_street_address';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_street_address';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_street_address'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_student_orgs_y_n';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_student_orgs_y_n';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Do students in your program join registered student organizations at the Institute of Higher Education (IHE)?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_student_orgs_y_n'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_students_pay_display';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_students_pay_display';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Students pay (display)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_students_pay_display'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_studt_housing_options';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_studt_housing_options';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Housing options for students in this program (check all that apply)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_studt_housing_options'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_studt_retn_f15';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_studt_retn_f15';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'How many of those students returned in the fall of last year? (number only, no text)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_studt_retn_f15'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_summer_prog_y_n';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_summer_prog_y_n';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Does your program offer a summer transition program?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_summer_prog_y_n'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_tuition';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_tuition';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Tuition amount (numbers and decimals only, no commas or dollar signs)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_tuition'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_type_of_school';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_type_of_school';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'What type of school is this?',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_type_of_school'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_when_will_progr_start';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_when_will_progr_start';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'If this program has not yet started serving students, please specify the school year when the first class will be accepted: ',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_when_will_progr_start'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_which_dis_specify';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_which_dis_specify';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Specify "other" disabilities',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_prog_which_dis_specify'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_prog_which_disabilities';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_prog_which_disabilities';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 'tc_disability_sort',
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'exclude' => '',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'rewrite_items' => 1,
    'show_expanded' => 0,
    'show_minimum_items' => 2,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-47',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-50',
      'tc_school_type_sort' => '-46',
    ),
    'title' => 'Please indicate which disabilities students in this program have',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:field_prog_which_disabilities'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_progprogram_contact_person';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_progprogram_contact_person';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Program Contact Person',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_progprogram_contact_person'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_requirements_display';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_requirements_display';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Requirements for Admission (display)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_requirements_display'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_resourc_topics';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_topics';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Topics',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_resourc_topics'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_site_section';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_site_section';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Section',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_site_section'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_summer_program_display';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_summer_program_display';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Summer program (display)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_summer_program_display'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_tags';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_tags';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Tags',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_type_of_school_display';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_type_of_school_display';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Type of school (display)',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_type_of_school_display'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:field_zip_code';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'field_zip_code';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:field_zip_code'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:nid';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'nid';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Node ID',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:search_api_access_node';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_access_node';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Node access information',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:search_api_access_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:search_api_language';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Item language',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:status';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Status',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:tc_dual_enroll';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'tc_dual_enroll';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'exclude' => 'No',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'rewrite_items' => 1,
    'show_expanded' => 0,
    'show_minimum_items' => 2,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-50',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'TC:Dual Enrollment',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:tc_dual_enroll'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:tc_financial_aid';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'tc_financial_aid';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'exclude' => 'No',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'rewrite_items' => 1,
    'show_expanded' => 0,
    'show_minimum_items' => 2,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-50',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'TC:Financial Aid',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:tc_financial_aid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:tc_housing';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'tc_housing';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'exclude' => 'No',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'rewrite_items' => 1,
    'show_expanded' => 0,
    'show_minimum_items' => 2,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-50',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'TC:Housing',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:tc_housing'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:tc_school_type';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'tc_school_type';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 'tc_school_type_sort',
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-47',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-50',
    ),
    'title' => 'TC:School Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:tc_school_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:tc_state_province';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'tc_state_province';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer states',
    'facet_more_text' => 'Show more states',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => '3',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-49',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'TC:State/Province',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:tc_state_province'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:tc_tpsid';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'tc_tpsid';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 0,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'exclude' => 'No',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'rewrite_items' => 1,
    'show_expanded' => 0,
    'show_minimum_items' => 2,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-48',
      'display' => '-50',
      'indexed' => '-45',
      'natural' => '-44',
      'tc_disability_sort' => '-46',
      'tc_school_type_sort' => '-47',
    ),
    'title' => 'TC:TPSID',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@program_records_index:block:tc_tpsid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@program_records_index:block:title';
  $facet->searcher = 'search_api@program_records_index';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@program_records_index:block:title'] = $facet;

  return $export;
}
