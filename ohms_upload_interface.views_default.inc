<?php

/**
 * @file
 * ohms_upload_interface.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ohms_upload_interface_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ohms_xml_files_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OHMS XML Files List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OHMS XML Files List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_islandora_object_pid' => 'field_islandora_object_pid',
    'field_ohms_xml_file' => 'field_ohms_xml_file',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_islandora_object_pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ohms_xml_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Islandora Object PID */
  $handler->display->display_options['fields']['field_islandora_object_pid']['id'] = 'field_islandora_object_pid';
  $handler->display->display_options['fields']['field_islandora_object_pid']['table'] = 'field_data_field_islandora_object_pid';
  $handler->display->display_options['fields']['field_islandora_object_pid']['field'] = 'field_islandora_object_pid';
  /* Field: Content: OHMS XML File */
  $handler->display->display_options['fields']['field_ohms_xml_file']['id'] = 'field_ohms_xml_file';
  $handler->display->display_options['fields']['field_ohms_xml_file']['table'] = 'field_data_field_ohms_xml_file';
  $handler->display->display_options['fields']['field_ohms_xml_file']['field'] = 'field_ohms_xml_file';
  $handler->display->display_options['fields']['field_ohms_xml_file']['alter']['text'] = '[field_ohms_xml_file-display]';
  $handler->display->display_options['fields']['field_ohms_xml_file']['click_sort_column'] = 'fid';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['filename']['label'] = 'File Name';
  $handler->display->display_options['fields']['filename']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['text'] = 'https://sandbox.arcabc.ca/ohms-viewer/render.php?cachefile=[filename]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ohms_xml_file' => 'ohms_xml_file',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Islandora Object PID (field_islandora_object_pid) */
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['id'] = 'field_islandora_object_pid_value';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['table'] = 'field_data_field_islandora_object_pid';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['field'] = 'field_islandora_object_pid_value';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['group'] = 1;
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['expose']['operator_id'] = 'field_islandora_object_pid_value_op';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['expose']['label'] = 'Islandora Object PID';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['expose']['operator'] = 'field_islandora_object_pid_value_op';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['expose']['identifier'] = 'field_islandora_object_pid_value';
  $handler->display->display_options['filters']['field_islandora_object_pid_value']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ohms-xml-files-list';
  $export['ohms_xml_files_list'] = $view;

  return $export;
}
