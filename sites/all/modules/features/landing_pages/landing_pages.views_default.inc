<?php
/**
 * @file
 * landing_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landing_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'upcoming_events';
  $view->description = 'Content pane used on the home page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/tc-events-upcoming" class="view-all">View all Events</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
    'audience' => 0,
    'authors' => 0,
    'categories' => 0,
    'events' => 0,
    'glossary' => 0,
    'media_types' => 0,
    'publication_types' => 0,
    'site_section' => 0,
    'states' => 0,
    'think_college_learn' => 0,
    'topics' => 0,
    'event_calendar_status' => 0,
  );
  /* Field: Date: Month + day */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['ui_name'] = 'Date: Month + day';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Date: Year */
  $handler->display->display_options['fields']['event_calendar_date_2']['id'] = 'event_calendar_date_2';
  $handler->display->display_options['fields']['event_calendar_date_2']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date_2']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date_2']['ui_name'] = 'Date: Year';
  $handler->display->display_options['fields']['event_calendar_date_2']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['event_calendar_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date_2']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_calendar_location']['id'] = 'field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['table'] = 'field_data_field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['field'] = 'field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_calendar_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_calendar_location']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More information >';
  /* Field: Date div */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Date div';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="date-month-day">[event_calendar_date]</span>
<span class="date-year">[event_calendar_date_2]</span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Text div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Text div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3 class="title">[title]</h3>
<p class="location">[field_event_calendar_location]</p>
<span class="link">[view_node]</span>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'event-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Date -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'tc_events' => 'tc_events',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['filters']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['value'] = array(
    1654 => '1654',
  );
  $handler->display->display_options['filters']['field_feature_in_section_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_feature_in_section_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_feature_in_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['vocabulary'] = 'feature_in_section';
  /* Filter criterion: Content: Date -  start date (event_calendar_date) */
  $handler->display->display_options['filters']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['filters']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['filters']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['filters']['event_calendar_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['event_calendar_date_value']['group'] = 2;
  $handler->display->display_options['filters']['event_calendar_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['event_calendar_date_value']['default_date'] = 'now';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['upcoming_events'] = $view;

  $view = new view();
  $view->name = 'whats_new';
  $view->description = 'Corresponds with "Featured" Block. A listing of new stuff on the site.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="general-site-search?f%5B0%5D=type%3Aarticle&sort=created&order=desc" class="view-all">View all</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Teaser image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'landing_page_teaser',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '...Read more';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] [view_node]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
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
    'article' => 'article',
    'page' => 'page',
    'resource' => 'resource',
  );
  /* Filter criterion: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['filters']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['value'] = array(
    1476 => '1476',
  );
  $handler->display->display_options['filters']['field_feature_in_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['vocabulary'] = 'feature_in_section';
  $handler->display->display_options['filters']['field_feature_in_section_tid']['hierarchy'] = 1;

  /* Display: Home page content pane */
  $handler = $view->new_display('panel_pane', 'Home page content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Innovation Exchange content pane */
  $handler = $view->new_display('panel_pane', 'Innovation Exchange content pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News & Features';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<!-- <a href="/general-site-search?f%5B0%5D=type%3Aarticle&sort=created&order=desc" class="view-all">View all</a> -->';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
    'article' => 'article',
    'page' => 'page',
    'resource' => 'resource',
  );
  $handler->display->display_options['pane_title'] = 'Inno Exchange - News & Features';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );

  /* Display: Policy Affinity Group Resources pane */
  $handler = $view->new_display('panel_pane', 'Policy Affinity Group Resources pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_date_received']['type'] = 'field_date_new';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['type'] = 'field_media_type_icon';
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['pane_title'] = 'Inno Exchange - Featured Resources (Families)';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );

  /* Display: (Vocational Rehab) Inno Exchange Resources pane */
  $handler = $view->new_display('panel_pane', '(Vocational Rehab) Inno Exchange Resources pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'View more link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/resource-search?f%5B0%5D=field_resourc_topics%3A1643">View more</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_date_received']['type'] = 'field_date_new';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['type'] = 'field_media_type_icon';
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['pane_title'] = 'Inno Exchange - Featured Resources (Vocational Rehab)';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );

  /* Display: (Paying) Inno Exchange Resources pane */
  $handler = $view->new_display('panel_pane', '(Paying) Inno Exchange Resources pane', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'View more link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/resource-search?f%5B0%5D=field_resourc_topics%3A1490&f%5B1%5D=field_resourc_topics%3A1496&f%5B2%5D=field_resourc_topics%3A1558&f%5B3%5D=field_resourc_topics%3A1495">View more</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_date_received']['type'] = 'field_date_new';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['type'] = 'field_media_type_icon';
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['pane_title'] = 'Inno Exchange - Featured Resources (Paying)';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );

  /* Display: (Employment) Inno Exchange Resources pane */
  $handler = $view->new_display('panel_pane', '(Employment) Inno Exchange Resources pane', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'View more link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/resource-search?f%5B0%5D=field_resourc_topics%3A130&f%5B1%5D=field_resourc_topics%3A1484&f%5B2%5D=field_resourc_topics%3A135&f%5B3%5D=field_resourc_topics%3A1643">View more</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_date_received']['type'] = 'field_date_new';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['type'] = 'field_media_type_icon';
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['pane_title'] = 'Inno Exchange - Featured Resources (Employment)';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );

  /* Display: (Family) Inno Exchange Resources pane */
  $handler = $view->new_display('panel_pane', '(Family) Inno Exchange Resources pane', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'View more link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/audience/family">View more</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_date_received']['type'] = 'field_date_new';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['type'] = 'field_media_type_icon';
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['pane_title'] = 'Inno Exchange - Featured Resources (Family)';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );

  /* Display: (Program Development) Inno Exchange Resources pane */
  $handler = $view->new_display('panel_pane', '(Program Development) Inno Exchange Resources pane', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'View more link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/resource-search?f%5B0%5D=field_resourc_topics%3A130&f%5B1%5D=field_resourc_topics%3A1484&f%5B2%5D=field_resourc_topics%3A135&f%5B3%5D=field_resourc_topics%3A1643">View more</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date Received */
  $handler->display->display_options['fields']['field_resourc_date_received']['id'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['table'] = 'field_data_field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['field'] = 'field_resourc_date_received';
  $handler->display->display_options['fields']['field_resourc_date_received']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_date_received']['type'] = 'field_date_new';
  $handler->display->display_options['fields']['field_resourc_date_received']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Types */
  $handler->display->display_options['fields']['field_resourc_media_types']['id'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['table'] = 'field_data_field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['field'] = 'field_resourc_media_types';
  $handler->display->display_options['fields']['field_resourc_media_types']['label'] = '';
  $handler->display->display_options['fields']['field_resourc_media_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resourc_media_types']['type'] = 'field_media_type_icon';
  $handler->display->display_options['fields']['field_resourc_media_types']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Feature in Section (field_feature_in_section) */
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['id'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['table'] = 'field_data_field_feature_in_section';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['field'] = 'field_feature_in_section_tid';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['vocabularies'] = array(
    'feature_in_section' => 'feature_in_section',
  );
  $handler->display->display_options['arguments']['field_feature_in_section_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['pane_title'] = 'Inno Exchange - Featured Resources (Program Development)';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_feature_in_section_tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feature in Section',
    ),
  );
  $export['whats_new'] = $view;

  return $export;
}
