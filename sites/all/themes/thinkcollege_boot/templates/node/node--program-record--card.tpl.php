<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
//krumo($content);
global $base_url;
$classes .= ' node-program-record-card';
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="program-box">
    <div class="row">
      <div class="col-sm-12 program-heading">

        <div class="program_icon_box">

          <?php if($tc_tpsid_icon): ?>
            <div class="program_icon">
              <div class="tpsid_icon">TPSID</div>
            </div>
          <?php endif ?>

          <?php if($tc_financial_aid_icon): ?>
            <div class="program_icon">
              <div class="cost_icon">
                <img src="<?php print $base_url . '/' . drupal_get_path('theme', 'thinkcollege_boot'); ?>/images/financialaid.svg" alt="icon name">
              </div>
            </div>
          <?php endif ?>

          <?php if($tc_housing_icon): ?>
            <div class="program_icon">
              <div class="home_icon">
                <img src="<?php print $base_url . '/' . drupal_get_path('theme', 'thinkcollege_boot'); ?>/images/home.svg" alt="icon name">
              </div>
            </div>
          <?php endif ?>
        </div>

        <div class="program-search-program-name">
          <?php print l($title, '/node/' . $node->nid); ?>
        </div>

        <div class="program-university">
          <?php print render($content['field_prog_col_univ_name']); ?>
        </div>

        <div class="program-location">
          <?php print render($content['field_address']['#items'][0]['locality']); ?>, <?php print render($content['field_address']['#items'][0]['administrative_area']); ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-7 col-xs-12">
        <div class="row">
          <div class="col-sm-12">
            <div class="panel-body">
              <div class="media">
                <span class="pull-left">
                  <?php print render($content['field_prog_photo']); ?>
                </span>
                <div class="media-body">
                  <h4 class="media-heading">Description</h4>
                  <?php print render($content['body']); ?>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div class="col-sm-5 col-xs-12 program-search-info">
        <div class="row">
          <div class="col-xs-3">
            Address
          </div>
          <div class="col-xs-9">
            <?php print $title; ?><br/>
            <?php print render($content['field_address']['#items'][0]['thoroughfare']); ?><br/>
            <?php
            if (isset($content['field_address']['#items'][0]['premise'])) {
              print render($content['field_address']['#items'][0]['premise']) . '<br/>';
            }
            ?>
            <?php print render($content['field_address']['#items'][0]['locality']); ?>,
            <?php print render($content['field_address']['#items'][0]['administrative_area']); ?>
            <?php print render($content['field_address']['#items'][0]['postal_code']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Phone
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_prog_contact_phone']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Web
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_prog_program_website']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Contact
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_progprogram_contact_person']); ?>
          </div>
        </div>

        <div class="row">
          <div class="col-xs-3">
            Email
          </div>
          <div class="col-xs-9">
            <?php print render($content['field_prog_program_contact_email']); ?>
          </div>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-sm-12 buttons">
        <?php print theme('tc_favorite_button', array('nid' => $node->nid, 'size' => 'default', 'type' => 'danger')); ?>
        <button type="button" class="btn btn-info" data-toggle="modal" data-target="#myModal-<?php print $id; ?>">QUICK LOOK</button>
      </div>
    </div>
  </div>

  <!-- Modal -->
  <div class="modal fade" id="myModal-<?php print $id; ?>" role="dialog">
    <div class="modal-dialog">

      <!-- Modal content-->
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal">×</button>
          <h4 class="modal-title"><?php print $title; ?> - Program Details</h4>
        </div>
        <div class="modal-body">
          <dl class="detail">
            <dt>
            <p class="answer"><strong>Location:</strong></p></dt>
            <dd>
              <div class="program-university">
                <?php print render($content['field_prog_col_univ_name']); ?>
              </div>

              <div class="program-location">
                <?php print render($content['field_prog_city']); ?>, <?php print render($content['field_prog_state']); ?>
              </div>
            </dd>
          </dl>

          <dl class="detail">
            <dt>
            <p class="answer"><strong>Requirements for Admission:</strong></p></dt>
            <dd>
              <?php print render($content['field_prog_admiss_requirements']); ?>
            </dd>
          </dl>

          <dl class="detail">
            <dt>
            <p class="answer"><strong>Admission deadline:</strong></p>
            </dt>
            <dd>
              <?php print render($content['field_prog_admit_deadline']); ?>
          </dl>

          <dl class="detail">
            <dt>
            <p class="answer"><strong>Number of students in this program:</strong></p>
            </dt>
            <dd>
              <?php print render($content['field_prog_hs_coll']); ?>
            </dd>
          </dl>

          <dl class="detail">
            <dt>
            <p class="answer"><strong>Is this program able to provide federal financial aid as a Comprehensive Transition Program (CTP)?:</strong></p>
            </dt>
            <dd>
              <?php print render($content['field_prog_ctp_y_n']); ?>
            </dd>
          </dl>

          <dl class="detail">
            <dt>
            <p class="answer"><strong>Tuition:</strong></p>
            </dt>
            <dd>
              <?php print render($content['field_prog_tuition']); ?>
            </dd>
          </dl>

          <dl class="detail">
            <dt><p class="answer"><strong>Does program offer housing for students?</strong></p></dt>
            <dd>
              <?php print render($content['field_prog_housing_y_n']); ?>
            </dd>
          </dl>
        </div>
        <div class="modal-footer">
          <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        </div>
      </div>

    </div>
  </div>
</article>
