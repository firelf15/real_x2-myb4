<?php
/**
 * @file
 * sticky_links.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sticky_links_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sticky_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sticky Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sticky Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'no-bullet right inline-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link To */
  $handler->display->display_options['fields']['field_link_to']['id'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to']['table'] = 'field_data_field_link_to';
  $handler->display->display_options['fields']['field_link_to']['field'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to']['label'] = '';
  $handler->display->display_options['fields']['field_link_to']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to']['element_label_colon'] = FALSE;
  /* Field: Content: Link Icon */
  $handler->display->display_options['fields']['field_link_icon']['id'] = 'field_link_icon';
  $handler->display->display_options['fields']['field_link_icon']['table'] = 'field_data_field_link_icon';
  $handler->display->display_options['fields']['field_link_icon']['field'] = 'field_link_icon';
  $handler->display->display_options['fields']['field_link_icon']['label'] = '';
  $handler->display->display_options['fields']['field_link_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_icon']['alter']['path'] = '[field_link_to]';
  $handler->display->display_options['fields']['field_link_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_link_icon']['type'] = 'image';
  $handler->display->display_options['fields']['field_link_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Filter criterion: Content: Published */
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
    'sticky_links' => 'sticky_links',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['sticky_links'] = array(
    t('Master'),
    t('Sticky Links'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['sticky_links'] = $view;

  return $export;
}
