<?php
/**
 * @file
 * Metatag integration for the Android app link tag.
 */

/**
 * Implements hook_metatag_info().
 */
function metatag_android_metatag_info() {
  $info['groups']['android'] = array(
    'label' => t('Android App'),
    'description' => t('Meta tags for android app deep link'),
    'form' => array(
      '#weight' => 60,
    ),
  );

  $info['tags']['alternate'] = array(
    'label' => t('Android App'),
    'description' => t('Your android app deep link, include android-app://'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'android',
  );
  return $info;
}
