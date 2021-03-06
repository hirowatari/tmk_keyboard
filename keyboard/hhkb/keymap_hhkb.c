/*
 * HHKB Layout
 */
#include "keymap_common.h"

/**
    KEYMAP(ESC,    F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,  INS,  DEL, \
           TRNS , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,      TRNS, \
           TRNS  , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, \
           TRNS   , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS       , TRNS, \
                 TRNS, TRNS,                TRNS,                    TRNS, TRNS),

*/

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Del| BS|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|FN1|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |   |     |         Space         |     |Men|
     *       `-------------------------------------------'
     */
    KEYMAP(GRV,     1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL,  DEL, BSPC, \
           TAB  ,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC,      BSLS, \
           RCTL  ,    A,    S,    D,    F,    G,    H,    J,    K,    L,  FN1, QUOT,            ENT, \
           LSFT   ,    Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,     RSFT     ,  FN1, \
                 LGUI, LALT,          SPC,                            ENT,  APP),


    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(ESC,    F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, TRNS, \
           CAPS , TRNS, MINS,  FN5,  FN6, TRNS, PGUP, HOME,   UP,  END, TRNS, TRNS, TRNS,      TRNS, \
           TRNS  , TRNS,  FN8,  FN9, FN10, TRNS, PGDN, LEFT, DOWN, RGHT,  FN1, TRNS,           TRNS, \
           TRNS   , TRNS, TRNS, LBRC, RBRC, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS       , TRNS, \
                 TRNS, TRNS,                 ENT,                    TRNS, TRNS),

};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TAP_TOGGLE(1),
    [11] = ACTION_LAYER_TAP_TOGGLE(2),
    [12] = ACTION_LAYER_TAP_TOGGLE(3),
    [13] = ACTION_LAYER_TAP_KEY(1, KC_BSLASH),
    [14] = ACTION_LAYER_TAP_KEY(2, KC_TAB),
    [15] = ACTION_LAYER_TAP_KEY(3, KC_ENTER),
    [16] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),
    [17] = ACTION_LAYER_TAP_KEY(5, KC_SCOLON),
    [18] = ACTION_LAYER_TAP_KEY(6, KC_QUOTE),
    [19] = ACTION_LAYER_TAP_KEY(7, KC_SLASH),
    [20] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPACE),
    [21] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPACE),
    [22] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_QUOTE),
    [23] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENTER),
    [24] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [25] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),
    [26] = ACTION_MODS_ONESHOT(MOD_LCTL),
    [27] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [28] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPACE),
    [29] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [30] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRAVE),
    [31] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_BSLASH),
};
#else
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_DEFAULT_LAYER_SET(0),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_SCLN),
//    [2]  = ,
//    [2]  = ACTION_LAYER_MOMENTARY(3), // unused
//    [3]  = ACTION_LAYER_MOMENTARY(4), // unused
//    [4]  = ACTION_LAYER_MOMENTARY(5), // unused
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET), // {
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET), // }
//    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_EQUAL),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_MINUS), // underscore
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_9), // (
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_0), // )

};
#endif
