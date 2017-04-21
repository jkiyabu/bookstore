<?php
/**
 * @file
 * locations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function locations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-locations-field_city'.
  $field_instances['node-locations-field_city'] = array(
    'bundle' => 'locations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'simple_gmap',
        'settings' => array(
          'apikey' => '',
          'iframe_height' => 200,
          'iframe_width' => 200,
          'include_link' => 0,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 0,
          'langcode' => 'en',
          'link_text' => 'View larger map',
          'map_type' => 'm',
          'static_scale' => 1,
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
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
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 1,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('City');

  return $field_instances;
}
