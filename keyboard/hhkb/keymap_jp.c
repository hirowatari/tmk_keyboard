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
    KEYMAP_JP(GRV ,1   ,2   ,3   ,4   ,5   ,6   ,7   ,8   ,9   ,0   ,MINS,EQL ,BSPC,BSPC, \
              TAB   ,Q   ,W   ,E   ,R   ,T   ,Y   ,U   ,I   ,O   ,P   ,LBRC,RBRC,/*ent*/  \
              LCTL   ,A   ,S   ,D   ,F   ,G   ,H   ,J   ,K   ,L   ,SCLN,QUOT,ENT ,ENT  ,  \
              LSFT    ,Z   ,X   ,C   ,V   ,B   ,N   ,M   ,COMM,DOT ,SLSH,RSFT,UP  ,RSFT,  \
              LCTL ,FN1 ,FN2 ,LALT,LGUI,SPC       ,FN0 ,BSPC,APP ,NO   , LEFT,DOWN,RGHT),

    /* Layer 1: Arrows, 6 cluster (){}[]  */
    KEYMAP_JP(ESC ,F1  ,F2  ,F3  ,F4  ,F5  ,F6  ,F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,TRNS,TRNS, \
              CAPS  ,TRNS,TRNS,TRNS,FN20,FN21,TRNS,HOME,UP  ,END ,TRNS,TRNS,TRNS,/*ent*/  \
              TRNS   ,TRNS,TRNS,ESC ,LBRC,RBRC,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS ,  \
              TRNS    ,BSLS,TRNS,TRNS,FN22,FN23,PGDN,DEL ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
              TRNS ,TRNS,TRNS,TRNS,TRNS,ENT       ,TRNS,TRNS,TRNS,TRNS , TRNS,TRNS,TRNS),

    /* Layer 2: media  */
    KEYMAP_JP(PWR ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS  ,TRNS,TRNS,TRNS,VOLU,TRNS,TRNS,HOME,PSCR,SLCK,PAUS,TRNS,TRNS,/*ent*/  \
              TRNS   ,TRNS,TRNS,TRNS,VOLD,TRNS,TRNS,MPLY,MSTP,MPRV,MNXT,TRNS,TRNS,TRNS ,  \
              TRNS    ,TRNS,TRNS,TRNS,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
              TRNS ,TRNS,TRNS,TRNS,TRNS,TRNS      ,TRNS,TRNS,TRNS,TRNS , TRNS,TRNS,TRNS),

    /* Layer 3: mouse  */
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS  ,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_U,MS_U,WH_D,WH_R,TRNS,TRNS,/*ent*/  \
              TRNS   ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_L,MS_D,MS_R,BTN1,TRNS,TRNS,TRNS ,  \
              TRNS    ,TRNS,TRNS,TRNS,TRNS,BTN3,BTN2,BTN1,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
              TRNS ,TRNS,TRNS,TRNS,TRNS,BTN1      ,TRNS,TRNS,TRNS,TRNS , TRNS,TRNS,TRNS)

};

/* next vol up and down don't seem to work right
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_TOGGLE(3),
    [20]  = ACTION_MODS_KEY(MOD_LSFT, KC_9),        // (
    [21]  = ACTION_MODS_KEY(MOD_LSFT, KC_0),        // )
    [22]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET), // {
    [23]  = ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET), // }

};