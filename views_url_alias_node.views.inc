<?php
/**
 * @file
 * Provide views data and handler information for views_url_alias.module.
 */

/**
 * Implementation of hook_views_data().
 *
 * Based on code from node_views_data() in view/modules/node.views.inc.
 */
function views_url_alias_node_views_data() {
  // ----------------------------------------------------------------
  // views_url_alias_node -- basic table information.

  // Define table group
  $data['views_url_alias_node']['table']['group'] = 'Node';

  // Explain how this table joins to others.
  $data['views_url_alias_node']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // ----------------------------------------------------------------
  // node table -- fields

  // dst
  $data['views_url_alias_node']['dst'] = array(
    'title' => t('URL alias'),
    'help' => t('The alias for a node.'),
    'field' => array(
      'handler' => 'views_handler_field_node',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  return $data;
}
