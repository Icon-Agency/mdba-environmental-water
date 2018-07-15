<?php
/**
 * @file
 * water_for_the_environment_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function water_for_the_environment_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-environmental-water_deciding-where-water-goes:<front>.
  $menu_links['menu-environmental-water_deciding-where-water-goes:<front>'] = array(
    'menu_name' => 'menu-environmental-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Deciding where water goes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-environmental-water_deciding-where-water-goes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-environmental-water_delivering-water-for-the-environment:<front>.
  $menu_links['menu-environmental-water_delivering-water-for-the-environment:<front>'] = array(
    'menu_name' => 'menu-environmental-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Delivering water for the environment',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-environmental-water_delivering-water-for-the-environment:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: menu-environmental-water_progress-and-outcomes:<front>.
  $menu_links['menu-environmental-water_progress-and-outcomes:<front>'] = array(
    'menu_name' => 'menu-environmental-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Progress and outcomes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-environmental-water_progress-and-outcomes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: menu-environmental-water_why-we-need-water-for-the-environment:<front>.
  $menu_links['menu-environmental-water_why-we-need-water-for-the-environment:<front>'] = array(
    'menu_name' => 'menu-environmental-water',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Why we need water for the environment',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-environmental-water_why-we-need-water-for-the-environment:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Deciding where water goes');
  t('Delivering water for the environment');
  t('Progress and outcomes');
  t('Why we need water for the environment');

  return $menu_links;
}
