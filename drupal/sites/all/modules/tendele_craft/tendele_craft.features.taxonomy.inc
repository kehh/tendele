<?php
/**
 * @file
 * tendele_craft.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tendele_craft_taxonomy_default_vocabularies() {
  return array(
    'product_types' => array(
      'name' => 'Product Types',
      'machine_name' => 'product_types',
      'description' => 'Used to define the categories of product that we stock',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
