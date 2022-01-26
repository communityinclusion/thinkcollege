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
    'parent_identifier' => 'main-menu_resources:node/3785',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -53,
    'customized' => 1,
    'parent_identifier' => 'main-menu_students--families:node/4875',
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
    'weight' => -55,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/4876',
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
    'weight' => -54,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/4876',
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
    'weight' => -55,
    'customized' => 1,
    'parent_identifier' => 'main-menu_students--families:node/4875',
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
    'weight' => -53,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/4876',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('College Search');
  t('For Families');
  t('Future Quest Island: Explorations');
  t('Moving Transition Forward');
  t('Student Corner');
  t('Transition Leadership');

  return $menu_links;
}
