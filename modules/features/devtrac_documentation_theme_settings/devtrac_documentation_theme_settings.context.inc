<?php
/**
 * @file
 * devtrac_documentation_theme_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac_documentation_theme_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'books';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['books'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'Context that places blocks and delta layout on the front page.';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'slideshow_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that places blocks and delta layout on the front page.');
  t('Page');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'one_column_layout_pages';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'demo_page' => 'demo_page',
        'demo_page:page' => 'demo_page:page',
        'nodequeue_2:page' => 'nodequeue_2:page',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'slideshow_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['one_column_layout_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quick_tour';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'quick_tour' => 'quick_tour',
        'quick_tour:page' => 'quick_tour:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-quick_tour-block_1' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-quick_tour-block_2' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-quick_tour-block_3' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-quick_tour-block_4' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_4',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'slideshow_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['quick_tour'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = '';
  $context->tag = 'Site wide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'pane-credit_footer_block' => array(
          'module' => 'pane',
          'delta' => 'credit_footer_block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'pane-social_links_footer' => array(
          'module' => 'pane',
          'delta' => 'social_links_footer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site wide');
  $export['site_wide'] = $context;

  return $export;
}
