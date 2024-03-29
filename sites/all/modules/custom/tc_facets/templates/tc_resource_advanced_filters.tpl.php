
<?php
$adv_classes="collapse";
$params = drupal_get_query_parameters();
if (sizeof($params) != 0) {
  if (array_key_exists('f', $params)) {
    $media = preg_grep('/(field_resourc_media_types)/', $params['f']);
    $publication = preg_grep('/(field_resourc_publication_types)/', $params['f']);
    $audiences =  preg_grep('/(field_resource_audiences)/', $params['f']);
    $project = preg_grep('/(field_project)/', $params['f']);
    $language = preg_grep('/(field_language)/', $params['f']);
    if ((sizeof($media) > 0) || (sizeof($publication) > 0) || (sizeof($audiences) > 0) || (sizeof($project) > 0) || (sizeof($language) > 0)) {
      $adv_classes = "collapse in";
    }
  }
}
?>
<div class="" id="collapseAdvancedFilters">
    <?php
    // Media Types
    $whole_block = block_load('facetapi','jty8nubvowm0ptx7go5humldpaf9tb4j');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // Publication Types
    $whole_block = block_load('facetapi','u46epusfsta0bt3hdaipnelbpowcfnlk');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // Projects

    $whole_block = block_load('facetapi','h0dfzztq72fjzrnh9ibnm0qwkl7f00bs');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // Audiences
    $whole_block = block_load('facetapi','98bu4ooir2vmd31rdtnytl1xgnm7zpsm');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    // Language
  $whole_block = block_load('facetapi','tgxd0gfahysde8tl7sbcdnvh0isdog0s');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    ?>
</div>
