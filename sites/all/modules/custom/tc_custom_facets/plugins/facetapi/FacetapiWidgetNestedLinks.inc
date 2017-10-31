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
      '#theme' => 'tc_custom_facets_item_list__nested_facet',
      '#items' => $this->buildListItems($element),
//      '#attributes' => array_merge_recursive($this->build['#attributes'], array('class' => array('facetapi-collapsible'))),
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
      if (count($item['#item_children']) == 0) {
        $item['#theme'] = ($item['#active']) ? 'facetapi_nested_links_active' : 'facetapi_nested_links_inactive';
      }
      else {
        $item['#theme'] = 'facetapi_nested_links_parent';
      }
      if (!empty($item['#item_children'])) {
        $this->setThemeHooks($item['#item_children']);
      }
    }
    return $this;
  }



  /**
   * Transforms the render array for use with theme_item_list().
   *
   * The recursion allows this function to act on the various levels of a
   * hierarchical data set.
   *
   * @param array $build
   *   The items in the facet's render array being transformed.
   *
   * @return array
   *   The "items" parameter for theme_item_list().
   */
  function buildListItems($build) {
    $settings = $this->settings->settings;

    $attributes_init = array('class' => $this->getItemClasses());

    // Builds rows.
    $items = array();
    $counter = 0;
    foreach ($build as $value => $item) {
      // Reset attributes for each item.
      $attributes = $attributes_init;

      $row = array('class' => array());

      // Allow adding classes via altering.
      if (isset($item['#class'])) {
        $attributes['class'] = array_merge($attributes['class'], $item['#class']);
      }
      // Initializes variables passed to theme hook.
      $variables = array(
        'tc_counter' => $counter++,
        'text' => $item['#markup'],
        'path' => $item['#path'],
        'count' => $settings['display_count'] ? $item['#count'] : NULL,
        'options' => array(
          'attributes' => $attributes,
        ),
      );

      // Adds the facetapi-zero-results class to items that have no results.
      if (!$item['#count']) {
        $variables['options']['attributes']['class'][] = 'facetapi-zero-results';
      }
      // If count more than 0.
      else {
        // We need nofollow only for items with non zero results.
        if ($settings['nofollow']) {
          // Initializes links attributes, adds rel="nofollow" if configured.
          $attributes['rel'] = 'nofollow';
        }
        // Add an ID to identify this link.
        $variables['options']['attributes']['id'] = drupal_html_id('facetapi-link');
        $variables['options'] += array(
          'html' => $item['#html'],
          'query' => $item['#query'],
        );
      }

      // If the item is active, the li is active
      if ($item['#active']) {
        $row['class'][] = 'active';
      }

      // If the item has no children, it is a leaf.
      if (empty($item['#item_children'])) {
        $row['class'][] = 'leaf';
      }
      else {
        // If the item is active or the "show_expanded" setting is selected,
        // show this item as expanded so we see its children.
        if ($item['#active'] || !empty($settings['show_expanded'])) {
          $row['class'][] = 'expanded';
          $row['children'] = $this->buildListItems($item['#item_children']);
        }
        else {
          $row['class'][] = 'collapsed';
        }
      }

      // Gets theme hook, adds last minute classes.
      $class = ($item['#active']) ? 'facetapi-active' : 'facetapi-inactive';
      $variables['options']['attributes']['class'][] = $class;

      $variables['options']['attributes']['data-tctopicid'][] = $item['#indexed_value'];

      // Themes the link, adds row to items.
      $row['data'] = theme($item['#theme'], $variables);
      $items[] = $row;
    }

    return $items;
  }


}

