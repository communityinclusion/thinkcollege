<?php
/**
 * @file
 *
 */
class FacetapiWidgetNestedLinks extends FacetapiWidgetLinks {

  /**
   * Implements FacetapiWidget::execute().
   *
   * @see FacetapiWidgetLinks::setThemeHooks()
   * @see FacetapiWidgetLinks::buildListItems()
   */
  public function execute() {
    $element = &$this->build[$this->facet['field alias']];

    // Sets each item's theme hook, builds item list.
    $this->setThemeHooks($element);
    $settings = $this->settings->settings;
    $element = array(
//      '#theme' => 'item_list',
      '#theme' => 'tc_custom_facets_item_list__nested_facet',
      '#items' => $this->buildListItems($element),
//      '#prefix' => '<div class="facet-collapsible-wrapper" id="facet-collapsible-' . str_replace('_', '-', $this->facet['field alias']) . '">',
//      '#suffix' => '</div>',
      '#attributes' => array_merge_recursive($this->build['#attributes'], array('class' => array('facetapi-collapsible'))),
      /*
      '#attached' => array(
        'library' => array(
          array('system', 'jquery.cookie'),
        ),
        'js' => array(
          drupal_get_path('module', 'facetapi_collapsible') .'/facetapi_collapsible.js',
          array('data' =>
            array(
              'facetapi_collapsible' => array(
                $this->facet['field alias'] => array(
                  'keep_open' => $keep_open,
                  'expand' => $expand,
                  'collapsible_children' => $collapsible_children))), 'type' => 'setting'),
        ),
        'css' => array(drupal_get_path('module', 'facetapi_collapsible') .'/facetapi_collapsible.css'),

      ),
      */
    );
  }

  /**
   * Recursive function that sets each item's theme hook.
   *
   * The individual items will be rendered by different theme hooks depending on
   * whether or not they are active.
   *
   * @param array &$build
   *   A render array containing the facet items.
   *
   * @return FacetapiWidget
   *   An instance of this class.
   *
   * @see theme_facetapi_bootstrap_link_active()
   * @see theme_facetapi_bootstrap_link_inactive()
   */
  protected function setThemeHooks(array &$build) {
    foreach ($build as $value => &$item) {
      $item['#theme'] = ($item['#active']) ? 'facetapi_nested_links_active' : 'facetapi_nested_links_inactive';
      if (!empty($item['#item_children'])) {
        $this->setThemeHooks($item['#item_children']);
      }
    }
    return $this;
  }

}

