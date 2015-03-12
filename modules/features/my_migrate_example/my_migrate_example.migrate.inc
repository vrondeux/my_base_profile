<?php

/**
 * Implements hook_migrate_api().
 */
function my_migrate_example_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'my_example' => array(
        'title' => t('MY Example Migrations'),
      ),
    ),
    'migrations' => array(
      'MYBrewery' => array(
        'class_name' => 'MYBreweryMigration',
        'group_name' => 'my_example',
      ),
      'MYTrappist' => array(
        'class_name' => 'MYTrappistMigration',
        'group_name' => 'my_example',
        'dependencies' => array(
          'MYBrewery',
        ),
      ),
    ),
  );
  return $api;
}
