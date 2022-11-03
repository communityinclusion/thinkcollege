<?php

/**
 * @file
 * landing_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function landing_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'abstract' => array(
          'value' => 'College options for people with intellectual disabilities',
        ),
        'description' => array(
          'value' => 'Think College is a national initiative dedicated to developing, expanding, and improving research and practice in inclusive higher education for students with intellectual disability. It is based at the Institute for Community Inclusion, University of Massachusetts Boston.',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_dallas';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row0' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2' => NULL,
      'row2left' => NULL,
      'row2right' => NULL,
      'row3' => NULL,
      'row3left' => NULL,
      'row3right' => NULL,
      'row4left' => NULL,
      'row4right' => NULL,
      'row5left' => NULL,
      'row5right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6929d212-0094-4bde-9605-6e536373e9a0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51991429-d311-4e3f-b31e-ee26a4d24bbd';
  $pane->panel = 'row1left';
  $pane->type = 'views';
  $pane->subtype = 'slideshow_test';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '7',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'span',
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '51991429-d311-4e3f-b31e-ee26a4d24bbd';
  $display->content['new-51991429-d311-4e3f-b31e-ee26a4d24bbd'] = $pane;
  $display->panels['row1left'][0] = 'new-51991429-d311-4e3f-b31e-ee26a4d24bbd';
  $pane = new stdClass();
  $pane->pid = 'new-af0760ef-b24d-4656-bf2f-6cc8d2f8bdf9';
  $pane->panel = 'row1right';
  $pane->type = 'views';
  $pane->subtype = 'home_page_content_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '5',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'home-featuredblock',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'af0760ef-b24d-4656-bf2f-6cc8d2f8bdf9';
  $display->content['new-af0760ef-b24d-4656-bf2f-6cc8d2f8bdf9'] = $pane;
  $display->panels['row1right'][0] = 'new-af0760ef-b24d-4656-bf2f-6cc8d2f8bdf9';
  $pane = new stdClass();
  $pane->pid = 'new-54b6be28-d590-434b-b679-92beb0cd3ff9';
  $pane->panel = 'row2';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'home-featurednews',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '54b6be28-d590-434b-b679-92beb0cd3ff9';
  $display->content['new-54b6be28-d590-434b-b679-92beb0cd3ff9'] = $pane;
  $display->panels['row2'][0] = 'new-54b6be28-d590-434b-b679-92beb0cd3ff9';
  $pane = new stdClass();
  $pane->pid = 'new-ce57d81d-23f5-443b-a7ee-a1179b195cbb';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'college search button',
    'body' => '<p><a class="CSbtn" href="/college-search" role="button"><span class="CS">COLLEGE SEARCH</span><br />
<span class="CStagline">The only directory of programs for students with intellectual disabilities in the US</span></a></p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ce57d81d-23f5-443b-a7ee-a1179b195cbb';
  $display->content['new-ce57d81d-23f5-443b-a7ee-a1179b195cbb'] = $pane;
  $display->panels['row3left'][0] = 'new-ce57d81d-23f5-443b-a7ee-a1179b195cbb';
  $pane = new stdClass();
  $pane->pid = 'new-142be058-3cc3-415e-8519-c6c83a7848df';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img alt="Photo of Kathy Becht saying &quot;I Can Help&quot;" class="img-responsive" src="/sites/default/files/images/Becht-cutout-help.jpg" />If you have a question, Ask Kathy! Email her at <strong><a href="mailto:thinkcollegeta@gmail.com?subject=Help%20request">thinkcollegeta@gmail.com</a></strong>. If she doesn’t know, she’ll ask her <a href="/technical-assistance/technical-assistance-providers"><b>team</b></a>!&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Have Questions? Ask Kathy!',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '142be058-3cc3-415e-8519-c6c83a7848df';
  $display->content['new-142be058-3cc3-415e-8519-c6c83a7848df'] = $pane;
  $display->panels['row3left'][1] = 'new-142be058-3cc3-415e-8519-c6c83a7848df';
  $pane = new stdClass();
  $pane->pid = 'new-a5ca0924-aa75-4b9b-81f0-51b7528ee206';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Twitter',
    'body' => '<p><a class="twitter-timeline" data-height="700" href="https://twitter.com/thinkcollegeICI">Tweets by thinkcollegeICI</a> <script async src="//platform.twitter.com/widgets.js" charset="utf-8"></script></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Think College Twitter',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box',
    'css_id' => 'tc-home-twitter-block',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a5ca0924-aa75-4b9b-81f0-51b7528ee206';
  $display->content['new-a5ca0924-aa75-4b9b-81f0-51b7528ee206'] = $pane;
  $display->panels['row3left'][2] = 'new-a5ca0924-aa75-4b9b-81f0-51b7528ee206';
  $pane = new stdClass();
  $pane->pid = 'new-45152c5e-909e-46b4-beae-ea49e1f5e434';
  $pane->panel = 'row3right';
  $pane->type = 'views';
  $pane->subtype = 'hero_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '3',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'span',
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'heroTab box',
    'css_id' => 'home',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45152c5e-909e-46b4-beae-ea49e1f5e434';
  $display->content['new-45152c5e-909e-46b4-beae-ea49e1f5e434'] = $pane;
  $display->panels['row3right'][0] = 'new-45152c5e-909e-46b4-beae-ea49e1f5e434';
  $pane = new stdClass();
  $pane->pid = 'new-7cce9073-4200-4949-abc1-e0a8602e2ff7';
  $pane->panel = 'row3right';
  $pane->type = 'views';
  $pane->subtype = 'blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '3',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'h3',
    'override_title_text' => 'INSIDE THINK COLLEGE BLOG | LATEST POSTS',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'box-blue home-blogblock',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7cce9073-4200-4949-abc1-e0a8602e2ff7';
  $display->content['new-7cce9073-4200-4949-abc1-e0a8602e2ff7'] = $pane;
  $display->panels['row3right'][1] = 'new-7cce9073-4200-4949-abc1-e0a8602e2ff7';
  $pane = new stdClass();
  $pane->pid = 'new-5f60030e-d864-4f92-b158-7fa0a5083588';
  $pane->panel = 'row3right';
  $pane->type = 'views_panes';
  $pane->subtype = 'upcoming_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5f60030e-d864-4f92-b158-7fa0a5083588';
  $display->content['new-5f60030e-d864-4f92-b158-7fa0a5083588'] = $pane;
  $display->panels['row3right'][2] = 'new-5f60030e-d864-4f92-b158-7fa0a5083588';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'innovation_exchange_employment';
  $page->task = 'page';
  $page->admin_title = 'Innovation Exchange - Employment';
  $page->admin_description = '';
  $page->path = 'resources/innovation-exchange/employment';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_innovation_exchange_employment__panel';
  $handler->task = 'page';
  $handler->subtask = 'innovation_exchange_employment';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Curated resources on employment outcomes for college students with intellectual disability',
        ),
      ),
    ),
    'name' => 'panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'relationships' => array(),
    'title' => 'Innovation Exchange - Employment',
  );
  $display = new panels_display();
  $display->layout = 'tc_rubyrhod';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Employment';
  $display->uuid = '6b11f481-cda2-4750-99cd-939d1bf3c16c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_innovation_exchange_employment__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-df9723c1-4cb3-42c9-86b4-1ab14aa00454';
  $pane->panel = 'row1left';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Employment-Resource',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-featuredresources box',
    'css_id' => 'featuredresources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'df9723c1-4cb3-42c9-86b4-1ab14aa00454';
  $display->content['new-df9723c1-4cb3-42c9-86b4-1ab14aa00454'] = $pane;
  $display->panels['row1left'][0] = 'new-df9723c1-4cb3-42c9-86b4-1ab14aa00454';
  $pane = new stdClass();
  $pane->pid = 'new-118378e4-e847-433e-a99e-290000a9ae69';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Quick links',
    'body' => '<ul>
	<li><a href="http://apse.org/">Association of People Supporting EmploymentFirst (APSE)</a></li>
	<li><a href="https://www.dol.gov/odep/">Office of Disability Employment Policy (ODEP)</a></li>
	<li><a href="http://www.leadcenter.org/">LEAD Center</a></li>
	<li><a href="http://askjan.org/">Job Accommodation Network (JAN)</a></li>
	<li><a href="https://www.ada.gov/employment.htm">Information &amp; Technical Assistance on the Americans with Disabilities Act</a></li>
</ul>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Quick Links',
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'box external-links-list',
    'css_id' => 'quicklinks',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '118378e4-e847-433e-a99e-290000a9ae69';
  $display->content['new-118378e4-e847-433e-a99e-290000a9ae69'] = $pane;
  $display->panels['row1left'][1] = 'new-118378e4-e847-433e-a99e-290000a9ae69';
  $pane = new stdClass();
  $pane->pid = 'new-f1e8f193-c360-4db6-b5be-51326ac4cf97';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Employment',
    'body' => '<p>Competitive, integrated employment is a reachable outcome for people with intellectual disability. Like anyone else, students with&nbsp;intellectual disability attend college to prepare them for the career of their choice.&nbsp;</p>

<p>Through person-centered planning and skills evaluation, students can choose a field in which to pursue paid or unpaid internships, part-time or full-time work, and volunteer opportunities -- with the ultimate goal of leaving college with a paid job in the field of their choice.</p>

<p>Employment for people with&nbsp;intellectual disability is supported by legislation and advocacy. For example, Employment First is an initiative which advises that employment be the first goal for people with intellectual disability. Most states now have some kind of Employment First policy or initiative.</p>

<p>&nbsp;The Americans with Disabilities Act is a federal law that prohibits discrimination on the basis of disability, and Title I is specific to employment. The Individuals with Disabilities Education Act requires transition planning that addresses goals after high school, including training, education, and employment.</p>

<p>Another important law about employment is the Workforce Innovation and Opportunity Act, or WIOA. WIOA increases the focus on improving service delivery to individuals with barriers to employment, including youth and adults with intellectual disability.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'intro',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f1e8f193-c360-4db6-b5be-51326ac4cf97';
  $display->content['new-f1e8f193-c360-4db6-b5be-51326ac4cf97'] = $pane;
  $display->panels['row1right'][0] = 'new-f1e8f193-c360-4db6-b5be-51326ac4cf97';
  $pane = new stdClass();
  $pane->pid = 'new-3f5f8090-15b8-4ada-b8cd-e9a4776cdb28';
  $pane->panel = 'row1right';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_feature_in_section_tid' => 'InnoExchange-Employment-News',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'ie-news',
    'css_id' => 'news',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3f5f8090-15b8-4ada-b8cd-e9a4776cdb28';
  $display->content['new-3f5f8090-15b8-4ada-b8cd-e9a4776cdb28'] = $pane;
  $display->panels['row1right'][1] = 'new-3f5f8090-15b8-4ada-b8cd-e9a4776cdb28';
  $pane = new stdClass();
  $pane->pid = 'new-4816585e-da1c-4f26-93c7-ceca5a255927';
  $pane->panel = 'row1right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '3599',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Frequently Asked Questions',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'accordian',
    'css_id' => 'faq',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4816585e-da1c-4f26-93c7-ceca5a255927';
  $display->content['new-4816585e-da1c-4f26-93c7-ceca5a255927'] = $pane;
  $display->panels['row1right'][2] = 'new-4816585e-da1c-4f26-93c7-ceca5a255927';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['innovation_exchange_employment'] = $page;

  return $pages;

}
