<?php
/**
 * @file
 * resources.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resources_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'innovation_exchange';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resource Library';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'topics' => 'topics',
    'audience' => 0,
    'authors' => 0,
    'events' => 0,
    'feature_in_section' => 0,
    'glossary' => 0,
    'media_types' => 0,
    'categories' => 0,
    'publication_types' => 0,
    'site_section' => 0,
    'states' => 0,
    'event_calendar_status' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['group_columns'] = array(
    'format' => 'format',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = 'Media Type';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_resourc_publication_date']['id'] = 'field_resourc_publication_date';
  $handler->display->display_options['fields']['field_resourc_publication_date']['table'] = 'field_data_field_resourc_publication_date';
  $handler->display->display_options['fields']['field_resourc_publication_date']['field'] = 'field_resourc_publication_date';
  $handler->display->display_options['fields']['field_resourc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keyword search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Topics:';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'topics';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '2';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Media type';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'media_types';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'innovation-exchange';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = 'Media Type';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_resourc_media_types']['separator'] = '|';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_resourc_publication_date']['id'] = 'field_resourc_publication_date';
  $handler->display->display_options['fields']['field_resourc_publication_date']['table'] = 'field_data_field_resourc_publication_date';
  $handler->display->display_options['fields']['field_resourc_publication_date']['field'] = 'field_resourc_publication_date';
  $handler->display->display_options['fields']['field_resourc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_resourc_topics']['id'] = 'field_resourc_topics';
  $handler->display->display_options['fields']['field_resourc_topics']['table'] = 'field_data_field_resourc_topics';
  $handler->display->display_options['fields']['field_resourc_topics']['field'] = 'field_resourc_topics';
  $handler->display->display_options['fields']['field_resourc_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_resourc_topics']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_resourc_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_resourc_topics']['separator'] = ' | ';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'URL Path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: APA Citation */
  $handler->display->display_options['fields']['field_resourc_apa_citation']['id'] = 'field_resourc_apa_citation';
  $handler->display->display_options['fields']['field_resourc_apa_citation']['table'] = 'field_data_field_resourc_apa_citation';
  $handler->display->display_options['fields']['field_resourc_apa_citation']['field'] = 'field_resourc_apa_citation';
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_resourc_authors']['id'] = 'field_resourc_authors';
  $handler->display->display_options['fields']['field_resourc_authors']['table'] = 'field_data_field_resourc_authors';
  $handler->display->display_options['fields']['field_resourc_authors']['field'] = 'field_resourc_authors';
  $handler->display->display_options['fields']['field_resourc_authors']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_resourc_file']['id'] = 'field_resourc_file';
  $handler->display->display_options['fields']['field_resourc_file']['table'] = 'field_data_field_resourc_file';
  $handler->display->display_options['fields']['field_resourc_file']['field'] = 'field_resourc_file';
  $handler->display->display_options['fields']['field_resourc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resourc_file']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_resourc_file']['delta_offset'] = '0';
  /* Field: Content: State-related */
  $handler->display->display_options['fields']['field_resourc_state_related']['id'] = 'field_resourc_state_related';
  $handler->display->display_options['fields']['field_resourc_state_related']['table'] = 'field_data_field_resourc_state_related';
  $handler->display->display_options['fields']['field_resourc_state_related']['field'] = 'field_resourc_state_related';
  $handler->display->display_options['fields']['field_resourc_state_related']['delta_offset'] = '0';
  /* Field: Content: Publication Types */
  $handler->display->display_options['fields']['field_resourc_publication_types']['id'] = 'field_resourc_publication_types';
  $handler->display->display_options['fields']['field_resourc_publication_types']['table'] = 'field_data_field_resourc_publication_types';
  $handler->display->display_options['fields']['field_resourc_publication_types']['field'] = 'field_resourc_publication_types';
  $handler->display->display_options['fields']['field_resourc_publication_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  $handler->display->display_options['path'] = 'resource_export';
  $export['innovation_exchange'] = $view;

  return $export;
}
