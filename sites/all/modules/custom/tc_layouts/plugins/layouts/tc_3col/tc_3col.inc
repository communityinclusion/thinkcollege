<?php
// Plugin definition
$plugin = array(
  'title' => t('Think College 3col'),
  'icon' => 'tc-3col.png',
  'category' => t('ThinkCollege'),
  'theme' => 'tc_3col',
  //'css' => 'tc-multipass.css',
  //'admin css' => $bootstrap_css,
  'regions' => array(
    'row1' => t('Row 1'),
    'row2left' => t('Row 2, left'),
    'row2center' => t('Row 2, center'),
    'row2right' => t('Row 2, right'),
    'row3left' => t('Row 3, left'),
    'row3center' => t('Row 3, center'),
    'row3right' => t('Row 3, right'),
    'row4left' => t('Row 4, left'),
    'row4center' => t('Row 4, center'),
    'row4right' => t('Row 4, right'),
  ),
);
