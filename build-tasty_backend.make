api = 2
core = 7.x
projects[drupal][version] = 7.32
; Download the install profile and recursively build all its dependencies:
projects[tasty_backend][type] = "profile"
projects[tasty_backend][download][type] = "git"
projects[tasty_backend][download][url] = "https://github.com/jenitehan/tasty_backend.git"