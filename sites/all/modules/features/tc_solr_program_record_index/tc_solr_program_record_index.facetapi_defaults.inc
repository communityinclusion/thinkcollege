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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '0',
    'facet_search_ids' => array(
      'search_api_views:tc_solr_college_search:college_search_solr_search_block' => 'search_api_views:tc_solr_college_search:college_search_solr_search_block',
    ),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Author',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'The main body text » Text',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Room and Board (numbers and decimals only, no commas or dollar signs)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'categories',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How many students, total, attended this program in the most recently completed academic year?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Name of credential (degree/certificate) awarded to students who complete this program',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Please select any/all of the conditions below that describe the credential awarded by this program',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How many students were accepted for the most recently completed academic year? (number only, no text) ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'This program is operated by and/or is a program of an accredited institute of higher education.',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Which of the following are basic requirements for admission to your program?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Admission application deadline',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Enter required age range',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'College/university where the program is located',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Program contact person phone',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Can you provide specific dollar amounts for tuition, fees, room and board?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Students enrolled in this program take the following types of courses that are offered by the college/university',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Do students earn a credential of any kind when they complete this program?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Is this program able to provide federal financial aid as a Comprehensive Transition Program (CTP)?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Explain "other" requirements',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Does program offer housing for students?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Students in this program (check all that apply)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Is/was this program a federally funded TPSID program? ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Can you tell us how many students applied to, were accepted to, or entered your program in the most recent academic year?',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'What is the planned length of this program?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How many new students entered the program in the fall of the year before last? (number only, no text)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'For the most recently completed academic year, how many students applied to your program (number only, no text)? ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'What other types of career development activities do students participate in (check all that apply)?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Other costs?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Other costs amount (numbers and decimals only, no commas or dollar signs)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Other costs (display)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How much overall time on campus is spent only with other students in this program?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How do students pay to attend this program (check all that apply)?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How much academic time is spent only with other students in this program?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Of students who completed your program last year, what percentage found paid competitive employment within 90 days of exiting?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'What % of students in the most recently completed academic year had paid, competitive, integrated work while in the program? ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Program Contact Email',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Program Email',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'Is the college or univ. where the program is located public or private institution? ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Room and Board (display)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'School District or Agency Contact Person E-mail',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'School district or agency partner (if applicable)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'School District or Agency Contact Person',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'This program serves students who meet the definition of intellectual disability. ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Do students take special courses that are only for students in this program? ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Program specific fees (numbers and decimals only, no commas or dollar signs)',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-49',
      'active' => '-48',
      'count' => '-50',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Do students in your program join registered student organizations at the Institute of Higher Education (IHE)?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Students pay (display)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Housing options for students in this program (check all that apply)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'How many of those students returned in the fall of last year? (number only, no text)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Does your program offer a summer transition program?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Tuition amount (numbers and decimals only, no commas or dollar signs)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'What type of school is this?',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'If this program has not yet started serving students, please specify the school year when the first class will be accepted: ',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Specify "other" disabilities',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'tc_disability_sort' => 'tc_disability_sort',
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'tc_school_type_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'tc_disability_sort' => '-50',
      'active' => '-49',
      'count' => '-48',
      'display' => '-47',
      'tc_school_type_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'tc_disability_sort' => '4',
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'tc_school_type_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'Please indicate which disabilities students in this program have',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Program Contact Person',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Requirements for Admission (display)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Topics',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Section',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Summer program (display)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Tags',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Type of school (display)',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Node ID',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Node access information',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Item language',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Status',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => 'No',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'TC:Dual Enrollment',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => 'No',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'TC:Financial Aid',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'exclude' => 'No',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'TC:Housing',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'tc_school_type_sort' => 'tc_school_type_sort',
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'tc_school_type_sort' => '-50',
      'active' => '-49',
      'count' => '-48',
      'display' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'tc_school_type_sort' => '4',
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'TC:School Type',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'display' => 'display',
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-49',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '3',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'TC:State/Province',
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'tc_school_type_sort' => '-47',
      'tc_disability_sort' => '-46',
      'indexed' => '-45',
      'natural' => '-44',
    ),
    'sort_order' => array(
      'display' => '4',
      'active' => '3',
      'count' => '3',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'exclude' => 'No',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'display_count' => 0,
    'title_override' => 0,
    'title' => 'TC:TPSID',
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
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Title',
  );
  $export['search_api@program_records_index:block:title'] = $facet;

  return $export;
}
