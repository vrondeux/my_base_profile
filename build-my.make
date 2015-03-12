api = 2
core = 7.x

; Include the definition for how to build Drupal core directly, including patches
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies
projects[my][type] = "profile"
projects[my][download][type] = "git"
projects[my][download][url] = "https://github.com/vrondeux/my_base_profile.git"
projects[my][download][branch] = "master"
