#Tasty Backend Installation Profile Readme

#### What are Drupal Installation Profiles?
>Installation profiles provide site features and functions for a specific type of site as a single download containing Drupal core, contributed modules, themes, and pre-defined configuration. They make it possible to quickly set up a complex, use-specific site in fewer steps than if installing and configuring elements individually. 
--[Using Installation Profiles - Drupal.org](https://www.drupal.org/node/306267)

#### What does the Tasty Backend Installation Profile do?
Focuses on providing clients and content managers with a simplified, easy to use, delicious and overall useful experience on their site. 

It's born of the frustration I had when originally developing with Drupal back in the day, and thinking "Wowsa, this is powerful!" Then, "Oh crap, I need to hide most of this so my tech-phobic clients can just do what they need to do."

* Creates 2 usertypes(Content admin and User Admin) and sets initial permissions for each automatically.
* Selects the easy to use admin theme - Seven and enables the handy admin toolbar.
* Creates a bunch of useful new views that focus on essential info
* Puts pretty much everything into vertical tabs. 
* and so much more! 

###Installation

1. **Create a new Drupal installation**, give it it's own database, and edit the settings.php , but **do not** run the installation script yet.

1. **Download the Tasty Backend Installation Profile** zip and place the entire expanded directory into the profiles directory located inside your new Drupal root directory.

1. **The Tasty Backend Installation Profile requires modules.**

    * **Core modules:** *block, color, contextual, help, image, list, menu, number, options, path, taxonomy, dblog, search, field_ui, file, rdf.*

    * **Contributed modules**: *admin_menu, admin_menu_toolbar, admin_menu_source, ctools, page_manager, context_admin, entity, field_group, menu_admin_per_menu, override_node_options, role_delegation, user_settings_access, view_unpublished, views, views_ui, views_bulk_operations.*

1. **Run yoursite/install.php and choose 'Tasty Backend'** under desired profile.

/kermitarms

###About Tasty Backend
Tasty Backend Modules and Base Install Profiles were created by @jenitehan using the usability improvements spoken about in her DrupalCon talks 'Building a Tasty Backend'

You can view one of these at [Building a Tasty Backend](https://amsterdam2014.drupal.org/session/building-tasty-backend.html) from DrupalCon Amsterdam '14

https://github.com/jenitehan

Jeni Tehan . Delicious Creative . Brighton, UK .
http://www.deliciouscreative.com
