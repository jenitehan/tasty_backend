<?php

/**
 * Implements hook_default_page_manager_pages().
 */
function tasty_backend_standard_default_page_manager_pages() {
  
  // Manage comments
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'manage_comments';
  $page->task = 'page';
  $page->admin_title = 'Manage Comments';
  $page->admin_description = 'A context admin administration section to manage comments.';
  $page->path = 'admin/manage/comments';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Comments',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_manage_comments_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'manage_comments';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'admin_section',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['manage_comments'] = $page;
  
  return $pages;
}