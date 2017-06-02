<?php
/**
 * @file
 * landing_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landing_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-faq_page-field_faqs'.
  $field_instances['node-faq_page-field_faqs'] = array(
    'bundle' => 'faq_page',
    'default_value' => NULL,
    'default_values' => array(
      'answer' => '',
      'question' => '',
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'faqfield',
        'settings' => array(
          'active' => 0,
          'autoHeight' => TRUE,
          'collapsible' => FALSE,
          'event' => 'click',
        ),
        'type' => 'faqfield_accordion',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_faqs',
    'label' => 'FAQs',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'faqfield',
      'settings' => array(
        'answer' => '',
        'question' => '',
      ),
      'type' => 'faqfield_textboxes',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs');

  return $field_instances;
}
