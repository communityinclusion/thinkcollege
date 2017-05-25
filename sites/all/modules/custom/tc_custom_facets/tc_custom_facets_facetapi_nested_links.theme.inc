<?php

/**
 * @file
 * Theme functions for the Facet API module with bootstrap extensions.
 */

/**
 * Returns HTML for an inactive facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_bootstrap_count() functions for information
 *   about these variables.
 * @return string
 * @throws \Exception
 *
 * @ingroup themeable
 */
function theme_facetapi_nested_links_inactive($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_bootstrap_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Adds count to link if one was passed.
  if (isset($variables['count'])) {
    $variables['text'] .= ' ' . theme('facetapi_bootstrap_count', $variables);
  }

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
  $variables['options']['attributes']['class'][] = "btn btn-default";
  return theme_bootstrap_link($variables);
}



/**
 * Returns HTML for an active facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', and 'options'. See
 *   the l() function for information about these variables.
 * @return string
 * @throws \Exception
 *
 * @see l()
 *
 * @ingroup themeable
 */
function theme_facetapi_nested_links_active($variables) {

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $link_text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Theme function variables fro accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => TRUE,
  );

  // Builds link, passes through t() which gives us the ability to change the
  // position of the widget on a per-language basis.
  $replacements = array(
    '!facetapi_bootstrap_deactivate_widget' => theme('facetapi_bootstrap_deactivate_widget', $variables),
    '!facetapi_bootstrap_accessible_markup' => theme('facetapi_bootstrap_accessible_markup', $accessible_vars),
  );
  $variables['text'] = t('!facetapi_bootstrap_deactivate_widget !facetapi_bootstrap_accessible_markup ' . $variables['text'], $replacements);
  $variables['options']['html'] = TRUE;
  $variables['options']['attributes']['class'][] = "btn btn-primary";
  return theme_bootstrap_link($variables);
}


/**
 * Returns HTML for the active facet item's count as a Bootstrap Badge.
 *
 * @param $variables
 *   An associative array containing:
 *   - count: The item's facet count.
 * @return string
 *
 * @ingroup themeable
 */
function theme_facetapi_bootstrap_count($variables) {
  return '<span class="badge">' . (int) $variables['count'] . '</span>';
}

/**
 * Returns HTML for the deactivation widget as a bootstrap 'X' icon.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', and 'options'. See
 *   the l() function for information about these variables.
 * @return string
 *
 * @see l()
 * @see theme_facetapi_link_active()
 *
 * @ingroup themable
 */
function theme_facetapi_bootstrap_deactivate_widget($variables) {
  return '<i class="fa fa-times"></i>';
}


/**
 * Returns HTML that adds accessible markup to facet links.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The text of the facet link.
 *   - active: Whether the item is active or not.
 * @return string
 *
 * @ingroup themeable
 *
 * @see http://drupal.org/node/1316580
 */
function theme_facetapi_bootstrap_accessible_markup($variables) {
  $vars = array('@text' => $variables['text']);
  $text = ($variables['active']) ? t('Remove @text filter', $vars) : t('Apply @text filter', $vars);
  // Add spaces before and after the text, since other content may be displayed
  // inline with this and we don't want the words to run together. However, the
  // spaces must be inside the <span> so as not to disrupt the layout for
  // sighted users.
  return '<span class="element-invisible"> ' . $text . ' </span>';
}


function theme_bootstrap_link($variables) {
  $x= '<a href="'
    . check_plain(url($variables['path'], $variables['options']))
    . '"'
    . drupal_attributes($variables['options']['attributes'])
    . '>'
    . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text']))
    . '</a>';
  return $x;
}


