<?php

/**
 * Implements hook_default_page_manager_pages().
 */
function tastybackend_standard_default_page_manager_pages() {

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'manage_content';
  $page->task = 'page';
  $page->admin_title = 'Manage content';
  $page->admin_description = 'A contextual administration administrative section for managing content.';
  $page->path = 'admin/manage/content';
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
    'title' => 'Manage content',
    'name' => 'navigation',
    'weight' => '1',
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
  $handler->name = 'page_manage_content_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'manage_content';
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
  $pages['manage_content'] = $page;
  
  // Manage categories context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'manage_taxonomy';
  $page->task = 'page';
  $page->admin_title = 'Manage Taxonomy';
  $page->admin_description = '';
  $page->path = 'admin/manage/categories';
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
    'title' => 'Categories',
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
  $handler->name = 'page_manage_taxonomy_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'manage_taxonomy';
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
  $pages['manage_taxonomy'] = $page;
  
  // Manage users context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'manage_users';
  $page->task = 'page';
  $page->admin_title = 'Manage Users';
  $page->admin_description = 'A context admin administration section to manage users.';
  $page->path = 'admin/manage/people';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer users',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Users',
    'name' => 'navigation',
    'weight' => '4',
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
  $handler->name = 'page_manage_users_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'manage_users';
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
  $pages['manage_users'] = $page;
  
  // Manage tags context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'manage_tags';
  $page->task = 'page';
  $page->admin_title = 'Manage Tags';
  $page->admin_description = 'A context admin administration section to manage terms in the Tags vocabulary.';
  $page->path = 'admin/manage/categories/tags';
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
    'title' => 'Tags',
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_manage_tags_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'manage_tags';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => 'tags',
    'context_admin_vocabulary_options' => 'list',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['manage_tags'] = $page;
  
  // Add tags context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_tags';
  $page->task = 'page';
  $page->admin_title = 'Add tags';
  $page->admin_description = 'A context admin administration page to add terms to the Tags vocabulary.';
  $page->path = 'admin/manage/categories/tags/add';
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
    'type' => 'action',
    'title' => 'Add term',
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_add_tags_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'add_tags';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => 'tags',
    'context_admin_vocabulary_options' => 'add',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_tags'] = $page;
  
  // Add user context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_user';
  $page->task = 'page';
  $page->admin_title = 'Add user';
  $page->admin_description = 'A context admin page for adding users.';
  $page->path = 'admin/manage/people/people/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add user',
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_add_user_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'add_user';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'user_create_menu',
    'context_admin_user_roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
    'context_admin_user_roles_alter' => 'limited',
    'context_admin_user_roles_limited' => array(
      4 => '4',
      5 => '5',
      2 => 0,
      3 => 0,
    ),
    'context_admin_user_status' => '1',
    'context_admin_user_status_alter' => 1,
    'context_admin_user_notify' => 1,
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_user'] = $page;
  
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
  
  // Create default context admin pages for all vocabularies.
  $vocabularies = taxonomy_vocabulary_get_names();
  foreach ($vocabularies as $vocabulary => $vocabulary_info) {
    $name = $vocabulary_info->name;
    $vid = $vocabulary_info->vid;
    tastybackend_standard_default_term_page($pages, $vocabulary, $name, $vid);
    tastybackend_standard_default_add_term_page($pages, $vocabulary, $name, $vid);
  }
  
  return $pages;
}

/**
 * Create the default context admin pages for each vocabulary.
 */
function tastybackend_standard_default_term_page(&$pages, $vocabulary, $name, $vid) {
  // Manage term context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'manage_' . $vocabulary;
  $page->task = 'page';
  $page->admin_title = 'Manage ' . $name;
  $page->admin_description = 'A context admin administration section to manage terms in the ' . $name . ' vocabulary.';
  $page->path = 'admin/manage/categories/' . drupal_html_class($vocabulary);
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit terms in ' . $vid,
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => $name,
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_manage_' . $vocabulary . '_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'manage_' . $vocabulary;
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => $vocabulary,
    'context_admin_vocabulary_options' => 'list',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['manage_' . $vocabulary] = $page;
}

/**
 * Create the default add term context admin pages for each vocabulary.
 */
function tastybackend_standard_default_add_term_page(&$pages, $vocabulary, $name, $vid) {
  // Add term context admin page.
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_' . $vocabulary;
  $page->task = 'page';
  $page->admin_title = 'Add ' . $name;
  $page->admin_description = 'A context admin administration page to add terms to the ' . $name . ' vocabulary.';
  $page->path = 'admin/manage/categories/' . drupal_html_class($vocabulary) . '/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit terms in ' . $vid,
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add term',
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_add_' . $vocabulary . '_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'add_' . $vocabulary;
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => $vocabulary,
    'context_admin_vocabulary_options' => 'add',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_' . $vocabulary] = $page;
}