<?php

/**
 * @file
 * Display Suite Event Attach configuration.
 */

function ds_event_attach() {
  return array(
    'label' => t('Event Attach'),
    'regions' => array(
      'center' => t('Center'),
    ),
    // Uncomment if you want to include a CSS file for this layout (event_attach.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (event_attach.png)
    // 'image' => TRUE,
  );
}
