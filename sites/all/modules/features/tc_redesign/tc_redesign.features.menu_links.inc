<?php

/**
 * @file
 * tc_redesign.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tc_redesign_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_college-search:college-search.
  $menu_links['main-menu_college-search:college-search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'college-search',
    'router_path' => 'college-search',
    'link_title' => 'College Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_college-search:college-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:uuid/node/66bee5c5-ae58-4ead-87f2-7213745ddd45',
  );
  // Exported menu link: main-menu_for-families:resources/innovation-exchange/for-families.
  $menu_links['main-menu_for-families:resources/innovation-exchange/for-families'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/for-families',
    'router_path' => 'resources/innovation-exchange/for-families',
    'link_title' => 'For Families',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_for-families:resources/innovation-exchange/for-families',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources-by-topic:uuid/node/d525cef7-74c3-4be9-b5e3-cbba486fb75a',
  );
  // Exported menu link: main-menu_future-quest-island-explorations:projects/fqie.
  $menu_links['main-menu_future-quest-island-explorations:projects/fqie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects/fqie',
    'router_path' => 'projects/fqie',
    'link_title' => 'Future Quest Island: Explorations',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_future-quest-island-explorations:projects/fqie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
  );
  // Exported menu link: main-menu_moving-transition-forward:projects/mtf.
  $menu_links['main-menu_moving-transition-forward:projects/mtf'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects/mtf',
    'router_path' => 'projects/mtf',
    'link_title' => 'Moving Transition Forward',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_moving-transition-forward:projects/mtf',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
  );
  // Exported menu link: main-menu_overview-of-mtf-studies:uuid/node/767b74da-6ad0-4191-9e78-34363f721334.
  $menu_links['main-menu_overview-of-mtf-studies:uuid/node/767b74da-6ad0-4191-9e78-34363f721334'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/767b74da-6ad0-4191-9e78-34363f721334',
    'router_path' => 'uuid',
    'link_title' => 'Overview of MTF Studies',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_overview-of-mtf-studies:uuid/node/767b74da-6ad0-4191-9e78-34363f721334',
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'uuid' => '767b74da-6ad0-4191-9e78-34363f721334',
    'vuuid' => '2e628d47-521d-4921-9715-23bd30e4c76b',
    'parent_identifier' => 'main-menu_moving-transition-forward:projects/mtf',
  );
  // Exported menu link: main-menu_student-corner:resources/innovation-exchange/for-students.
  $menu_links['main-menu_student-corner:resources/innovation-exchange/for-students'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/innovation-exchange/for-students',
    'router_path' => 'resources/innovation-exchange/for-students',
    'link_title' => 'Student Corner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_student-corner:resources/innovation-exchange/for-students',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_students--families:uuid/node/da98abd4-c1ae-46d9-a71e-ad1b35768666',
  );
  // Exported menu link: main-menu_transition-leadership-program:uuid/node/74ff22b2-964f-4f00-bc6e-f2e3bca6d6b2.
  $menu_links['main-menu_transition-leadership-program:uuid/node/74ff22b2-964f-4f00-bc6e-f2e3bca6d6b2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/74ff22b2-964f-4f00-bc6e-f2e3bca6d6b2',
    'router_path' => 'uuid',
    'link_title' => 'Transition Leadership Program',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_transition-leadership-program:uuid/node/74ff22b2-964f-4f00-bc6e-f2e3bca6d6b2',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'uuid' => '74ff22b2-964f-4f00-bc6e-f2e3bca6d6b2',
    'vuuid' => 'c247cf0f-5368-4935-8860-fc579a1b5135',
    'parent_identifier' => 'main-menu_transition-leadership:projects/transition-leadership-project',
  );
  // Exported menu link: main-menu_transition-leadership:projects/transition-leadership-project.
  $menu_links['main-menu_transition-leadership:projects/transition-leadership-project'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects/transition-leadership-project',
    'router_path' => 'projects/transition-leadership-project',
    'link_title' => 'Transition Leadership',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_transition-leadership:projects/transition-leadership-project',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:uuid/node/ded003c3-bc3d-4f1d-9ac9-671a39abc83e',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('College Search');
  t('For Families');
  t('Future Quest Island: Explorations');
  t('Moving Transition Forward');
  t('Overview of MTF Studies');
  t('Student Corner');
  t('Transition Leadership');
  t('Transition Leadership Program');

  return $menu_links;
}
