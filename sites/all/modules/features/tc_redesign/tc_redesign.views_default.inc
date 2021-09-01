<?php

/**
 * @file
 * tc_redesign.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tc_redesign_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_image';
  $handler->display->display_options['row_options']['title'] = 'title';
  $handler->display->display_options['row_options']['description'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'slideshow',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '2295',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'categories';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['carousel'] = $view;

  $view = new view();
  $view->name = 'tc_events_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TC Events page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Think College Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'event_calendar_date' => 'event_calendar_date',
    'field_event_calendar_location' => 'field_event_calendar_location',
  );
  $handler->display->display_options['style_options']['default'] = 'event_calendar_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'event_calendar_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_calendar_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><strong>No events found.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'events' => 'events',
    'audience' => 0,
    'authors' => 0,
    'categories' => 0,
    'feature_in_section' => 0,
    'glossary' => 0,
    'media_types' => 0,
    'publication_types' => 0,
    'site_section' => 0,
    'states' => 0,
    'think_college_learn' => 0,
    'topics' => 0,
    'event_calendar_status' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => '12_hour_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_calendar_location']['id'] = 'field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['table'] = 'field_data_field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['field'] = 'field_event_calendar_location';
  /* Field: Content: Event Categories */
  $handler->display->display_options['fields']['field_event_cal_categories']['id'] = 'field_event_cal_categories';
  $handler->display->display_options['fields']['field_event_cal_categories']['table'] = 'field_data_field_event_cal_categories';
  $handler->display->display_options['fields']['field_event_cal_categories']['field'] = 'field_event_cal_categories';
  $handler->display->display_options['fields']['field_event_cal_categories']['label'] = 'Event Category';
  $handler->display->display_options['fields']['field_event_cal_categories']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_event_calendar_date.event_calendar_date_value' => 'field_data_event_calendar_date.event_calendar_date_value',
  );
  /* Filter criterion: Content: Event Categories (field_event_cal_categories) */
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['id'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['table'] = 'field_data_field_event_cal_categories';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['field'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['operator_id'] = 'field_event_cal_categories_tid_op';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['label'] = 'Event Categories (field_event_cal_categories)';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['operator'] = 'field_event_cal_categories_tid_op';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['identifier'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['vocabulary'] = 'events';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['hierarchy'] = 1;

  /* Display: Think College Events */
  $handler = $view->new_display('page', 'Think College Events', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'event_calendar_date' => 'event_calendar_date',
    'field_event_calendar_location' => 'field_event_calendar_location',
  );
  $handler->display->display_options['style_options']['default'] = 'event_calendar_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'event_calendar_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_calendar_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>Think College provides training that disseminates research and promising practices related to postsecondary education for students with intellectual disability, including webinars, conference presentations, capacity-building institutes and research summits.  </p>
<em>Note: All times below are U.S. Eastern time.</em></p>
 
 

<!-- <div class="clearfix"></div>
<ul class="nav nav-tabs">
<li class="active"><a href="tc-events-upcoming">Upcoming Events</a></li>
<li><a href="tc-events-past">Past Events</a></li>
</ul>

<ul class="clearfix"><li class="eventtab active"><strong>Upcoming Events</strong></li><li class="eventtab inactive"><a href="tc-events-past">Past Events</a></li></ul>
-->';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
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
    'tc_events' => 'tc_events',
  );
  /* Filter criterion: Content: Event Categories (field_event_cal_categories) */
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['id'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['table'] = 'field_data_field_event_cal_categories';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['field'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['operator_id'] = 'field_event_cal_categories_tid_op';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['label'] = 'Event Categories';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['operator'] = 'field_event_cal_categories_tid_op';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['identifier'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    12 => 0,
    3 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['vocabulary'] = 'events';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['hierarchy'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_event_calendar_date.event_calendar_date_value' => 'field_data_event_calendar_date.event_calendar_date_value',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Upcoming events, both online and in person',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'tc-events-upcoming';

  /* Display: Past Events */
  $handler = $view->new_display('page', 'Past Events', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events and Webinars: Past';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<!-- <p>Search or browse our events archive below. You can listen to past webinars and download materials from past conferences.</p><p><strong><a href="#webinarinfo">Webinar information and instructions</a></strong><br />&nbsp;</p>

<div class="clearfix"></div>
<ul class="nav nav-tabs">
<li><a href="tc-events-upcoming">Upcoming Events</a></li>
<li class="active"><a href="tc-events-past">Past Events</a></li>
</ul>

<ul class="clearfix"><li class="eventtab active"><strong>Upcoming Events</strong></li><li class="eventtab inactive"><a href="tc-events-past">Past Events</a></li></ul>
-->';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'tc_events' => 'tc_events',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_event_calendar_date.event_calendar_date_value' => 'field_data_event_calendar_date.event_calendar_date_value',
  );
  /* Filter criterion: Content: Event Categories (field_event_cal_categories) */
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['id'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['table'] = 'field_data_field_event_cal_categories';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['field'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['operator_id'] = 'field_event_cal_categories_tid_op';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['label'] = 'Event Categories';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['operator'] = 'field_event_cal_categories_tid_op';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['identifier'] = 'field_event_cal_categories_tid';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    12 => 0,
    3 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['vocabulary'] = 'events';
  $handler->display->display_options['filters']['field_event_cal_categories_tid']['hierarchy'] = 1;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Past Events and archived presentations from Think College',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'tc-events-past';
  $export['tc_events_page'] = $view;

  $view = new view();
  $view->name = 'upcoming_events_ncc_';
  $view->description = 'Content pane used on the home page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming events-NCC ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming NCC Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_project']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_project']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
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
<p class="views-field-field-project">[field_project]</p>
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
  /* Filter criterion: Content: Date - end date (event_calendar_date:value2) */
  $handler->display->display_options['filters']['event_calendar_date_value2']['id'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['filters']['event_calendar_date_value2']['field'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['event_calendar_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['event_calendar_date_value2']['default_date'] = 'now';

  /* Display: Upcoming Events */
  $handler = $view->new_display('panel_pane', 'Upcoming Events', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_calendar_location']['id'] = 'field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['table'] = 'field_data_field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['field'] = 'field_event_calendar_location';
  $handler->display->display_options['fields']['field_event_calendar_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_calendar_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_calendar_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_calendar_location']['alter']['text'] = '<p class="location">[field_event_calendar_location]</p>';
  $handler->display->display_options['fields']['field_event_calendar_location']['element_label_colon'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['label'] = '';
  $handler->display->display_options['fields']['field_project']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project']['alter']['text'] = '<p class="views-field-field-project">Project: [field_project]</p>';
  $handler->display->display_options['fields']['field_project']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_project']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="link">[view_node]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More information >';
  /* Field: Text div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Text div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3 class="title">[title]</h3>
<p class="location">[field_event_calendar_location]</p>
[field_project]
<span class="link">[view_node]</span>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'event-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  /* Filter criterion: Content: Date - end date (event_calendar_date:value2) */
  $handler->display->display_options['filters']['event_calendar_date_value2']['id'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['filters']['event_calendar_date_value2']['field'] = 'event_calendar_date_value2';
  $handler->display->display_options['filters']['event_calendar_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['event_calendar_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['event_calendar_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Check to remove from home page events (field_check_to_remove_from_home) */
  $handler->display->display_options['filters']['field_check_to_remove_from_home_value']['id'] = 'field_check_to_remove_from_home_value';
  $handler->display->display_options['filters']['field_check_to_remove_from_home_value']['table'] = 'field_data_field_check_to_remove_from_home';
  $handler->display->display_options['filters']['field_check_to_remove_from_home_value']['field'] = 'field_check_to_remove_from_home_value';
  $handler->display->display_options['filters']['field_check_to_remove_from_home_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_check_to_remove_from_home_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_tid']['id'] = 'field_project_tid';
  $handler->display->display_options['filters']['field_project_tid']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_tid']['field'] = 'field_project_tid';
  $handler->display->display_options['filters']['field_project_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_project_tid']['value'] = array(
    2523 => '2523',
  );
  $handler->display->display_options['filters']['field_project_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_tid']['vocabulary'] = 'projects';
  $handler->display->display_options['pane_category']['name'] = 'ThinkCollege';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['upcoming_events_ncc_'] = $view;

  return $export;
}
