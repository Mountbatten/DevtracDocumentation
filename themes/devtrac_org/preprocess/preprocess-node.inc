<?php
function devtrac_org_alpha_preprocess_node(&$variables) {
    if ($variables['node']->type == 'article') {
      if ($variables['view_mode'] = 'teaser') {
        $variables['attributes_array']['class'][] = 'equal-height-element';
      }
    }
}