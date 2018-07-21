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
  $field_group->identifier = 'group_column_left|paragraphs_item|environmental_water_highlights|default';
  $field_group->group_name = 'group_column_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'environmental_water_highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_wrapper';
  $field_group->data = array(
    'label' => 'Column left',
    'weight' => '2',
    'children' => array(
      0 => 'field_ew_pb_feature_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-left col col--12 sm-col--4 md-col--3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_left|paragraphs_item|environmental_water_highlights|default'] = $field_group;

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
  $field_group->identifier = 'group_column_right|paragraphs_item|environmental_water_highlights|default';
  $field_group->group_name = 'group_column_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'environmental_water_highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_wrapper';
  $field_group->data = array(
    'label' => 'Column right',
    'weight' => '3',
    'children' => array(
      0 => 'field_ew_pb_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-right col col--12 sm-col--8 md-col--9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_column_right|paragraphs_item|environmental_water_highlights|default'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|ew_pages|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ew_pages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_ew_optional_components',
      2 => 'field_hero_image_large',
      3 => 'field_ew_subtitle',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|node|ew_pages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_wrapper|paragraphs_item|environmental_water_highlights|default';
  $field_group->group_name = 'group_row_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'environmental_water_highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_column_left',
      1 => 'group_column_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_wrapper|paragraphs_item|environmental_water_highlights|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column left');
  t('Column left inner');
  t('Column right');
  t('Content');
  t('Row wrapper');

  return $field_groups;
}
