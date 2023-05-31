#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-----------------------.
 * |  Refs  | Defs  | Peek | 
 * |-------+-------+-------|
 * |   4   | 5 .   |   6   | 
 * |-------+-------+-------|
 * |  F11  |F10/SFT| 9/L1  | 7/0 = Dbl Tap 7 for 0  -  9/FN = Hold 9 for FN
 * `-----------------------' Press for F10, hold for shift (to do shift F11)
 *                           In Visual Studio, F10=Step over. F11=Step in. SFT+F11=Step out. 
 */                        
[0] = LAYOUT( \
  LSFT(KC_F12),  KC_F12,              LALT(KC_F12),    \
  KC_4,          KC_5,                  LGUI(KC_L),       \
  KC_F11,    MT(MOD_LSFT,KC_F10),     LT(1, LGUI(KC_L)) \
),

/* LAYER 1
 * ,-----------------------.
 * |  ESC  |   +   |   -   |
 * |-------+-------+-------|
 * |  BSPC |   *   |   /   |
 * |-------+-------+-------|
 * |  00   |   .   |       |
 * `-----------------------'
 */
[1] = LAYOUT( \
  KC_ESC,   KC_PLUS, KC_MINS, \
  KC_ENTER, KC_ASTR, KC_SLSH, \
  KC_0,     KC_DOT,  KC_TRNS  \
)

};
