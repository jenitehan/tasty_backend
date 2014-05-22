api = 2
core = 7.x
projects[drupal][version] = 7.28
; Download the install profile and recursively build all its dependencies:
projects[tastybackend_standard][type] = "profile"
projects[tastybackend_standard][download][type] = "git"
projects[tastybackend_standard][download][url] = "https://github.com/jenitehan/tastybackend_standard.git"