<?php
/**
 * @file
 * devtrac_documentation_theme_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function devtrac_documentation_theme_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_help:plans
  $menu_links['main-menu_help:plans'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'plans',
    'router_path' => 'plans',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_help:plans',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_plans:plans
  $menu_links['main-menu_plans:plans'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'plans',
    'router_path' => 'plans',
    'link_title' => 'Plans',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_plans:plans',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Help');
  t('Plans');


  return $menu_links;
}
