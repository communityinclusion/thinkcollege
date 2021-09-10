<?php
/**
 * @file
 * Template for tc_munro.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display tc-munro clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>



  <div class="row">
    <div class="col-md-7 tc-row1left">
      <?php print $content['row1left']; ?>
    </div>
    <div class="col-md-5 tc-row1right">
      <?php print $content['row1right']; ?>
    </div>
  </div>



  <div class="row">
    <div class="col-sm-3 tc-row2left">
      <?php print $content['row2left']; ?>
    </div>
    <div class="col-sm-9 tc-row2right">
      <?php print $content['row2right']; ?>
    </div>
  </div>


</div><!-- /.tc-dallas -->
