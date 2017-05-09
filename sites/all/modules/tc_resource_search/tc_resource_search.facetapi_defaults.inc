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
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'operator' => 'and',
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
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Feature in Section',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Authors',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Date Received',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'taxonomy_weight' => 'taxonomy_weight',
      'count' => 0,
      'display' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-47',
      'display' => '-48',
      'tc_school_type_sort' => '-46',
      'tc_disability_sort' => '-45',
      'indexed' => '-44',
      'natural' => '-43',
      'taxonomy_weight' => '-49',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
      'taxonomy_weight' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Media Types',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Publication Date',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'taxonomy_weight' => 'taxonomy_weight',
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-49',
      'taxonomy_weight' => '-50',
      'count' => '-48',
      'display' => '-47',
      'tc_school_type_sort' => '-46',
      'tc_disability_sort' => '-45',
      'indexed' => '-44',
      'natural' => '-43',
    ),
    'sort_order' => array(
      'active' => '3',
      'taxonomy_weight' => '4',
      'count' => '3',
      'display' => '4',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Publication Types',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'State-related',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 1,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'taxonomy_weight' => 'taxonomy_weight',
      'natural' => 0,
      'count' => 0,
      'display' => 0,
      'tc_school_type_sort' => 0,
      'tc_disability_sort' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'taxonomy_weight' => '-49',
      'active' => '-50',
      'natural' => '-48',
      'count' => '-47',
      'display' => '-46',
      'tc_school_type_sort' => '-45',
      'tc_disability_sort' => '-44',
      'indexed' => '-43',
    ),
    'sort_order' => array(
      'taxonomy_weight' => '4',
      'active' => '3',
      'natural' => '4',
      'count' => '3',
      'display' => '4',
      'tc_school_type_sort' => '4',
      'tc_disability_sort' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Topics',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'keep_open' => 0,
    'expand' => 1,
    'collapsible_children' => 0,
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => '1',
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Node ID',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Item language',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
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
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Title',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@tc_resource_index:block:title'] = $facet;

  return $export;
}
