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
    'row2left' => t('Row 2, left'),
    'row2right' => t('Row 2, right'),
    'row3' => t('Row 3'),
    'row4left' => t('Row 4, left'),
    'row4right' => t('Row 4, right'),
    'row5left' => t('Row 5, left'),
    'row5right' => t('Row 5, right'),
  ),
);
