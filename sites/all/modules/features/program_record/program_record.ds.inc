<?php

/**
 * @file
 * program_record.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function program_record_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program_record|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program_record';
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
  $export['node|program_record|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function program_record_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program_record|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program_record';
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
  $export['node|program_record|search_result'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function program_record_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'card';
  $ds_view_mode->label = 'Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['card'] = $ds_view_mode;

  return $export;
}
