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
    'body' => '<div class="hero"><img alt="Academic Books" class="img-responsive" src="/sites/default/files/academic-books.png" /></div>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'block',
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
    'body' => '        <style>


.icontile {
	background-color: #20527C;
	border:#fff solid 5px;
	padding:10px;
	position: relative;
	color:#fff;
}

.icontile h3 {
	color:#fff;
	text-align:center
	}

.icontile:hover {
    cursor: hand;
    cursor: pointer;
    opacity: .9;
    background-color: #C96B29
}
.ie-feature {
	color:#fff;
	}
.ie-intro {
	background-color: #C96B29;
	padding: 15px; height:470px;
    border: #fff solid 5px;
    }
a.divLink {
    width: 100%;
    height: 100%;
    top: 0;
    left: 0;
    text-decoration: none;
    /* Makes sure the link doesn\'t get underlined */
    z-index: 10;
    /* raises anchor tag above everything else in div */
    background-color: white;
    /*workaround to make clickable in IE */
    opacity: 0;
    /*workaround to make clickable in IE */
    filter: alpha(opacity=0);
    /*workaround to make clickable in IE */
}




@media (max-width: 991px) {
  .ie-intro {
  height:708px;
  }
}


@media (max-width: 768px) {
   .ie-intro {
   	height:100%;
   	}
 .ie-intro ul li {
	 display:inline-block;
	 }
 .ie-intro ul li:before {
	 content: \'\\ffed\';
	 margin-right: .5em;
	 padding-left:15px;
	 }

    .icontile img{
	width:75px;
	}

}
        </style>

    <div class="container ie-feature">
	<div class="row">
		<div class="col-md-3 col-sm-4 ie-intro">


				<h3 class="block-title">Click on a Topic
to Find:</h3>

	<ul>
		<li class="lead">Topic Overviews</li>
	<li class="lead">Key Resources</li>
	<li class="lead">Related Websites</li>
	<li class="lead">Affinity Groups</li>
	<li class="lead">FAQ’s</li>
	</ul>





		</div>
		<div class="col-md-9 col-sm-8">
			<div class="row">
		<div class="col-md-4 col-sm-6 icontile">

						 <h3>Employment</h3>

					<a class="divLink" href="#"> 	<img class="img-responsive"  src="http://themajorlift.com/dev/img/ie-employment.svg"  style="margin:0 auto;max-width:150px" /></a>


				</div>

<div class="col-md-4 col-sm-6 icontile">


						 <h3>Paying for College</h3>
				<a class="divLink" href="#"> 	<img class="img-responsive" src="http://themajorlift.com/dev/img/ie-financial-aid.svg" width="150px" style="margin:0 auto;max-width:150px" /></a>


				</div>
<div class="col-md-4 col-sm-6 icontile">

						<a class="divLink" href="#"> <h3>Vocational Rehab</h3></a>
					<img class="img-responsive"  src="http://themajorlift.com/dev/img/ie-transition.svg" style="margin:0 auto;max-width:150px" />


				</div>

			<div class="col-md-4 col-sm-6 icontile">


						<a class="divLink" href="#">  <h3>For Families</h3></a>
						<img class="img-responsive"  src="http://themajorlift.com/dev/img/ie-family.svg" style="margin:0 auto;max-width:150px" />


				</div>
			<div class="col-md-4 col-sm-6 icontile">


						 <h3>Choose a Program</h3>
						<a class="divLink" href="#"> 	<img class="img-responsive" src="http://themajorlift.com/dev/img/ie-home.svg" style="margin:0 auto;max-width:150px" /></a>


				</div>
		<div class="col-md-4 col-sm-6 icontile">


						 <h3>Starting a Program</h3>
						<a class="divLink" href="#"> <img class="img-responsive"  src="http://themajorlift.com/dev/img/ie-academic-building.svg" style="margin:0 auto;max-width:150px" /></a>

				</div>
			</div>
		</div>
	</div>
</div>


',
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
    'body' => '<p>Connect with professionals, parents and students interested in postsecondary education for students with intellectual disabilities.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f95e191-86a0-4b5c-9543-525438d214eb';
  $display->content['new-2f95e191-86a0-4b5c-9543-525438d214eb'] = $pane;
  $display->panels['row4left'][0] = 'new-2f95e191-86a0-4b5c-9543-525438d214eb';
  $pane = new stdClass();
  $pane->pid = 'new-a5ca0924-aa75-4b9b-81f0-51b7528ee206';
  $pane->panel = 'row4left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Twitter',
    'title' => 'Twitter feed by ThinkCollegeICI',
    'title_heading' => 'h2',
    'body' => '<a class="twitter-timeline" data-height="500" href="https://twitter.com/thinkcollegeICI">Tweets by thinkcollegeICI</a> <script async src="//platform.twitter.com/widgets.js" charset="utf-8"></script>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'tc-home-twitter-block',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a5ca0924-aa75-4b9b-81f0-51b7528ee206';
  $display->content['new-a5ca0924-aa75-4b9b-81f0-51b7528ee206'] = $pane;
  $display->panels['row4left'][1] = 'new-a5ca0924-aa75-4b9b-81f0-51b7528ee206';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box',
  );
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
