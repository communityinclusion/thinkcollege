<?php
/**
 * @file
 * tc_solr_program_record_index.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tc_solr_program_record_index_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'college_search';
  $view->description = 'basic views Search for colleges';
  $view->tag = 'think-college';
  $view->base_table = 'node';
  $view->human_name = 'College Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'College Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_prog_col_univ_name' => 'field_prog_col_univ_name',
    'field_prog_city' => 'field_prog_city',
    'field_prog_state' => 'field_prog_state',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prog_col_univ_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prog_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prog_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Available programs';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: College/university where the program is located */
  $handler->display->display_options['fields']['field_prog_col_univ_name']['id'] = 'field_prog_col_univ_name';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['table'] = 'field_data_field_prog_col_univ_name';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['field'] = 'field_prog_col_univ_name';
  $handler->display->display_options['fields']['field_prog_col_univ_name']['label'] = 'College/University Name';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_prog_city']['id'] = 'field_prog_city';
  $handler->display->display_options['fields']['field_prog_city']['table'] = 'field_data_field_prog_city';
  $handler->display->display_options['fields']['field_prog_city']['field'] = 'field_prog_city';
  $handler->display->display_options['fields']['field_prog_city']['element_label_colon'] = FALSE;
  /* Field: Content: State/Province */
  $handler->display->display_options['fields']['field_prog_state']['id'] = 'field_prog_state';
  $handler->display->display_options['fields']['field_prog_state']['table'] = 'field_data_field_prog_state';
  $handler->display->display_options['fields']['field_prog_state']['field'] = 'field_prog_state';
  $handler->display->display_options['fields']['field_prog_state']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'program_record' => 'program_record',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  /* Filter criterion: Content: State/Province (field_prog_state) */
  $handler->display->display_options['filters']['field_prog_state_value']['id'] = 'field_prog_state_value';
  $handler->display->display_options['filters']['field_prog_state_value']['table'] = 'field_data_field_prog_state';
  $handler->display->display_options['filters']['field_prog_state_value']['field'] = 'field_prog_state_value';
  $handler->display->display_options['filters']['field_prog_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['operator_id'] = 'field_prog_state_value_op';
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['label'] = 'State/Province (field_prog_state)';
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['operator'] = 'field_prog_state_value_op';
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['identifier'] = 'field_prog_state_value';
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_prog_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
  );
  /* Filter criterion: Content: What type of school is this? (field_prog_type_of_school) */
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['id'] = 'field_prog_type_of_school_value';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['table'] = 'field_data_field_prog_type_of_school';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['field'] = 'field_prog_type_of_school_value';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['operator_id'] = 'field_prog_type_of_school_value_op';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['label'] = 'What type of school is this? (field_prog_type_of_school)';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['operator'] = 'field_prog_type_of_school_value_op';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['identifier'] = 'field_prog_type_of_school_value';
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_prog_type_of_school_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
  );
  /* Filter criterion: Content: Students in this program (check all that apply) (field_prog_hs_coll) */
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['id'] = 'field_prog_hs_coll_value';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['table'] = 'field_data_field_prog_hs_coll';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['field'] = 'field_prog_hs_coll_value';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['operator_id'] = 'field_prog_hs_coll_value_op';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['label'] = 'Attend during or after high school?';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['operator'] = 'field_prog_hs_coll_value_op';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['identifier'] = 'field_prog_hs_coll_value';
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_prog_hs_coll_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'college-search-old';
  $export['college_search'] = $view;

  return $export;
}
