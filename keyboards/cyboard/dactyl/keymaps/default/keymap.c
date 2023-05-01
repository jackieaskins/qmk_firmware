/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H

#define LCTL_T_Z    LCTL_T(KC_Z)
#define RCTL_T_SLSH RCTL_T(KC_SLSH)
#define LGUI_T_QUOT LGUI_T(KC_QUOT)
#define LALT_T_LBRC LALT_T(KC_LBRC)
#define LT_1_GRV    LT(1, KC_GRV)
#define LT_2_SCLN   LT(2, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_singlearc_number_row(
        KC_EQL,    KC_1,     KC_2,    KC_3,    KC_4,   KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,    KC_0,        KC_MINS,
        KC_TAB,    KC_Q,     KC_W,    KC_E,    KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,        KC_BSLS,
        KC_LCTL,   KC_A,     KC_S,    KC_D,    KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,    LT_2_SCLN,   LGUI_T_QUOT,
        KC_LSFT,   LCTL_T_Z, KC_X,    KC_C,    KC_V,   KC_B,                      KC_N,    KC_M,   KC_COMM, KC_DOT,  RCTL_T_SLSH, KC_RSFT,
        LT_1_GRV,  KC_LGUI,  KC_LEFT, KC_RGHT, KC_SPC, KC_ESC, KC_MEH,   KC_HYPR, KC_BSPC, KC_ENT, KC_UP,   KC_DOWN, LALT_T_LBRC, KC_RBRC
    ),

    [1] = LAYOUT_singlearc_number_row(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______,                     _______, KC_P7, KC_P8, KC_P9,   _______, KC_F12,
        _______, _______, _______, _______, _______, _______,                     _______, KC_P4, KC_P5, KC_P6,   _______, _______,
        _______, _______, _______, _______, _______, _______,                     _______, KC_P1, KC_P2, KC_P3,   _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, KC_P0, KC_P0, KC_PDOT, _______, _______
    ),

    [2] = LAYOUT_singlearc_number_row(
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, QK_REBOOT, QK_BOOT,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______,   _______,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______,   KC_MPLY,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, KC_MPRV, KC_MNXT,   _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU,   _______
    ),
};

// LAYOUT_singlearc_number_row(
//     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______
// ),
