<?php
/**
 * @file
 * devtrac_org_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_org_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac_org_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function devtrac_org_frontpage_node_info() {
  $items = array(
    'banner_images' => array(
      'name' => t('Banner Image'),
      'base' => 'node_content',
      'description' => t('For adding a new image on the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
