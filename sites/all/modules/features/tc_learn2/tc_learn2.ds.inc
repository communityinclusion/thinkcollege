<?php

/**
 * @file
 * tc_learn2.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tc_learn2_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tc_learn|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tc_learn';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|tc_learn|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tc_learn2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tc_learn|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tc_learn';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'left',
      'field_feature_in_section' => 'left',
      'field_tc_learn_sidebar' => 'right',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_feature_in_section',
      ),
      'right' => array(
        2 => 'field_tc_learn_sidebar',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|tc_learn|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tc_learn|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tc_learn';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'left',
      'field_tc_learn_sidebar' => 'right',
    ),
    'hide_page_title' => '0',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'page_option_title' => '',
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'field_tc_learn_sidebar',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|tc_learn|full'] = $ds_layout;

  return $export;
}
