<?php
/**
 * @file
 * water_for_the_environment_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function water_for_the_environment_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view paragraph content environmental_water_highlights'.
  $permissions['view paragraph content environmental_water_highlights'] = array(
    'name' => 'view paragraph content environmental_water_highlights',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content ew_embed'.
  $permissions['view paragraph content ew_embed'] = array(
    'name' => 'view paragraph content ew_embed',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content ew_media_embed'.
  $permissions['view paragraph content ew_media_embed'] = array(
    'name' => 'view paragraph content ew_media_embed',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content ew_optional_component'.
  $permissions['view paragraph content ew_optional_component'] = array(
    'name' => 'view paragraph content ew_optional_component',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content ew_text_image'.
  $permissions['view paragraph content ew_text_image'] = array(
    'name' => 'view paragraph content ew_text_image',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
