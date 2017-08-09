<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */

switch ($type) {
  case 'article':
    $type_label = 'Article';
    break;
  case 'page':
    $type_label = 'Page';
    break;
  case 'innovation_exchange':
    $type_label = 'Innovation Exchange';
    break;
  case 'program_record':
    $type_label = 'Program';
    break;
  case 'resource':
    $type_label = 'Resource';
    break;
  case 'tc_events':
    $type_label = 'Events';
    break;
  case 'tc_learn':
    $type_label = 'TC Learn';
    break;
  default:
    $type_label = '';
    break;
}
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">
      <div class="thinkcollege-search-result-content-type"><?php print $type_label; ?></div>
      <?php print $central; ?>
    </<?php print $central_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
