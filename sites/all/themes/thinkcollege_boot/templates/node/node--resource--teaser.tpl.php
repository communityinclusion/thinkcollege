<?php
$classes .= ' node-resource-teaser node-tc-card';
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="resource-box">
    <div class="topic-label clearfix">
      <div class="topic pull-right">
        <?php print render($content['field_resourc_publication_types']); ?>
        <?php print render($content['field_resourc_topics']); ?>
      </div>
    </div>

    <div class="resource-title-listing">
      <?php print render($content['field_resourc_date_received']); ?>
      <?php print render($content['field_resourc_media_types']); ?>
      <?php print l($title, '/node/' . $node->nid, array('html' => TRUE)); ?>
    </div>


    <div class="resource-description">
      <?php
        // Hide comments, tags, and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_tags']);
        print render($content);
      ?>

      <?php if (!empty($content['field_tags'])): ?>
       <footer>
          <?php print render($content['field_tags']); ?>
       </footer>
      <?php endif; ?>

      <?php print render($content['comments']); ?>
    </div>
  </div>

</article> <!-- /.node -->
