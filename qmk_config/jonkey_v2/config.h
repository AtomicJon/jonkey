#pragma once

/**
 * Technically some of this should be in JSON - setting here until I've fully confirmed
 */
// Switch this depending on the side being built/flashed
#define MASTER_RIGHT
// #define MASTER_LEFT

// Use on-board LEDs to indicate caps and num lock
#define LED_PIN_ON_STATE 0
#define LED_NUM_LOCK_PIN B0
#define LED_CAPS_LOCK_PIN D5
#define LOCKING_RESYNC_ENABLE

// Screen0.96
#ifdef OLED_ENABLE
# define OLED_DISPLAY_12 64
#endif

// Encoder
#define ENCODER_DIRECTION_FLIP

/**
 *Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
 */
#define DEBOUNCE 5
