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
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|resource|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function resources_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_resourc_apa_citation',
        3 => 'field_resourc_publication_date',
        4 => 'field_resourc_authors',
        5 => 'field_resourc_topics',
        6 => 'field_resourc_media_types',
        7 => 'field_resourc_publication_types',
      ),
      'right' => array(
        8 => 'field_resourc_file',
        9 => 'field_external_link',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_resourc_apa_citation' => 'left',
      'field_resourc_publication_date' => 'left',
      'field_resourc_authors' => 'left',
      'field_resourc_topics' => 'left',
      'field_resourc_media_types' => 'left',
      'field_resourc_publication_types' => 'left',
      'field_resourc_file' => 'right',
      'field_external_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|resource|full'] = $ds_layout;

  return $export;
}
