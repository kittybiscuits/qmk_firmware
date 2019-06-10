// Below layout is based upon /u/That-Canadian's planck layout
#include "launchpad.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _OBS1 0
#define _OBS2 1
#define _MISC1 2
#define _MISC2 3
#define _MISC3 4

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Defines for task manager and such
#define CALTESC LCTL(LALT(KC_ESC))
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
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

[_OBS1] = LAYOUT( \
    KC_F13    ,   KC_F14, \
    KC_F15    ,   KC_F16, \
    KC_F17    ,   KC_F18, \
    MO(_OBS2) ,   MO(_MISC1) \
),

[_OBS2] = LAYOUT( \
    KC_F19    , KC_F20, \
    KC_F21    , KC_F22, \
    KC_F23    , KC_F24, \
    _______   , MO(_MISC2) \
),

[_MISC1] = LAYOUT( \
    KC_2      , _______, \
    _______   , _______, \
    _______   , _______, \
    MO(_MISC3), _______ \
),

[_MISC2] = LAYOUT( \
    KC_3      , _______, \
    _______   , _______, \
    _______   , _______, \
    _______   , _______ \
),

[_MISC3] = LAYOUT( \
    KC_4      , _______, \
    _______   , _______, \
    _______   , _______, \
    _______   , _______ \
)

};

void matrix_init_user(void) {

}
