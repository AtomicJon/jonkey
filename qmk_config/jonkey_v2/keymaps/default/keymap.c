// Copyright 2024 Jon (@AtomicJon)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _LOWER,
    _RAISE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                                            ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                 KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                            ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_INS,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                            ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_HOME, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐                          ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_END,  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MPLY,                            KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_DEL,
    //└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐        ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                KC_LCTL, KC_PSCR, KC_PGDN, KC_LGUI, KC_LALT, KC_SPC,  LOWER,   RAISE,            KC_SPC,  RAISE,   KC_BSPC, KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
    //         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘        └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
    [_RAISE] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                                            ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                                KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                            ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______,  KC_UP,  _______, _______,                                              KC_P7,   KC_P8,   KC_P9,   KC_NUM,  _______, _______, KC_VOLU,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                            ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_CAPS, _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______,                                              KC_P4,   KC_P5,   KC_P6,   _______, _______, _______, KC_VOLD,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐                          ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, _______, _______, _______, _______,                            _______, KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, KC_SCRL,
    //└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐        ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, KC_P0,   KC_PDOT, KC_MPRV, KC_MNXT, KC_MPLY
    //         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘        └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  ),
  [_LOWER] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                                            ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                                KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                            ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, KC_PGUP, _______, _______,                                              KC_P7,   KC_P8,   KC_P9,   KC_NUM,  _______, _______, KC_VOLU,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                            ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_CAPS, _______, KC_LEFT, KC_PGDN, KC_RIGHT,_______,                                              KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______, KC_VOLD,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐                          ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, _______, _______, _______, _______,                            _______, KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, KC_SCRL,
    //└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐        ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘
                _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, KC_P0,   KC_PDOT, KC_MPRV, KC_MNXT, KC_MPLY
    //         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘        └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  )
};

void keyboard_post_init_user(void) {
  // Debug options
  debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_270;
    }

   return OLED_ROTATION_270;
}

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}


static void render_status(void) {
    // Host Keyboard Layer Status
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("?"), false);
    }
   oled_write_ln_P(PSTR("\n"), false);

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    oled_set_cursor(1,2);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_logo();  // Renders a static logo
        oled_scroll_left();  // Turns on scrolling
    }
    return false;
}
#endif
