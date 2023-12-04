<?php

/**
 * @file
 * article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
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
  $export['node|article|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'post_date' => array(
      'format' => 'ds_post_date_search_api_facetapi_DAY',
      'label' => 'hidden',
      'weight' => '3',
    ),
    'title' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
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
  $export['node|article|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'ds_content',
      'field_image' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_teaser_image' => 'ds_content',
      'node_link' => 'ds_content',
      'post_date' => 'ds_content',
      'title' => 'ds_content',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_teaser_image',
        2 => 'title',
        3 => 'post_date',
        4 => 'body',
        5 => 'node_link',
        6 => 'field_tags',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}
