<?php
/**
 * @file
 * fiddlehead_slideshow_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fiddlehead_slideshow_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fiddlehead_slideshow_item_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fiddlehead_slideshow_item_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow_image.
  $styles['slideshow_image'] = array(
    'label' => 'Slideshow image (870px)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 870,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fiddlehead_slideshow_item_node_info() {
  $items = array(
    'slideshow_item' => array(
      'name' => t('Slideshow item'),
      'base' => 'node_content',
      'description' => t('Use <em>Slideshow items</em> for uploading image files and caption data that integrate with Bootstrap 2.x carousel.'),
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
