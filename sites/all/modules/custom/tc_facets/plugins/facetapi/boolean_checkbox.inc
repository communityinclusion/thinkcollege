<?php

/**
 * @file
 *
 * Widget that renders facets as a checkbox - without a false/no selection.
 *
 */

/**
 * Extends FacetapiWidget to provide Boolean selection widget that only shows
 * a single True selection.
 */
class FacetapiWidgetBooleanCheckbox extends FacetapiWidget {

  /**
   * Implements FacetapiWidget::execute().
   */
  public function execute() {
    // Sets the key, captures the facet's render array.
    $element = &$this->build[$this->facet['field alias']];

    $element = array(
      '#theme' => 'item_list',
      '#items' => $this->buildListItems($element),
      '#attributes' => $this->build['#attributes'],
    );
  }

  /**
   * Recursive function that converts the render array into an array that can be
   * passed to theme_item_list().
   *
   * @param array $build
   *   The facet's render array.
   *
   * @return array
   *   The "items" parameter for theme_item_list().
   */
  public function buildListItems($build) {

    $items = array();

    /* Custom code for DOE Funded Facet */
    if ($this->key == "flag_doe_funded_content") {

      foreach ($build as $value => $item) {
        $row = array('class' => array());
        if ($item['#markup'] == "true") {
          $item['#markup'] = "DOE Funded";

          // Initializes variables passed to theme hook.
          $variables = array(
            'text' => $item['#markup'],
            'path' => $item['#path'],
            'count' => $item['#count'],
            'options' => array(
//              'attributes' => $item['#attributes'],
              'html' => $item['#html'],
              'query' => $item['#query'],
            ),
          );

          // Gets theme hook, adds last minute classes.
          $variables['options']['attributes']['class'][] = 'tc-facet-checkbox';
          $variables['options']['attributes']['class'][] = 'facetapi';
          if ($item['#active']) {
            $variables['active'] = TRUE;
            $variables['options']['attributes']['class'][] = 'facetapi-active';
          }
          else {
            $variables['active'] = FALSE;
            $variables['options']['attributes']['class'][] = 'facetapi-inactive';
          }

          // Themes the link, adds row to items.
          $hook = ($item['#active']) ? 'checkbox_badge_link_active' : 'checkbox_badge_link_inactive';
          $row['data'] = theme($hook, $variables);
          $items[] = $row;
        }
      }
    }
    /* Checkbox facet for NFST Report Facet */
    elseif ($this->key == "flag_nfst_report") {

      foreach ($build as $value => $item) {
        $row = array('class' => array());
        if ($item['#markup'] == "true") {
          $item['#markup'] = "NFST Report";

          // Initializes variables passed to theme hook.
          $variables = array(
            'text' => $item['#markup'],
            'path' => $item['#path'],
            'count' => $item['#count'],
            'options' => array(
              'html' => $item['#html'],
              'query' => $item['#query'],
            ),
          );

          // Gets theme hook, adds last minute classes.
          $variables['options']['attributes']['class'][] = 'nfst-report-checkbox';
          $variables['options']['attributes']['class'][] = 'facetapi';
          if ($item['#active']) {
            $variables['active'] = TRUE;
            $variables['options']['attributes']['class'][] = 'facetapi-active';
          }
          else {
            $variables['active'] = FALSE;
            $variables['options']['attributes']['class'][] = 'facetapi-inactive';
          }

          // Themes the link, adds row to items.
          $hook = ($item['#active']) ? 'checkbox_badge_link_active' : 'checkbox_badge_link_inactive';
          $row['data'] = theme($hook, $variables);
          $items[] = $row;
        }
      }

    }

    return $items;
  }

}
