<button id="tc-adv-filters" class="btn btn-primary" type="button"
        data-toggle="collapse" data-target="#collapseAdvancedFilters"
        aria-expanded="false" aria-controls="collapseAdvancedFilters">
  ADVANCED FILTERS
</button>
<?php
$adv_classes="collapse";
$params = drupal_get_query_parameters();
if (sizeof($params) != 0) {
  if (array_key_exists('f', $params)) {
    $media = preg_grep('/(field_resourc_media_types)/', $params['f']);
    $publication = preg_grep('/(field_resourc_publication_types', $params['f']);
    if ((sizeof($media) > 0) || (sizeof($publication) > 0)) {
      $adv_classes = "collapse in";
    }
  }
}
?>
<div class="<?php echo $adv_classes; ?>" id="collapseAdvancedFilters">
    <?php
    // Media Types
    $whole_block = block_load('facetapi','jty8nubvowm0ptx7go5humldpaf9tb4j');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // Publication Types
    $whole_block = block_load('facetapi','u46epusfsta0bt3hdaipnelbpowcfnlk');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    ?>
</div>