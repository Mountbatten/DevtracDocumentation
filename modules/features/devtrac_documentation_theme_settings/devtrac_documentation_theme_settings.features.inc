<?php
/**
 * @file
 * devtrac_documentation_theme_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_documentation_theme_settings_ctools_plugin_api($module = NULL, $api = NULL) {
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
function devtrac_documentation_theme_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac_documentation_theme_settings_image_default_styles() {
  $styles = array();

  // Exported image style: break-point-1120px.
  $styles['break-point-1120px'] = array(
    'name' => 'break-point-1120px',
    'label' => 'break-point-1120px',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1120,
          'height' => 960,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-1440px.
  $styles['break-point-1440px'] = array(
    'name' => 'break-point-1440px',
    'label' => 'break-point-1440px',
    'effects' => array(
      3 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1440,
          'height' => 1280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-1600px.
  $styles['break-point-1600px'] = array(
    'name' => 'break-point-1600px',
    'label' => 'break-point-1600px',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1600,
          'height' => 1440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-320px.
  $styles['break-point-320px'] = array(
    'name' => 'break-point-320px',
    'label' => 'break-point-320px',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 320,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-480px.
  $styles['break-point-480px'] = array(
    'name' => 'break-point-480px',
    'label' => 'break-point-480px',
    'effects' => array(
      6 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-640px.
  $styles['break-point-640px'] = array(
    'name' => 'break-point-640px',
    'label' => 'break-point-640px',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 640,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-800px.
  $styles['break-point-800px'] = array(
    'name' => 'break-point-800px',
    'label' => 'break-point-800px',
    'effects' => array(
      8 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 800,
          'height' => 640,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: break-point-960px.
  $styles['break-point-960px'] = array(
    'name' => 'break-point-960px',
    'label' => 'break-point-960px',
    'effects' => array(
      9 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 960,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: quick_tour_images.
  $styles['quick_tour_images'] = array(
    'name' => 'quick_tour_images',
    'label' => 'quick tour images',
    'effects' => array(
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_style.
  $styles['slideshow_style'] = array(
    'name' => 'slideshow_style',
    'label' => 'slideshow',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1800,
          'height' => 1105,
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
function devtrac_documentation_theme_settings_node_info() {
  $items = array(
    'banner_images' => array(
      'name' => t('Banner Image'),
      'base' => 'node_content',
      'description' => t('For adding a new image on the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'packages' => array(
      'name' => t('Package'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Package Name'),
      'help' => '',
    ),
    'quick_tour' => array(
      'name' => t('Quick Tour'),
      'base' => 'node_content',
      'description' => t('For adding new quick tour items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'user_level' => array(
      'name' => t('User level'),
      'base' => 'node_content',
      'description' => t('Add a user level for logging in to the main demo website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function devtrac_documentation_theme_settings_weight_features_default_settings() {
  $settings = array();

  $settings['banner_images'] = array(
    'enabled' => 0,
    'range' => 10,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['packages'] = array(
    'enabled' => 1,
    'range' => 10,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['quick_tour'] = array(
    'enabled' => 0,
    'range' => 50,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['slideshow'] = array(
    'enabled' => 1,
    'range' => 10,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['user_level'] = array(
    'enabled' => 1,
    'range' => 10,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
