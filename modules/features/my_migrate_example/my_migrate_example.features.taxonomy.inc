<?php
/**
 * @file
 * my_migrate_example.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function my_migrate_example_taxonomy_default_vocabularies() {
  return array(
    'my_migrate_example_types' => array(
      'name' => 'Trappist Types',
      'machine_name' => 'my_migrate_example_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
