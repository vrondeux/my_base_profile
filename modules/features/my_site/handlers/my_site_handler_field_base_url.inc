<?php

/**
 * @file
 * Definition of my_site_handler_field_base_url.
 */

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */
class my_site_handler_field_base_url extends views_handler_field {
  function query() {
    // do nothing -- to override the parent query.
  }

  function render($values) {
    global $base_url;
    return $base_url;
  }
}
