// Copyright 2022 Framework Computer
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "factory.h"

const uint16_t PROGMEM top_row_combo[] = {TO(0), TO(1), TO(2), TO(3), COMBO_END};
combo_t key_combos[] = {
    [0] = COMBO(top_row_combo, QK_CLEAR_EEPROM),
};

enum custom_keycodes {
    SEND_DESK_1 = SAFE_RANGE,
    SEND_DESK_2,
    SEND_DESK_3,
    SEND_DESK_4,
    SEND_DESK_5,
    SEND_DESK_6,
    SEND_DESK_7,
    SEND_DESK_8,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(!(record->event.pressed)){
      return true;
    }

    switch (keycode) {
        case SEND_DESK_1:
            tap_code16(LSFT(LCTL(KC_F1)));
            tap_code16(LCTL(KC_F1));
            break;
        case SEND_DESK_2:
            tap_code16(LSFT(LCTL(KC_F2)));
            tap_code16(LCTL(KC_F2));
            break;
        case SEND_DESK_3:
            tap_code16(LSFT(LCTL(KC_F3)));
            tap_code16(LCTL(KC_F3));
            break;
        case SEND_DESK_4:
            tap_code16(LSFT(LCTL(KC_F4)));
            tap_code16(LCTL(KC_F4));
            break;
        case SEND_DESK_5:
            tap_code16(LSFT(LCTL(KC_F5)));
            tap_code16(LCTL(KC_F5));
            break;
        case SEND_DESK_6:
            tap_code16(LSFT(LCTL(KC_F6)));
            tap_code16(LCTL(KC_F6));
            break;
        case SEND_DESK_7:
            tap_code16(LSFT(LCTL(KC_F7)));
            tap_code16(LCTL(KC_F7));
            break;
        case SEND_DESK_8:
            tap_code16(LSFT(LCTL(KC_F8)));
            tap_code16(LCTL(KC_F8));
            break;
    }

    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     *         ┌────┬────┬────┬────┐
     *  4 keys │Esc │Calc│ =  │ <- │
     *         ├────┼────┼────┼────┤
     *  4 keys │ Num│ /  │ *  │ -  │
     *         ├────┼────┼────┼────┤
     *  3 keys │ 7  │ 8  │ 9  │ +  │
     *         ├────┼────┼────┼────┤
     *  4 keys │ 4  │ 5  │ 6  │ +  │
     *         ├────┼────┼────┼────┤
     *  3 keys │ 1  │ 2  │ 3  │Entr│
     *         ├────┼────┼────┼────┤
     *  3 keys │ 0  │ 0  │ .  │Entr│
     *         └────┴────┴────┴────┴
     * 21 total
     */
    [0] = LAYOUT(
        TO(0),  TO(1), TO(2),  TO(3),
        LCTL(KC_F1),  LCTL(KC_F2), LCTL(KC_F3), LCTL(KC_F4),
        LCTL(KC_F5),   LCTL(KC_F6),   LCTL(KC_F7),   LCTL(KC_F8),
        SEND_DESK_1,  SEND_DESK_2, SEND_DESK_3, SEND_DESK_4,
        SEND_DESK_5,  SEND_DESK_6, SEND_DESK_7, SEND_DESK_8,
        LALT(KC_F4), LALT(LSFT(KC_TAB)), LALT(KC_TAB), LGUI(KC_PAGE_UP)
    ),
    [1] = LAYOUT(
        TO(0),  TO(1), TO(2),  TO(3),
        LGUI(LSFT(LCTL(KC_B))), LGUI(LSFT(LCTL(KC_C))), LGUI(LSFT(LCTL(KC_U))), LGUI(LSFT(LCTL(KC_T))),
        LGUI(LSFT(LCTL(KC_O))), LGUI(LSFT(LCTL(KC_L))), LGUI(LSFT(LCTL(KC_S))), LALT(LSFT(LCTL(KC_3))),
        LGUI(LSFT(LCTL(KC_E))), LALT(LSFT(LCTL(KC_D))), LGUI(LSFT(LCTL(KC_M))), LGUI(LSFT(LCTL(KC_K))),
        LGUI(LSFT(KC_S)), LGUI(LCTL(LALT(KC_M))), LGUI(KC_R), LGUI(LALT(KC_R)),
        KC_P0,   KC_P0,   KC_PDOT, KC_PENT
    ),
    [2] = LAYOUT(
        TO(0),  TO(1), TO(21),  TO(3),
        LCTL(KC_F1),  LCTL(KC_F2), LCTL(KC_F3), LCTL(KC_F4),
        LCTL(KC_F5),   LCTL(KC_F6),   LCTL(KC_F7),   LCTL(KC_F8),
        SEND_DESK_1,  SEND_DESK_2, SEND_DESK_3, SEND_DESK_4,
        SEND_DESK_5,  SEND_DESK_6, SEND_DESK_7, SEND_DESK_8,
        KC_P0,   KC_P0,   KC_PDOT, KC_PENT
    ),
    [21] = LAYOUT(
        TO(0),  TO(1), TO(2),  TO(3),
        LCTL(KC_F1),  LCTL(KC_F2), LCTL(KC_F3), LCTL(KC_F4),
        LCTL(KC_F5),   LCTL(KC_F6),   LCTL(KC_F7),   LCTL(KC_F8),
        SEND_DESK_1,  SEND_DESK_2, SEND_DESK_3, SEND_DESK_4,
        SEND_DESK_5,  SEND_DESK_6, SEND_DESK_7, SEND_DESK_8,
        KC_P0,   KC_P0,   KC_PDOT, KC_PENT
    ),
    [3] = LAYOUT(
        TO(0),  TO(1), TO(2),  TO(3),
        LCTL(KC_F1),  LCTL(KC_F2), LCTL(KC_F3), LCTL(KC_F4),
        LCTL(KC_F5),   LCTL(KC_F6),   LCTL(KC_F7),   LCTL(KC_F8),
        SEND_DESK_1,  SEND_DESK_2, SEND_DESK_3, SEND_DESK_4,
        SEND_DESK_5,  SEND_DESK_6, SEND_DESK_7, SEND_DESK_8,
        KC_P0,   KC_P0,   KC_PDOT, KC_PENT
    )
};


void keyboard_post_init_user(void) {
    layer_on(0);
    rgb_matrix_mode(RGB_MATRIX_CUSTOM_layer_0_effect);
}

layer_state_t layer_state_set_user(layer_state_t state){
    switch (get_highest_layer(state)) {
        case 0:
            rgb_matrix_mode(RGB_MATRIX_CUSTOM_layer_0_effect);
            break;
        case 1:
            rgb_matrix_mode(RGB_MATRIX_CUSTOM_layer_1_effect);
            break;
        case 2:
            rgb_matrix_mode(RGB_MATRIX_CUSTOM_layer_2_effect);
            break;
        case 21:
            rgb_matrix_mode(RGB_MATRIX_CUSTOM_layer_21_effect);
            break;
        case 3:
            rgb_matrix_mode(RGB_MATRIX_CUSTOM_layer_3_effect);
            break;
    }
    return state;
}
