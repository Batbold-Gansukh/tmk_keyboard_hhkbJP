/*
 * HHKB JP Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    /* Layer 0: Default Layer */
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, GRV,BSPC, \
              TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,   LBRC,RBRC, \
              LGUI,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,BSLS,ENT, \
              LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,RO,  UP,  FN7, \
              FN0, ZKHK,LCTL,LALT,FN1,     SPC,      FN2,KANA,RALT,FN0, LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,TRNS,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,F21,F22,F23,F24,TRNS, TRNS, \
              TRNS,TRNS,TRNS,FN3,FN4,TRNS,LEFT,DOWN,UP,RIGHT,DEL,TRNS,TRNS,ENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,TRNS,KP_9,F14,TRNS,TRNS,TRNS,LANG1,LANG2,KP_3,KP_4,TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,F13,F16,F19,F17,F18,TRNS,TRNS,ENT, \
              TRNS,KP_0,TRNS,TRNS,TRNS,KP_5,KP_6,KP_7, KP_8,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    KEYMAP_JP(PWR, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  7,  8,  9,  TRNS, TRNS, TRNS, TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,4,5,6,TRNS,TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,0,1,2,3,TRNS,TRNS,TRNS,ENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    KEYMAP_JP(PWR, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LBRACKET,RBRACKET,TRNS,TRNS,TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,KP_ASTERISK,KP_PLUS,MINUS,SLASH,TRNS,TRNS,TRNS,ENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN5, FN6,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC, \
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, \
              LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT, \
              LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RO,  UP,  FN7, \
              FN0, ZKHK,LCTL,LALT,FN1,     SPC,      FN2,KANA,RALT,FN0, LEFT,DOWN,RGHT),

};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_MOMENTARY(3),
    [3] = ACTION_LAYER_MOMENTARY(4),
    [4] = ACTION_LAYER_MOMENTARY(5),
    [5] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [7] = ACTION_LAYER_TOGGLE(6)
};
