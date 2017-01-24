<button id="tc-adv-filters" class="btn btn-primary" type="button"
        data-toggle="collapse" data-target="#collapseAdvancedFilters"
        aria-expanded="false" aria-controls="collapseAdvancedFilters">
  ADVANCED FILTERS
</button>
<div class="collapse" id="collapseAdvancedFilters">
    <?php
    // public / private
    $whole_block = block_load('facetapi','vqmkt1ucjsq01vwf5numawcjhodoiedi');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // type of school
    $whole_block = block_load('facetapi','3qrtavafumrt3dyzncd7af23zwtwlwr4');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // length of programme
    $whole_block = block_load('facetapi','c4qkveebjlarazcqu7ooayqzqb56k9tf');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);

    // TPSID?
    $whole_block = block_load('facetapi','8FCGdfKRz0Zf9K9kTQwGhnNZX2jV9g6H');
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($whole_block)));
    print drupal_render($renderable_array);
    ?>
</div>