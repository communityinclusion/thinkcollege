<?php
/**
 * @file
 * program_record.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function program_record_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-program-record-scrollspy_employment::#employment.
  $menu_links['menu-program-record-scrollspy_employment::#employment'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#employment',
    'router_path' => '',
    'link_title' => 'Employment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_employment::#employment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_extracurricular::#extracurricular.
  $menu_links['menu-program-record-scrollspy_extracurricular::#extracurricular'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#extracurricular',
    'router_path' => '',
    'link_title' => 'Extracurricular',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_extracurricular::#extracurricular',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_housing::#housing.
  $menu_links['menu-program-record-scrollspy_housing::#housing'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#housing',
    'router_path' => '',
    'link_title' => 'Housing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_housing::#housing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-program-record-scrollspy_top-three-program-priorities::#top-three-priorities.
  $menu_links['menu-program-record-scrollspy_top-three-program-priorities::#top-three-priorities'] = array(
    'menu_name' => 'menu-program-record-scrollspy',
    'link_path' => ':#top-three-priorities',
    'router_path' => '',
    'link_title' => 'Top three program priorities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-program-record-scrollspy_top-three-program-priorities::#top-three-priorities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Employment');
  t('Extracurricular');
  t('Housing');
  t('Top three program priorities');

  return $menu_links;
}
