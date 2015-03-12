# MY Make
**Drupal makefiles and profile from Marzee Labs to kick-start Drupal development**

[![Build Status](https://travis-ci.org/marzeelabs/my.png?branch=master)](https://travis-ci.org/marzeelabs/my)

## Usage

### Drush make and profile install

Clone the repository to get started. Make sure you are logged  in to Github and clone from git@, if not drush make will not work.

Build a Marzee Labs ready to be installed.

	drush make build-my.make

### Using Phing to automate build tasks

[Phing](http://www.phing.info) can be used to automate build tasks. Use [MY Box](), our Phing boilerplate to kick-start your project.

### Topical makefiles

Makefiles in topics like i18n, geo, search and commerce are also provided in `extensions/`

You can build out e.g. the i18n makefiles into an existing Drupal installation like this

	drush make -v --no-core ../my/extensions/my_i18n.make .
	
You can use the .profile stubs to see which modules can be enabled and added to your profile info file.

### Extending the profile

Currently, Drupal 7 core does not allow to inherit a profile, but [this patch](https://drupal.org/node/2067229) makes this possible and thus building profiles that depend on each other much easier.

When you build from this profile, Drupal 7 core is automatically patched, and you can create a new profile and add the following line to `yourprofile.info`

	base = my

Modules and libraries installed in the MY profile will then be automatically installed in your profile.

## Credits

Developed by [Marzee Labs](http://marzeelabs.org), [@marzeelabs](http://twitter.com/marzeelabs)
