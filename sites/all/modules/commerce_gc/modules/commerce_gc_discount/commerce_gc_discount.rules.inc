<?php

/*
 * Implements hook_rules_action_info_alter().
 */
function commerce_gc_discount_rules_action_info_alter(&$actions) {
  // Override the fixed amount offer action
  if (isset($actions['commerce_discount_fixed_amount'])) {
    $actions['commerce_discount_fixed_amount']['callbacks']['execute'] = 'commerce_gc_discount_fixed_amount';
  }
}
