<?php

/**
 * @file
 * ohms_upload_interface.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ohms_upload_interface_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ohms_upload_interface_node_info() {
  $items = array(
    'ohms_xml_file' => array(
      'name' => t('OHMS XML File'),
      'base' => 'node_content',
      'description' => t('XML files for the OHMS Viewer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
