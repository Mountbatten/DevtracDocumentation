<?php
/**
 * @file
 * devtrac_org_frontpage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac_org_frontpage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_2';
  $strongarm->value = '-1';
  $export['nice_menus_depth_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_2';
  $strongarm->value = 'main-menu:0';
  $export['nice_menus_menu_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_respect_expand_2';
  $strongarm->value = '0';
  $export['nice_menus_respect_expand_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_2';
  $strongarm->value = 'down';
  $export['nice_menus_type_2'] = $strongarm;

  return $export;
}
