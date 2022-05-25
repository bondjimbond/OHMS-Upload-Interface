<?php

/**
 * @file
 * ohms_upload_interface.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ohms_upload_interface_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ohms_xml_file-field_islandora_object_pid'.
  $field_instances['node-ohms_xml_file-field_islandora_object_pid'] = array(
    'bundle' => 'ohms_xml_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the PID of the Islandora object this file relates to. The PID will be in the format namespace:identifier (e.g. unbc:82 or islandora:1827).

Do not enter any text other than the PID.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_islandora_object_pid',
    'label' => 'Islandora Object PID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-ohms_xml_file-field_ohms_xml_file'.
  $field_instances['node-ohms_xml_file-field_ohms_xml_file'] = array(
    'bundle' => 'ohms_xml_file',
    'deleted' => 0,
    'description' => 'Upload an XML file created by the Oral History Metadata Syncrhonizer at https://ohms.uky.edu/. A user account is required.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ohms_xml_file',
    'label' => 'OHMS XML File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'ohms_metadata',
      'file_extensions' => 'xml',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter the PID of the Islandora object this file relates to. The PID will be in the format namespace:identifier (e.g. unbc:82 or islandora:1827).

Do not enter any text other than the PID.');
  t('Islandora Object PID');
  t('OHMS XML File');
  t('Upload an XML file created by the Oral History Metadata Syncrhonizer at https://ohms.uky.edu/. A user account is required.');

  return $field_instances;
}
