<?php
/**
 * @file
 * Enables modules and site configuration for a Tasty Backend site installation.
 */

/**
 * Implements hook_install_tasks().
 */
function tasty_backend_install_tasks(&$install_state) {
  
  $tasks = array(
    'tasty_backend_settings_form' => array(
      'display_name' => st('Tasty Backend Options'),
      'type' => 'form',
    ),
  );
  
  return $tasks;
}

/**
 * Create a settings form to choose the Standard or Minimal Tasty Backend.
 */
function tasty_backend_settings_form() {
  $form = array();
  
  drupal_set_title('Tasty Backend Options');
  
  $form['standard_profile'] = array(
    '#type' => 'radios',
    '#title' => st('Choose Standard or Minimal Tasty Backend'),
    '#options' => array(
      'standard' => st('Standard'),
      'minimal' => st('Minimal'),
    ),
    '#default_value' => 'standard',
    '#description' => st('The Standard option will create content types, roles, and other options included in Drupal\'s Standard install. The minimal option will only add in minimal configuration.'),
    '#required' => TRUE,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );
  
  return $form;
}

/**
 * Submit handler for settings form.
 */
function tasty_backend_settings_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  
  if ($values['standard_profile'] == 'standard') {
    $module_list = array(
      'tasty_backend_standard',
    );
    module_enable($module_list);
    drupal_set_message('The Tasty Backend Standard module has been installed.');
  }
  else {
    drupal_set_message('The minimal option was selected.');
  }
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function tasty_backend_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}