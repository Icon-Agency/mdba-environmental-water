<?php
/**
 * @file
 * water_for_the_environment_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function water_for_the_environment_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_left_inner|paragraphs_item|ew_text_image|default';
  $field_group->group_name = 'group_column_left_inner';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_text_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_column_left';
  $field_group->data = array(
    'label' => 'Column left inner',
    'weight' => '9',
    'children' => array(
      0 => 'field_ew_pb_title',
      1 => 'field_ew_pb_text',
      2 => 'field_ew_pb_more_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column left inner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-left-inner',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_left_inner|paragraphs_item|ew_text_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_left|paragraphs_item|ew_media_embed|default';
  $field_group->group_name = 'group_column_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_media_embed';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column left',
    'weight' => '6',
    'children' => array(
      0 => 'field_ew_pb_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-left col col--12 sm-col--6 md-col--6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_left|paragraphs_item|ew_media_embed|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_left|paragraphs_item|ew_optional_component|default';
  $field_group->group_name = 'group_column_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_optional_component';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column left',
    'weight' => '0',
    'children' => array(
      0 => 'field_ew_pb_icon_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-left col col--12 sm-col--4 md-col--4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_left|paragraphs_item|ew_optional_component|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_left|paragraphs_item|ew_text_image|default';
  $field_group->group_name = 'group_column_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_text_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column left',
    'weight' => '6',
    'children' => array(
      0 => 'group_column_left_inner',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-left col col--12 sm-col--6 md-col--6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_left|paragraphs_item|ew_text_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_right|paragraphs_item|ew_media_embed|default';
  $field_group->group_name = 'group_column_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_media_embed';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column right',
    'weight' => '9',
    'children' => array(
      0 => 'field_ew_pb_text',
      1 => 'field_ew_pb_more_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-right col col--12 sm-col--6 md-col--6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_right|paragraphs_item|ew_media_embed|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_right|paragraphs_item|ew_optional_component|default';
  $field_group->group_name = 'group_column_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_optional_component';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column right',
    'weight' => '2',
    'children' => array(
      0 => 'field_ew_pb_title',
      1 => 'field_ew_pb_text',
      2 => 'field_ew_pb_attachments',
      3 => 'field_ew_pb_more_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-right col col--12 sm-col--8 md-col--8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_right|paragraphs_item|ew_optional_component|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_right|paragraphs_item|ew_text_image|default';
  $field_group->group_name = 'group_column_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'ew_text_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column right',
    'weight' => '6',
    'children' => array(
      0 => 'field_ew_pb_feature_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-right col col--12 sm-col--6 md-col--6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_right|paragraphs_item|ew_text_image|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column left');
  t('Column left inner');
  t('Column right');

  return $field_groups;
}
