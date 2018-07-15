<?php
/**
 * @file
 * water_for_the_environment_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function water_for_the_environment_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-environmental-water.
  $menus['menu-environmental-water'] = array(
    'menu_name' => 'menu-environmental-water',
    'title' => 'Environmental Water',
    'description' => 'Sub-navigation menu on Environmental Water pages',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Environmental Water');
  t('Sub-navigation menu on Environmental Water pages');

  return $menus;
}
