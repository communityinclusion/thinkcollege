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
    'type' => 'none',
    'settings' => NULL,
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
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'tc_multipass';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1left' => NULL,
      'row1right' => NULL,
      'row2' => NULL,
      'row3left' => NULL,
      'row3right' => NULL,
      'row4left' => NULL,
      'row4right' => NULL,
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
  $pane->pid = 'new-0e1bce64-9860-4327-82c1-b341a11efb98';
  $pane->panel = 'row1left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'College options for folks with intellectual disabilities',
    'title' => 'College options for folks with intellectual disabilities',
    'title_heading' => 'h2',
    'body' => 'asfasdfasdfasfsadf',
    'format' => 'plain_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0e1bce64-9860-4327-82c1-b341a11efb98';
  $display->content['new-0e1bce64-9860-4327-82c1-b341a11efb98'] = $pane;
  $display->panels['row1left'][0] = 'new-0e1bce64-9860-4327-82c1-b341a11efb98';
  $pane = new stdClass();
  $pane->pid = 'new-80971494-f604-407b-83ab-b9d34489eaf5';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'This is the second title',
    'title' => 'This is the second title',
    'title_heading' => 'h2',
    'body' => 'How about some more text. How much text? I don\'t know - how much do you want?',
    'format' => 'plain_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '80971494-f604-407b-83ab-b9d34489eaf5';
  $display->content['new-80971494-f604-407b-83ab-b9d34489eaf5'] = $pane;
  $display->panels['row1right'][0] = 'new-80971494-f604-407b-83ab-b9d34489eaf5';
  $pane = new stdClass();
  $pane->pid = 'new-7f9d31e9-b00a-434a-adb4-d3600e30540d';
  $pane->panel = 'row1right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'This is a title',
    'title' => 'This is a title...',
    'title_heading' => 'h2',
    'body' => 'asdfas sadf asf asfasfsadfasdf ',
    'format' => 'plain_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7f9d31e9-b00a-434a-adb4-d3600e30540d';
  $display->content['new-7f9d31e9-b00a-434a-adb4-d3600e30540d'] = $pane;
  $display->panels['row1right'][1] = 'new-7f9d31e9-b00a-434a-adb4-d3600e30540d';
  $pane = new stdClass();
  $pane->pid = 'new-68685f4d-7ba3-48ce-a6c2-65e06b32a276';
  $pane->panel = 'row2';
  $pane->type = 'views_panes';
  $pane->subtype = 'whats_new-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68685f4d-7ba3-48ce-a6c2-65e06b32a276';
  $display->content['new-68685f4d-7ba3-48ce-a6c2-65e06b32a276'] = $pane;
  $display->panels['row2'][0] = 'new-68685f4d-7ba3-48ce-a6c2-65e06b32a276';
  $pane = new stdClass();
  $pane->pid = 'new-7ca53683-7ee3-4856-8bc4-e26b164bcf1d';
  $pane->panel = 'row2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Innovation Exchange',
    'title' => 'Innovation Exchange',
    'title_heading' => 'h2',
    'body' => 'Lots of image and icons go in here - it\'s gonna be sweet.',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7ca53683-7ee3-4856-8bc4-e26b164bcf1d';
  $display->content['new-7ca53683-7ee3-4856-8bc4-e26b164bcf1d'] = $pane;
  $display->panels['row2'][1] = 'new-7ca53683-7ee3-4856-8bc4-e26b164bcf1d';
  $pane = new stdClass();
  $pane->pid = 'new-57641ce9-166f-488c-89f0-2a32066bb5d9';
  $pane->panel = 'row3left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'College search image',
    'title' => 'College search',
    'title_heading' => 'h2',
    'body' => 'There\'s going to be a big image in here.',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '57641ce9-166f-488c-89f0-2a32066bb5d9';
  $display->content['new-57641ce9-166f-488c-89f0-2a32066bb5d9'] = $pane;
  $display->panels['row3left'][0] = 'new-57641ce9-166f-488c-89f0-2a32066bb5d9';
  $pane = new stdClass();
  $pane->pid = 'new-2f95e191-86a0-4b5c-9543-525438d214eb';
  $pane->panel = 'row4left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Join the conversation block',
    'title' => 'Join the conversation',
    'title_heading' => 'h2',
    'body' => 'This is going to be a block with a CTA.',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f95e191-86a0-4b5c-9543-525438d214eb';
  $display->content['new-2f95e191-86a0-4b5c-9543-525438d214eb'] = $pane;
  $display->panels['row4left'][0] = 'new-2f95e191-86a0-4b5c-9543-525438d214eb';
  $pane = new stdClass();
  $pane->pid = 'new-09b11373-f669-4a20-8a57-51a3b1e5314f';
  $pane->panel = 'row4right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'What\'s Happening in Your State',
    'title' => 'What\'s Happening in Your State',
    'title_heading' => 'h2',
    'body' => 'Fancy SVG with all the states - clickable!',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '09b11373-f669-4a20-8a57-51a3b1e5314f';
  $display->content['new-09b11373-f669-4a20-8a57-51a3b1e5314f'] = $pane;
  $display->panels['row4right'][0] = 'new-09b11373-f669-4a20-8a57-51a3b1e5314f';
  $pane = new stdClass();
  $pane->pid = 'new-49f655f7-2fb5-4ef6-982d-82d19c95c53d';
  $pane->panel = 'row4right';
  $pane->type = 'views_panes';
  $pane->subtype = 'upcoming_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '49f655f7-2fb5-4ef6-982d-82d19c95c53d';
  $display->content['new-49f655f7-2fb5-4ef6-982d-82d19c95c53d'] = $pane;
  $display->panels['row4right'][1] = 'new-49f655f7-2fb5-4ef6-982d-82d19c95c53d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
