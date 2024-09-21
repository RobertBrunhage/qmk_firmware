#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


enum dactyl_layers {
  _MAC_QWERTY,
  _MAC_SYMBOLS,
};

#define MAC_SYMBOLS  MO(_MAC_SYMBOLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAC_QWERTY] = LAYOUT_5x6_5(
        KC_PLUS,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SLSH,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_AMPR, KC_BSLS,
                 KC_TRNS,  KC_LSFT, KC_ENT,  KC_SPC,  KC_LCTL,                  KC_RCTL, MO(MAC_SYMBOLS),   KC_BSPC, KC_RSFT, KC_TRNS,
                                             KC_LALT, KC_LGUI,                  KC_RGUI, KC_RALT
    ),

    [_MAC_SYMBOLS] = LAYOUT_5x6_5(
        LALT(KC_RBRC), KC_F1,      KC_F2,         KC_F3,     KC_F4,     KC_F5,                    KC_F6,    KC_F7,      KC_F8,      KC_F9,     KC_F10,  KC_F11,
        KC_TRNS,       LALT(KC_2), LALT(KC_4),    LSA(KC_8), LSA(KC_9), KC_CIRC,                  KC_RPRN,  KC_MINS,    KC_UP,      KC_PIPE,   KC_RCBR, KC_F12,
        KC_TRNS,       KC_ASTR,    KC_LPRN,       KC_GT,     KC_LT,     LALT(KC_7),               KC_EXLM,  KC_LEFT,    KC_DOWN,    KC_RGHT,   KC_HASH, KC_TRNS,
        KC_TRNS,       KC_NUBS,    LSFT(KC_NUBS), KC_TRNS,   KC_TRNS,   KC_TRNS,                  KC_PERC,  LALT(KC_8), LALT(KC_9), LSA(KC_7), KC_UNDS, KC_AT,
                                                  QK_BOOT,   KC_TRNS,   KC_TRNS,                  KC_TRNS,  KC_TRNS,    KC_TRNS,
                                                             KC_TRNS,   KC_TRNS,                  KC_TRNS,  KC_TRNS
    )
};
