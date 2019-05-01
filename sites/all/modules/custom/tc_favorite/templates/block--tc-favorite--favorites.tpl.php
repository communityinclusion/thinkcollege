<?php

$favorites = $variables['favorites'];
$emailform = $variables['emailform'];

if (count($favorites)) {
  $downloadurl = '';
  $lastElement = end($favorites);
  foreach($favorites as $nid => $title) {
    $titlelink = l($title, 'node/'. $nid);
    ?>
    <div class="saved"><p><a href="/collegesearch/favorite/remove/<?php print $nid ?>?destination=<?php print current_path() ?>">X</a> <?php print $titlelink ?></p></div>
    <?php
    $downloadarray .= $title == $lastElement ? $nid : $nid . "%2B";
    
        }
  ?>

  <div class="btn-group">
    <button type="button" class="btn btn-default" data-toggle="modal" data-target="#tc_favorite_email_modal">Email</button>
    <a class="btn btn-default" href="collegesearch/favorites/my" role="button">See Favorites</a><a class="btn btn-default" href="/college-comparison-chart/<?php print $downloadarray; ?>" role="button">Compare and download</a>
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
  <div>Click "<i class="fa fa-heart" aria-hidden="true"></i> save" for each program you want to save. You will be able to save, compare and download basic information for all your favorites. <br> See FAQ: <a href="/faq#savelist">How do I save and compare programs?</a></div>
  <?php
}

