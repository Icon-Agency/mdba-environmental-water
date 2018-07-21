<?php
/**
 * @file
 * water_for_the_environment_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function water_for_the_environment_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

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

/**
 * Implements hook_paragraphs_info().
 */
function water_for_the_environment_features_paragraphs_info() {
  $items = array(
    'environmental_water_highlights' => array(
      'name' => 'Environmental Water Highlights',
      'bundle' => 'environmental_water_highlights',
      'locked' => '1',
    ),
    'ew_embed' => array(
      'name' => 'Environmental Water Embed',
      'bundle' => 'ew_embed',
      'locked' => '1',
    ),
    'ew_media_embed' => array(
      'name' => 'Environmental Water Media Embed',
      'bundle' => 'ew_media_embed',
      'locked' => '1',
    ),
    'ew_optional_component' => array(
      'name' => 'Environmental Water Optional Compoent',
      'bundle' => 'ew_optional_component',
      'locked' => '1',
    ),
    'ew_text_image' => array(
      'name' => 'Environmental Water Text and Image',
      'bundle' => 'ew_text_image',
      'locked' => '1',
    ),
  );
  return $items;
}
