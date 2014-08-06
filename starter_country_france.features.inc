<?php
/**
 * @file
 * starter_country_france.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_country_france_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
