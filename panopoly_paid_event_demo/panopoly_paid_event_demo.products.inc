<?php

/**
 * @file
 * panopoly_paid_event_demo.products.inc
 */

function panopoly_paid_event_demo_products() {
    $export = array();

    $export[] = (object) array(
        'sku' => 'panopoly-paid-event-demo-0',
        'title' => 'Paid Event Demo Product',
        'data' => FALSE,
        'type' => 'panopoly_paid_event',
        'commerce_price' => array (
            LANGUAGE_NONE => array (
                0 => array (
                    'amount' => '1000',
                    'currency_code' => 'USD',
                    'data' => array ('components' => array ())
                )
            )
        ),
        'field_registration' => array (
            LANGUAGE_NONE => array (
                0 => array (
                    'registration_type' => 'paid_event'
                )
            )
        )
    );

    return $export;
}