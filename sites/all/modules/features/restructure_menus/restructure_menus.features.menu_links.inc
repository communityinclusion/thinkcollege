<?php

/**
 * @file
 * restructure_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restructure_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_a-z-list-of-terms:about/glossary.
  $menu_links['main-menu_a-z-list-of-terms:about/glossary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/glossary',
    'router_path' => 'about/glossary',
    'link_title' => 'A-Z list of terms',
    'options' => array(
      'identifier' => 'main-menu_a-z-list-of-terms:about/glossary',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_family-resources:family-resources.
  $menu_links['main-menu_family-resources:family-resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'family-resources',
    'router_path' => 'family-resources',
    'link_title' => 'Family Resources',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => 'Resources for parents or family members of young adults with intellectual disabilities',
      ),
      'identifier' => 'main-menu_family-resources:family-resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -54,
    'customized' => 1,
    'parent_identifier' => 'main-menu_students--families:node/4875',
  );
  // Exported menu link: main-menu_glossary:about/glossary.
  $menu_links['main-menu_glossary:about/glossary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/glossary',
    'router_path' => 'about/glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_glossary:about/glossary',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/35',
  );
  // Exported menu link: main-menu_home:home.
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -57,
    'customized' => 1,
  );
  // Exported menu link: main-menu_national-coordinating-center:projects/ncc.
  $menu_links['main-menu_national-coordinating-center:projects/ncc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects/ncc',
    'router_path' => 'projects/ncc',
    'link_title' => 'National Coordinating Center',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_national-coordinating-center:projects/ncc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -57,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/4876',
  );
  // Exported menu link: main-menu_search-resource-library:resource-search.
  $menu_links['main-menu_search-resource-library:resource-search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resource-search',
    'router_path' => 'resource-search',
    'link_title' => 'Search Resource Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'sort' => 'field_resourc_publication_date',
        'order' => 'desc',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_search-resource-library:resource-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:node/3785',
  );
  // Exported menu link: main-menu_upcoming-events:tc-events-upcoming.
  $menu_links['main-menu_upcoming-events:tc-events-upcoming'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tc-events-upcoming',
    'router_path' => 'tc-events-upcoming',
    'link_title' => 'Upcoming Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_upcoming-events:tc-events-upcoming',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_about:http://www.thinkcollege.net/about-us.
  $menu_links['menu-temporary-main-menu_about:http://www.thinkcollege.net/about-us'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/about-us',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_about:http://www.thinkcollege.net/about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_college-search:college-search.
  $menu_links['menu-temporary-main-menu_college-search:college-search'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'college-search',
    'router_path' => 'college-search',
    'link_title' => 'College Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_college-search:college-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_contact:http://www.thinkcollege.net/contact.
  $menu_links['menu-temporary-main-menu_contact:http://www.thinkcollege.net/contact'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_contact:http://www.thinkcollege.net/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_home:http://www.thinkcollege.net.
  $menu_links['menu-temporary-main-menu_home:http://www.thinkcollege.net'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_home:http://www.thinkcollege.net',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_publications:http://www.thinkcollege.net/publications.
  $menu_links['menu-temporary-main-menu_publications:http://www.thinkcollege.net/publications'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/publications',
    'router_path' => '',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_publications:http://www.thinkcollege.net/publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_topics:http://www.thinkcollege.net/topics.
  $menu_links['menu-temporary-main-menu_topics:http://www.thinkcollege.net/topics'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/topics',
    'router_path' => '',
    'link_title' => 'Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_topics:http://www.thinkcollege.net/topics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-temporary-main-menu_training:http://www.thinkcollege.net/training.
  $menu_links['menu-temporary-main-menu_training:http://www.thinkcollege.net/training'] = array(
    'menu_name' => 'menu-temporary-main-menu',
    'link_path' => 'http://www.thinkcollege.net/training',
    'router_path' => '',
    'link_title' => 'Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-temporary-main-menu_training:http://www.thinkcollege.net/training',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A-Z list of terms');
  t('About');
  t('College Search');
  t('Contact');
  t('Family Resources');
  t('Glossary');
  t('Home');
  t('National Coordinating Center');
  t('Publications');
  t('Search Resource Library');
  t('Topics');
  t('Training');
  t('Upcoming Events');

  return $menu_links;
}
