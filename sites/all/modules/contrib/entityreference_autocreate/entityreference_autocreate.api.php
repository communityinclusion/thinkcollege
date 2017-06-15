<?php
/**
 * @file
 * Hooks provided by the entityreference_autocreate module.
 */

/**
 * Allows modules to interact with the entity that is being created.
 *
 * Using this function it's also possible to support your own entities.
 *
 * @param object $entity
 *   The entity object. This could also be NULL if the entity type is not known.
 * @param array $field_info
 *   The field info of the entityreference field.
 * @param string $title
 *   The title / name of the new entity that needs te be created.
 */
function hook_entityreference_autocreate_new_entity_alter(&$entity, $field_info, $title) {
  // Make automatic entries owned by anonymous.
  $entity->uid = 0;
}

/**
 * Allows modules to interact with the entity that was just created.
 *
 * You can use this to send notifications per example.
 *
 * @param string $target_id
 *   The entity id.
 * @param string $entity_type
 *   The entity type.
 */
function hook_entityreference_autocreate_new_saved_entity_alter($target_id, $entity_type) {
  // Load the entity.
  if ($entity_type == 'user') {
    $user = user_load($target_id);
    _user_mail_notify('register_admin_created', $user);
  }
}
