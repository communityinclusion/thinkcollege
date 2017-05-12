<?php
/**
 * @file
 * Template for tc_multipass.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display tc-multipass clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="row">
    <div class="col-sm-8 tc-row1left">
      <?php print $content['row1left']; ?>
    </div>
    <div class="col-sm-4 tc-row1right">
      <?php print $content['row1right']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-sm-12 tc-row2">
      <?php print $content['row2']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-sm-7 tc-row3left">
      <?php print $content['row3left']; ?>
    </div>
    <div class="col-sm-5 tc-row3right">
      <?php print $content['row3right']; ?>
    </div>
  </div>

  <div class="row">
    <div class="col-sm-4 tc-row4left">
      <?php print $content['row4left']; ?>
    </div>
    <div class="col-sm-8 tc-row4right">
      <?php print $content['row4right']; ?>
    </div>
  </div>

</div><!-- /.tc-multipass -->
