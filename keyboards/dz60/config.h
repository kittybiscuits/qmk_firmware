#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0001
#define MANUFACTURER    KBDFans
#define PRODUCT         DZ60
#define DESCRIPTION     DZ60 Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B7, D4, B1, B0, B5, B4, D7, D6, B3, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN E2
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif

/*
 * This allows us to press Shift+Esc to get a tilde ("~") character. Unfortunately,
 * this breaks certain key combinations. The following #defines restore those key
 * combinations while still allowing Shift+Esc to send a tilde character.
 *
 * See: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_grave_esc.md
 *
 * GRAVE_ESC_ALT_OVERRIDE  - Allows Command+Option+Escape to work on Macs.
 * GRAVE_ESC_CTRL_OVERRIDE - Allows Control+Shift+Escape to work on Windows.
 * GRAVE_ESC_GUI_OVERRIDE  - Just in case. :)
 */
#define GRAVE_ESC_ALT_OVERRIDE     // Always send Escape if Alt is pressed
#define GRAVE_ESC_CTRL_OVERRIDE    // Always send Escape if Control is pressed
#define GRAVE_ESC_GUI_OVERRIDE     // Always send Escape if GUI is pressed
//#define GRAVE_ESC_SHIFT_OVERRIDE // Always send Escape if Shift is pressed

