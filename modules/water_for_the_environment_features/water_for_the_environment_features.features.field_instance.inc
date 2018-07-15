<?php
/**
 * @file
 * water_for_the_environment_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function water_for_the_environment_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ew_pages-body'.
  $field_instances['node-ew_pages-body'] = array(
    'bundle' => 'ew_pages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-ew_pages-field_ew_banner_image'.
  $field_instances['node-ew_pages-field_ew_banner_image'] = array(
    'bundle' => 'ew_pages',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ew_banner_image',
    'label' => 'Banner image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'environmental_water/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ew_pages-field_ew_optional_components'.
  $field_instances['node-ew_pages-field_ew_optional_components'] = array(
    'bundle' => 'ew_pages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ew_optional_components',
    'label' => 'Optional components',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'accordion_topic' => -1,
        'annual_report_2016_page' => -1,
        'ew_optional_component' => 'ew_optional_component',
        'publication_groups' => -1,
        'publication_uploads' => -1,
        'report_section' => -1,
        'summary' => -1,
      ),
      'bundle_weights' => array(
        'accordion_topic' => 2,
        'annual_report_2016_page' => 3,
        'ew_optional_component' => 4,
        'publication_groups' => 5,
        'publication_uploads' => 6,
        'report_section' => 7,
        'summary' => 8,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Optional component',
      'title_multiple' => 'Optional components',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner image');
  t('Body');
  t('Optional components');

  return $field_instances;
}
