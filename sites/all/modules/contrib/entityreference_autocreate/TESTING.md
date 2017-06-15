# Testing Entityreference Autocreate

This package comes with a stand-alone entityreference_autocomplete)test module.
This sets up a content type and entityreference field with settings designed
to exercise this module.

# Using simpletest and Drupal UI

* Enable simpletest module
* visit /admin/config/development/testing
* Expand 'Entity Reference' and select 'Entity Reference Autocreate'


## Using drush

You need to provide the URI of your local test site.

    drush en -y simpletest
    drush6 --uri=http://dev.drupal7.dd:8083/ test-run  EntityReferenceAutocreateTestCase

