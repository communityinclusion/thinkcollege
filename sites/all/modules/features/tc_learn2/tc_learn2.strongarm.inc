<?php

/**
 * @file
 * tc_learn2.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tc_learn2_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tc_learn';
  $strongarm->value = 0;
  $export['comment_anonymous_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tc_learn';
  $strongarm->value = 1;
  $export['comment_default_mode_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tc_learn';
  $strongarm->value = '10';
  $export['comment_default_per_page_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tc_learn';
  $strongarm->value = 1;
  $export['comment_form_location_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tc_learn';
  $strongarm->value = '1';
  $export['comment_preview_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tc_learn';
  $strongarm->value = 1;
  $export['comment_subject_field_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tc_learn';
  $strongarm->value = '2';
  $export['comment_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_tc_learn';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_tc_learn';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_tc_learn';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tc_learn';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'webform' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '4',
          ),
          'full' => array(
            'visible' => TRUE,
            'weight' => '3',
          ),
          'search_index' => array(
            'visible' => TRUE,
            'weight' => '4',
          ),
          'search_result' => array(
            'visible' => TRUE,
            'weight' => '4',
          ),
        ),
      ),
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
    ),
    'view_modes' => array(
      'card' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'event_attachment' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tc_learn';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tc_learn';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tc_learn';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tc_learn';
  $strongarm->value = '1';
  $export['node_preview_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tc_learn';
  $strongarm->value = 0;
  $export['node_submitted_tc_learn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_tc_learn_pattern';
  $strongarm->value = 'training/[node:book:parents:join-path]/[node:title]';
  $export['pathauto_node_tc_learn_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_think_college_learn_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_think_college_learn_pattern'] = $strongarm;

  return $export;
}
