<?php
// Plugin definition
$plugin = array(
  'title' => t('Think College Munro'),
  'icon' => 'tc-munro.png',
  'category' => t('ThinkCollege'),
  'theme' => 'tc_munro',
  //'css' => 'tc-multipass.css',
  //'admin css' => $bootstrap_css,
  'regions' => array(
    'row1left' => t('Row 1, left'),
    'row1right' => t('Row 1, right'),
    'row2left' => t('Row 2, left'),
    'row2right' => t('Row 2, right'),
  ),
);
