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

  // Exported field_instance: 'node-faq_page-field_faqs_formatted'.
  $field_instances['node-faq_page-field_faqs_formatted'] = array(
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
        'label' => 'above',
        'module' => 'faqfield',
        'settings' => array(
          'active' => '',
          'autoHeight' => 0,
          'collapsible' => 1,
          'event' => 'click',
        ),
        'type' => 'faqfield_accordion',
        'weight' => 1,
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
    'field_name' => 'field_faqs_formatted',
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
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs');

  return $field_instances;
}
