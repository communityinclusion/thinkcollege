<?php

$favorites = $variables['favorites'];
$emailform = $variables['emailform'];

if (count($favorites)) {
  foreach($favorites as $nid => $title) {
    $titlelink = l($title, 'node/'. $nid);
    ?>
    <div class="saved"><p><a href="/collegesearch/favorite/remove/<?php print $nid ?>?destination=<?php print current_path() ?>">X</a> <?php print $titlelink ?></p></div>
    <?php
  }
  ?>

  <div class="btn-group">
    <button type="button" class="btn btn-default" data-toggle="modal" data-target="#tc_favorite_email_modal">Email</button>
  </div>

  <div class="modal fade" id="tc_favorite_email_modal" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal">×</button>
          <h4>Email saved programs</h4>
        </div>
        <div class="modal-body">
             <?php print drupal_render($emailform); ?>
        </div>
      </div>
    </div>
  </div>
  <?php
} else {
  ?>
  <div>Click the "Save" Button to add a program to this list.</div>
  <?php
}

