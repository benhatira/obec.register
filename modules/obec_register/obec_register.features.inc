<?php

/**
 * Implementation of hook_node_info().
 */
function obec_register_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ชื่อ - นามสกุล'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'school' => array(
      'name' => t('School'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ชื่อโรงเรียน'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'test' => array(
      'name' => t('test'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
