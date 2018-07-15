<?php
/**
 * @file
 * water_for_the_environment_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function water_for_the_environment_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__environmental-water-pages';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => 'Environmental Water Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'environmental-water-pages',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ew_pages' => 'ew_pages',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'mdba_theme',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'mdba_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row_two' => array(
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
      'row_three' => NULL,
      'row_four' => NULL,
      'row_five' => NULL,
      'row_six' => NULL,
      'row_seven' => NULL,
      'row_eight' => NULL,
      'row_nine' => NULL,
      'row_ten' => NULL,
      'row_one' => NULL,
    ),
    'row_one' => array(
      'style' => 'default',
    ),
    'row_two' => array(
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a9f25a57-fdf0-40e6-9979-deae13dc0792';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__environmental-water-pages';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-939ea8d1-d195-4161-a19a-d00934a70a2d';
  $pane->panel = 'row_one';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Banner image',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div template-name="banner" template-data="data/landing-section/banner.data">
  <div class="banner__wrapper">
    <div class="banner banner--md banner_dark-muted">
      <div class="banner__image" style="background-image: url(\'%node:field_hero_image_large\');"></div>
      <div class="container">
        <div class="grid-row">
          <div class="banner__text-content col--12 md-col--9 lg-col--7">
            <div class="breadcrumb">
              <a class="breadcrumb__ancestor" href="/"><i class="icon-home"></i> <span class="sr-only">Home</span></a>
              <a class="breadcrumb__ancestor breadcrumb__current" href="#">%node:title</a>
            </div>
            <h1 tabindex="-1" id="skippy-target">%node:title</h1>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array(
    'type' => 'immovable',
    'regions' => array(
      'row_one' => 'row_one',
    ),
  );
  $pane->uuid = '939ea8d1-d195-4161-a19a-d00934a70a2d';
  $display->content['new-939ea8d1-d195-4161-a19a-d00934a70a2d'] = $pane;
  $display->panels['row_one'][0] = 'new-939ea8d1-d195-4161-a19a-d00934a70a2d';
  $pane = new stdClass();
  $pane->pid = 'new-81d37541-13b1-4e23-bf3a-02c719762f19';
  $pane->panel = 'row_two';
  $pane->type = 'block';
  $pane->subtype = 'delta_blocks-messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array(
    'type' => 'immovable',
    'regions' => array(
      'row_two' => 'row_two',
    ),
  );
  $pane->uuid = '81d37541-13b1-4e23-bf3a-02c719762f19';
  $display->content['new-81d37541-13b1-4e23-bf3a-02c719762f19'] = $pane;
  $display->panels['row_two'][0] = 'new-81d37541-13b1-4e23-bf3a-02c719762f19';
  $pane = new stdClass();
  $pane->pid = 'new-4771fd8b-3272-49eb-8cdf-070131139d6a';
  $pane->panel = 'row_two';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-environmental-water';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-environmental-water:0',
    'title_link' => 0,
    'admin_title' => 'Environmental Water sub-navigation menu',
    'level' => '1',
    'follow' => 0,
    'depth' => '1',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-environmental-water',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4771fd8b-3272-49eb-8cdf-070131139d6a';
  $display->content['new-4771fd8b-3272-49eb-8cdf-070131139d6a'] = $pane;
  $display->panels['row_two'][1] = 'new-4771fd8b-3272-49eb-8cdf-070131139d6a';
  $pane = new stdClass();
  $pane->pid = 'new-0d004e33-5dea-437e-8de5-d8a24f1801a8';
  $pane->panel = 'row_two';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '<none>',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0d004e33-5dea-437e-8de5-d8a24f1801a8';
  $display->content['new-0d004e33-5dea-437e-8de5-d8a24f1801a8'] = $pane;
  $display->panels['row_two'][2] = 'new-0d004e33-5dea-437e-8de5-d8a24f1801a8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-0d004e33-5dea-437e-8de5-d8a24f1801a8';
  $handler->conf['display'] = $display;
  $export['node_view__environmental-water-pages'] = $handler;

  return $export;
}
