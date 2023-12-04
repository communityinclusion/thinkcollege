<?php

/**
 * @file
 * tc_resource_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function tc_resource_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index::field_resourc_media_types';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = '';
  $facet->facet = 'field_resourc_media_types';
  $facet->enabled = FALSE;
  $facet->hash = 'ELnNyfCpYlJh5FtQxWUGQ62wOYrFGSWx';
  $facet->settings = array(
    'default_true' => '1',
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
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@tc_resource_index::field_resourc_media_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index::field_resourc_publication_types';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = '';
  $facet->facet = 'field_resourc_publication_types';
  $facet->enabled = FALSE;
  $facet->hash = 'f70ZuuFzE1DZ81VFRq1Tqxidg7U2mFkn';
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
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@tc_resource_index::field_resourc_publication_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index::field_resourc_topics';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = '';
  $facet->facet = 'field_resourc_topics';
  $facet->enabled = FALSE;
  $facet->hash = 'Qa4xU8darvMrJl5NNpm3Q4FcxzTQGWAM';
  $facet->settings = array(
    'default_true' => '1',
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
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '-1',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'or',
    'query_type' => 'term',
  );
  $export['search_api@tc_resource_index::field_resourc_topics'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_feature_in_section';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_feature_in_section';
  $facet->enabled = FALSE;
  $facet->hash = 'IPJa22LBz1sM1dqIWkSOMuCiejHDXMUI';
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
    'title' => 'Feature in Section',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@tc_resource_index:block:field_feature_in_section'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_authors';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_authors';
  $facet->enabled = FALSE;
  $facet->hash = 'mlS45pXWsDOmNg0dXtgsy3NWLvFqMsk4';
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
    'title' => 'Authors',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_authors'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_date_received';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_date_received';
  $facet->enabled = FALSE;
  $facet->hash = 'C510ReSduk1aCLeAEWQdhNgXA9pmy20E';
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
    'title' => 'Date Received',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_date_received'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_media_types';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_media_types';
  $facet->enabled = TRUE;
  $facet->hash = 'jtY8NubVOWm0Ptx7GO5HUMLdpAF9Tb4J';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
      'natural' => 0,
      'taxonomy_weight' => 'taxonomy_weight',
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 1,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'taxonomy_weight' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-48',
      'count' => '-47',
      'display' => '-49',
      'indexed' => '-44',
      'natural' => '-43',
      'taxonomy_weight' => '-50',
      'tc_disability_sort' => '-45',
      'tc_school_type_sort' => '-46',
    ),
    'title' => 'Media Types',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_media_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_publication_date';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_publication_date';
  $facet->enabled = FALSE;
  $facet->hash = 'wU0XJm5ROftjCYzLzHFi4CaJlPnZX1mB';
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
    'title' => 'Publication Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_publication_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_publication_types';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_publication_types';
  $facet->enabled = TRUE;
  $facet->hash = 'U46epuSfstA0bt3HdaIpnelBPowcfNlK';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
      'natural' => 0,
      'taxonomy_weight' => 'taxonomy_weight',
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'show_expanded' => 1,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'taxonomy_weight' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-47',
      'display' => '-48',
      'indexed' => '-44',
      'natural' => '-43',
      'taxonomy_weight' => '-50',
      'tc_disability_sort' => '-45',
      'tc_school_type_sort' => '-46',
    ),
    'title' => 'Publication Types',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_publication_types'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_state_related';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_state_related';
  $facet->enabled = FALSE;
  $facet->hash = 'XTF0wNULLQ3q9HBvWt2sYlEfT9JiT5Ua';
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
    'title' => 'State-related',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_state_related'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:field_resourc_topics';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'field_resourc_topics';
  $facet->enabled = TRUE;
  $facet->hash = 'DsmaAzQ7XAhNlKH132zyrK1gxgNcV8La';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
      'natural' => 0,
      'taxonomy_weight' => 'taxonomy_weight',
      'tc_disability_sort' => 0,
      'tc_school_type_sort' => 0,
    ),
    'display_count' => 1,
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
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'nofollow' => 1,
    'regex' => 0,
    'show_expanded' => 1,
    'show_minimum_items' => 2,
    'soft_limit' => '0',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
      'taxonomy_weight' => '4',
      'tc_disability_sort' => '4',
      'tc_school_type_sort' => '4',
    ),
    'sort_weight' => array(
      'active' => '-49',
      'count' => '-47',
      'display' => '-48',
      'indexed' => '-44',
      'natural' => '-43',
      'taxonomy_weight' => '-50',
      'tc_disability_sort' => '-45',
      'tc_school_type_sort' => '-46',
    ),
    'title' => 'Topics',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_nested_links',
  );
  $export['search_api@tc_resource_index:block:field_resourc_topics'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:nid';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'nid';
  $facet->enabled = FALSE;
  $facet->hash = '4Ba7mF9m1Rez19CTMHOB9PqkEtjBfurG';
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
  $export['search_api@tc_resource_index:block:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:search_api_language';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->hash = 'MvjzpscrdQ85E5VTt68axVMgGiX7gZax';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
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
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
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
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
      'natural' => '0',
      'tc_disability_sort' => '0',
      'tc_school_type_sort' => '0',
    ),
    'title' => 'Item language',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@tc_resource_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@tc_resource_index:block:title';
  $facet->searcher = 'search_api@tc_resource_index';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->hash = 'TwyjoTDzJ00maqc5DMmfoSPNA8WH7WqF';
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
  $export['search_api@tc_resource_index:block:title'] = $facet;

  return $export;
}
