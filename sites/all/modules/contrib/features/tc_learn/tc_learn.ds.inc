<?php
/**
 * @file
 * tc_learn.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tc_learn_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tc_learn|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tc_learn';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|tc_learn|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tc_learn_ds_layout_settings_info() {
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
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_tc_learn_modules',
        2 => 'field_feature_in_section',
        3 => 'field_resourc_topics',
        4 => 'webform',
      ),
      'right' => array(
        0 => 'field_tc_learn_sidebar',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_tc_learn_modules' => 'left',
      'field_feature_in_section' => 'left',
      'field_resourc_topics' => 'left',
      'webform' => 'left',
      'field_tc_learn_sidebar' => 'right',
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
    'regions' => array(
      'left' => array(
        0 => 'comments',
        1 => 'body',
        2 => 'field_resourc_topics',
        3 => 'webform',
      ),
      'right' => array(
        4 => 'field_tc_learn_sidebar',
      ),
    ),
    'fields' => array(
      'comments' => 'left',
      'body' => 'left',
      'field_resourc_topics' => 'left',
      'webform' => 'left',
      'field_tc_learn_sidebar' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|tc_learn|full'] = $ds_layout;

  return $export;
}
