<?php

/**
 * @file
 * resources.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function resources_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_project'.
  $field_bases['field_project'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_project',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'depth' => '',
          'parent' => 0,
          'vocabulary' => 'projects',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_resource_language'.
  $field_bases['field_resource_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_id_type' => NULL,
    'entity_types' => array(),
    'field_name' => 'field_resource_language',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'depth' => '',
          'parent' => 0,
          'vocabulary' => 'resource_language',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_review'.
  $field_bases['field_review'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_review',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'depth' => '',
          'parent' => 0,
          'vocabulary' => 'internal_review_maintenance',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_video_embed'.
  $field_bases['field_video_embed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_embed',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
