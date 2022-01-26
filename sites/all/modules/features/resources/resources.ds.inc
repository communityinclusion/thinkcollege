<?php

/**
 * @file
 * resources.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function resources_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '0',
        'wrapper' => 'h1',
      ),
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|resource|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'format' => 'ds_post_date_search_api_facetapi_DAY',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '1',
        'wrapper' => 'h2',
      ),
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|resource|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function resources_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|card';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'card';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
      'field_external_link' => 'central',
      'field_project' => 'central',
      'field_resourc_file' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_resourc_file',
        1 => 'field_external_link',
        2 => 'body',
        3 => 'field_project',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|resource|card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_external_link' => 'central',
      'field_resourc_file' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_external_link',
        1 => 'field_resourc_file',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|resource|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|event_attachment';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'event_attachment';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_external_link' => 'central',
      'field_resourc_file' => 'central',
      'field_video_embed' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_video_embed',
        1 => 'field_external_link',
        2 => 'field_resourc_file',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|resource|event_attachment'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'left',
      'field_external_link' => 'right',
      'field_project' => 'left',
      'field_resourc_apa_citation' => 'left',
      'field_resourc_authors' => 'left',
      'field_resourc_file' => 'right',
      'field_resourc_media_types' => 'left',
      'field_resourc_publication_date' => 'left',
      'field_resourc_publication_types' => 'left',
      'field_resourc_topics' => 'left',
      'field_video_embed' => 'left',
      'title' => 'left',
    ),
    'hide_page_title' => '0',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'article',
    'page_option_title' => '',
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_video_embed',
        3 => 'field_resourc_apa_citation',
        4 => 'field_resourc_publication_date',
        5 => 'field_resourc_authors',
        6 => 'field_resourc_topics',
        7 => 'field_resourc_media_types',
        8 => 'field_resourc_publication_types',
        9 => 'field_project',
      ),
      'right' => array(
        10 => 'field_resourc_file',
        11 => 'field_external_link',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|resource|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|search_index';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'search_index';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
      'field_external_link' => 'central',
      'field_resourc_authors' => 'central',
      'field_resourc_file' => 'central',
      'field_resourc_media_types' => 'central',
      'field_resourc_publication_types' => 'central',
      'field_resourc_state_related' => 'central',
      'field_resourc_topics' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_external_link',
        1 => 'field_resourc_file',
        2 => 'field_resourc_topics',
        3 => 'field_resourc_publication_types',
        4 => 'field_resourc_media_types',
        5 => 'field_resourc_authors',
        6 => 'field_resourc_state_related',
        7 => 'body',
      ),
    ),
    'wrappers' => array(),
  );
  $export['node|resource|search_index'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
      'post_date' => 'central',
      'title' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'body',
        2 => 'post_date',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|resource|search_result'] = $ds_layout;

  return $export;
}
