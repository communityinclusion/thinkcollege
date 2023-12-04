<?php

/**
 * @file
 * field_bases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function field_bases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-states-field_policy_header'.
  $field_instances['taxonomy_term-states-field_policy_header'] = array(
    'bundle' => 'states',
    'default_value' => array(
      0 => array(
        'moddelta' => 'block:46',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => FALSE,
        ),
        'type' => 'blockreference_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => FALSE,
        ),
        'type' => 'blockreference_default',
        'weight' => 1,
      ),
      'live_results_search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_policy_header',
    'label' => 'policy header',
    'required' => 0,
    'settings' => array(
      'blockreference_modules' => array(
        'addthis' => 0,
        'afb' => 0,
        'block' => 0,
        'book' => 0,
        'book_helper' => 0,
        'calendar' => 0,
        'comment' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'diff' => 0,
        'facetapi' => 0,
        'lexicon' => 0,
        'markdown' => 0,
        'menu' => 0,
        'node' => 0,
        'print' => 0,
        'print_pdf' => 0,
        'profile' => 0,
        'quicktabs' => 0,
        'search_api_sorts' => 0,
        'shortcut' => 0,
        'superfish' => 0,
        'system' => 0,
        'tc_facets' => 0,
        'tc_favorite' => 0,
        'tc_resource' => 0,
        'user' => 0,
        'views' => 0,
        'webform' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'blockreference',
      'settings' => array(
        'autocomplete_path' => 'blockreference/autocomplete',
        'blockreference_ac_match_method' => 'contains',
        'size' => 60,
      ),
      'type' => 'blockreference_autocomplete',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('policy header');

  return $field_instances;
}
