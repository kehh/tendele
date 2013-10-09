<?php
/**
 * @file
 * tendele_craft.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tendele_craft_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Wood',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    'vocabulary_machine_name' => 'product_types',
  );
  $terms[] = array(
    'name' => 'Salad Spoons',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '2948da87-48ba-481f-9510-66d73ae0290c',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Wood Bowls',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '2bdf62e3-35ec-4516-8b88-0189836d0373',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Cards / Paper / Books',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 15,
    'uuid' => '2c96b629-9d71-4b2e-a21b-1e5bd8eddfc0',
    'vocabulary_machine_name' => 'product_types',
  );
  $terms[] = array(
    'name' => 'Matamba',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '3f384de4-c7fc-4675-935b-4604d8c4cd4b',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Baskets',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '57071fba-fe00-4262-aef5-b1867f55130d',
    'vocabulary_machine_name' => 'product_types',
  );
  $terms[] = array(
    'name' => 'Jewellery',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 16,
    'uuid' => '5c69683e-0f3a-4f06-b253-5858973f9025',
    'vocabulary_machine_name' => 'product_types',
  );
  $terms[] = array(
    'name' => 'Jennie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '66725bf5-569e-483c-a804-9a95197a301f',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Binga',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7c10c42a-8da2-4e5f-95d1-e94ae69babf4',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '57071fba-fe00-4262-aef5-b1867f55130d',
    ),
  );
  $terms[] = array(
    'name' => 'Wire Craft',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '7ddda84a-ce05-49e5-b7c6-7d747bde2413',
    'vocabulary_machine_name' => 'product_types',
  );
  $terms[] = array(
    'name' => 'Recycled',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 14,
    'uuid' => 'a1a4f5a7-875d-40bc-8a9c-f037ac228ea5',
    'vocabulary_machine_name' => 'product_types',
  );
  $terms[] = array(
    'name' => 'Painted Wood',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => 'b3f5c315-4197-403d-98d3-d618b85f93e1',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Phillimon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => 'b793892a-3d04-48c8-bf42-d28008018b93',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Tonga Stools',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'b7dbdc1c-26c9-425b-b896-5d033fc5d955',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Lupane',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'c17e359e-f7ad-406e-b3b4-6867364216a7',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '57071fba-fe00-4262-aef5-b1867f55130d',
    ),
  );
  $terms[] = array(
    'name' => 'Wellington',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'cb6a3c21-4d16-44d1-b263-abdd1e0f2f5b',
    'vocabulary_machine_name' => 'product_types',
    'parent' => array(
      0 => '0730a49f-7e39-45b2-9955-a58ee8b53766',
    ),
  );
  $terms[] = array(
    'name' => 'Textiles',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 17,
    'uuid' => 'd82f8a03-54af-4105-b574-0a25e213f4d7',
    'vocabulary_machine_name' => 'product_types',
  );
  return $terms;
}
