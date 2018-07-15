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

  // Exported permission: 'view paragraph content ew_optional_component'.
  $permissions['view paragraph content ew_optional_component'] = array(
    'name' => 'view paragraph content ew_optional_component',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
