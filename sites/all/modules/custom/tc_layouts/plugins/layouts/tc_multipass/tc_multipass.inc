<?php
// Plugin definition
$plugin = array(
  'title' => t('Think College Multipass'),
  'icon' => 'tc-multipass.png',
  'category' => t('ThinkCollege'),
  'theme' => 'tc_multipass',
  //'css' => 'tc-multipass.css',
  //'admin css' => $bootstrap_css,
  'regions' => array(
    'row1left' => t('Row 1, left'),
    'row1right' => t('Row 1, right'),
    'row2' => t('Row 2'),
    'row3left' => t('Row 3, left'),
    'row3right' => t('Row 3, right'),
    'row4left' => t('Row 4, left'),
    'row4right' => t('Row 4, right'),
  ),
);
