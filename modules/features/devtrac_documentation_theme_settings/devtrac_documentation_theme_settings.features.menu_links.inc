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

  // Exported menu link: main-menu_demo:demo
  $menu_links['main-menu_demo:demo'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'demo',
    'router_path' => 'demo',
    'link_title' => 'Demo',
    'options' => array(
      'identifier' => 'main-menu_demo:demo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
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
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
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
  // Exported menu link: main-menu_tour:quick-tour
  $menu_links['main-menu_tour:quick-tour'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'quick-tour',
    'router_path' => 'quick-tour',
    'link_title' => 'Tour',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tour:quick-tour',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Demo');
  t('Help');
  t('Home');
  t('Plans');
  t('Tour');


  return $menu_links;
}
