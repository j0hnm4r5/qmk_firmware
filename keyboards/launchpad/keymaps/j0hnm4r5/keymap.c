// Below layout is based upon /u/That-Canadian's planck layout
#include "launchpad.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define FUNCTION_KEYS 0

// Defines for task manager and such
#define BLANK KC_ESC

// Keycodes:
// https://docs.qmk.fm/#/faq_keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* FUNCTION_KEYS
    * ,-------------.
    * |   1  |  2   |  
    * |------+------|
    * |   3  |  4   | 
    * |------+------|
    * |   |  5  |   |
    * |------+------|
    * |  |   6  |   |
    * `-------------'
    */
    [0] = LAYOUT(
        KC_F1, KC_F2,
        KC_F3, KC_F4,
        KC_F5, BLANK,
        KC_F6, BLANK),

};

void matrix_init_user(void)
{
}