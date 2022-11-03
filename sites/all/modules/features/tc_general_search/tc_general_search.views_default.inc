<?php

/**
 * @file
 * tc_general_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tc_general_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tc_general_site_search';
  $view->description = 'Solr search for TC, general site search - ie not CT specific.';
  $view->tag = 'think-college';
  $view->base_table = 'search_api_index_general_site_search';
  $view->human_name = 'General Site Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'thinkcollege-site-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type_1']['format_name'] = 0;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: College/university where the program is located */
  $handler->display->display_options['fields']['field_prog_col_univ_name']['id'] = 'field_prog_col_univ_name';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['field'] = 'field_prog_col_univ_name';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['label'] = '';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prog_col_univ_name']['alter']['text'] = '<strong>Program\'s parent Institution: [field_prog_col_univ_name-value] </strong>';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prog_col_univ_name']['hide_empty'] = TRUE;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Content: Date */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => '12_hour_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="[type_1] field-content">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'search_api_facetapi_DAY';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Date: End date (indexed) */
  $handler->display->display_options['fields']['event_calendar_date_value2']['id'] = 'event_calendar_date_value2';
  $handler->display->display_options['fields']['event_calendar_date_value2']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['fields']['event_calendar_date_value2']['field'] = 'event_calendar_date_value2';
  $handler->display->display_options['fields']['event_calendar_date_value2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['event_calendar_date_value2']['date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['event_calendar_date_value2']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['event_calendar_date_value2']['link_to_entity'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Date: End date (indexed) */
  $handler->display->display_options['filters']['event_calendar_date_value2']['id'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['filters']['event_calendar_date_value2']['field'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['event_calendar_date_value2']['value']['value'] = 'now';
  $handler->display->display_options['filters']['event_calendar_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['event_calendar_date_value2']['year_range'] = '-10:+3';
  /* Filter criterion: Date: End date (indexed) */
  $handler->display->display_options['filters']['event_calendar_date_value2_1']['id'] = 'event_calendar_date_value2_1';
  $handler->display->display_options['filters']['event_calendar_date_value2_1']['table'] = 'search_api_index_general_site_search';
  $handler->display->display_options['filters']['event_calendar_date_value2_1']['field'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['event_calendar_date_value2_1']['group'] = 2;
  $handler->display->display_options['filters']['event_calendar_date_value2_1']['year_range'] = '-10:+3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'tc_general_search_block');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'general-site-search';
  $export['tc_general_site_search'] = $view;

  return $export;
}
