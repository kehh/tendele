<?php
/**
 * @file
 * tendele_craft.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tendele_craft_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tendele_craft_node_info() {
  $items = array(
    'article_basic' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use the article content type for news / blog entries'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_basic' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use pages for static content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter as many details as possible.'),
    ),
  );
  return $items;
}
