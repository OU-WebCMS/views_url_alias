<?php
/**
 * @file
 * Allows views admins to refresh views URL aliases.
 */


/**
 * Admin settings form.
 *
 * @ingroup forms
 */
function views_url_alias_node_admin() {
  $form = array();
  $form['reset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Rebuild Views URL alias node table'),
    '#description' => t('This should only be needed if URL aliases have been updated outside the node or URL alias edit form.'),
  );
  $form['reset']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Rebuild table'),
  );
  return $form;
}

function views_url_alias_node_admin_submit() {
  views_url_alias_node_rebuild();
}
