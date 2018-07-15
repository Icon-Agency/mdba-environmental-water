<?php
/**
 * @file
 * water_for_the_environment_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function water_for_the_environment_features_node_info() {
  $items = array(
    'ew_pages' => array(
      'name' => t('Environmental Water Pages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
