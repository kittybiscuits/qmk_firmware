// Below layout is based upon /u/That-Canadian's planck layout
#include "launchpad.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0

#define _FUNC 15

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Defines for task manager and such
#define CALTESC LCTL(LALT(KC_ESC))
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------.
 * |   1  |  2   |  
 * |------+------|
 * |   3  |  4   | 
 * |------+------|
 * |   5  |  6   |
 * |------+------|
 * | FUNC |  8   |
 * `-------------'
 */
[_QWERTY] = LAYOUT( \
    KC_VOLD,   KC_VOLU, \
    KC_SLCK,   KC_PAUS, \
    KC_BTN1,   KC_BTN2, \
    MO(_FUNC), KC_BTN3\
),

/* Function
 * ,-------------.
 * |   Q  |CALDEL|  
 * |------+------|
 * |   A  |TSKMGR| 
 * |------+------|
 * |   Z  |  X   |
 * |------+------|
 * |      |  C   |
 * `-------------'
 */
[_FUNC] = LAYOUT( \
    KC_MPLY, KC_MSTP, \
    KC_MPRV, KC_MNXT, \
    KC_CALC, KC_MYCM, \
    _______, KC_MUTE \
)

};

void matrix_init_user(void) {
    
}
