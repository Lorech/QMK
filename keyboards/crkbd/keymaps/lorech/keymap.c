/**
 * Copyright 2019 @foostan, 2020 Drashna Jaelre, 2024-2025 Lauris Patriks Dedumets
 *
 * Licensed under the GNU General Public License, version 2 or later.
 * See <https://www.gnu.org/licenses/> for details.
 */

#include "lorech.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------.                  ,-----------------------------------------------.
        KC_TAB,   KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,                      KC_J,   KC_L,   KC_U,   KC_Y,KC_SCLN,KC_BSPC,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
        KC_ESC,   KC_A,   KC_R,   KC_S,   KC_T,   KC_G,                      KC_M,   KC_N,   KC_E,   KC_I,   KC_O,KC_QUOT,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       OS_LSFT,   KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,                      KC_K,   KC_H,KC_COMM, KC_DOT,KC_SLSH,KC_LCTL,
    //|-------+-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------+-------|
                                       KC_LGUI,  LOWER, KC_SPC,    KC_ENT,  UPPER,KC_RALT
                                    //`-----------------------'  `-----------------------'
    ),

    [_LOWER] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------.                  ,-----------------------------------------------.
        KC_GRV, KC_F12,  KC_F9,  KC_F8,  KC_F7,XXXXXXX,                   XXXXXXX,   KC_7,   KC_8,   KC_9, KC_INS, KC_DEL,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       _______, KC_F10,  KC_F3,  KC_F2,  KC_F1,KC_MINS,                   KC_PLUS,   KC_1,   KC_2,   KC_3,   KC_0,KC_BSLS,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       _______, KC_F11,  KC_F6,  KC_F5,  KC_F4,KC_UNDS,                    KC_EQL,   KC_4,   KC_5,   KC_6,XXXXXXX,_______,
    //|-------+-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------+-------|
                                       _______,_______,_______,   _______,_______,_______
                                    //`-----------------------'  `-----------------------'
    ),

    [_UPPER] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------.                  ,-----------------------------------------------.
       KC_TILD,KC_LBRC,XXXXXXX,KC_ASTR,KC_AMPR,KC_RBRC,                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, KC_INS, KC_DEL,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       _______,KC_LPRN,KC_HASH,  KC_AT,KC_EXLM,KC_RPRN,                   KC_CAPS,KC_LEFT,KC_DOWN,  KC_UP,KC_RGHT,KC_PIPE,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       _______,KC_LCBR,KC_CIRC,KC_PERC, KC_DLR,KC_RCBR,                   KC_SCRL,KC_HOME,KC_PGUP,KC_PGDN, KC_END,_______,
    //|-------+-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------+-------|
                                       _______,_______,_______,   _______,_______,_______
                                    //`-----------------------'  `-----------------------'
    ),

    [_ADJUST] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------.                  ,-----------------------------------------------.
       QK_BOOT,XXXXXXX,KC_MPRV,KC_MPLY,KC_MNXT,XXXXXXX,                   XXXXXXX,KC_VOLU,KC_VOLD,KC_MUTE,KC_VOLD,KC_VOLU,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       XXXXXXX,RM_TOGG,RM_SATU,RM_HUEU,RM_VALU,XXXXXXX,                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    //|-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
       XXXXXXX,RM_NEXT,RM_SATD,RM_HUED,RM_VALD,XXXXXXX,                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    //|-------+-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------+-------|
                                       _______,_______,_______,   _______,_______,_______
                                    //`-----------------------'  `-----------------------'
  )

};
// clang-format on
