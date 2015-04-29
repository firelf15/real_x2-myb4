<?php
/**
 * @file
 * sticky_links.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sticky_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sticky_links_node_info() {
  $items = array(
    'sticky_links' => array(
      'name' => t('Sticky Links'),
      'base' => 'node_content',
      'description' => t('Links that persist on screen, for quick access to when, where, search, and social media icons.'),
      'has_title' => '1',
      'title_label' => t('Sticky Link Name'),
      'help' => '',
    ),
  );
  return $items;
}
