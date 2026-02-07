/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define ___ KC_TRNS

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ansi_84(
	KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_INS, KC_DEL,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_PGUP,
	KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, MO(5), KC_NO, KC_NO, KC_PGDN,
	MO(1), KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, MO(4), KC_ENT, KC_HOME,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END,
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(3), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
),

[1] = LAYOUT_ansi_84(
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, KC_1, KC_2, KC_3, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, KC_4, KC_5, KC_6, KC_0, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, KC_7, KC_8, KC_9, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___
),

[2] = LAYOUT_ansi_84(
	KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_INS, KC_DEL,
	KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_PGUP,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
	KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_HOME,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END,
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(3), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
),

[3] = LAYOUT_ansi_84(
	___, KC_BRID, KC_BRIU, ___, ___, ___, ___, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, ___, ___, KC_NUM,
	___, LNK_BLE1, LNK_BLE2, LNK_BLE3, LNK_RF, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, SIDE_VAI, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, BAT_SHOW, ___,
	___, SIDE_SPD, SIDE_VAD, SIDE_SPI, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, RGB_HUD, RGB_HUI, ___, RGB_VAI, ___,
	___, ___, ___, ___, ___, ___, ___, RGB_SPD, RGB_VAD, RGB_SPI
),

[4] = LAYOUT_ansi_84(
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, KC_ASTR, KC_LBRC, KC_RBRC, KC_MINS, KC_UNDS, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, KC_LPRN, KC_RPRN, KC_QUOTE, KC_DQT, KC_EQL, ___, ___, ___, ___, ___, ___, ___, ___,
	___, KC_LCBR, KC_RCBR, KC_HASH, KC_PIPE, KC_AMPR, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___
),

[5] = LAYOUT_ansi_84(
    ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, KC_PLUS, KC_GRAVE, KC_TILD, KC_BSLS, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, KC_EXLM, KC_AT, KC_DLR, KC_PERC, KC_CIRC, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___, ___,
	___, ___, ___, ___, ___, ___, ___, ___, ___, ___
),

};
// clang-format on

#undef ___

void housekeeping_task_user(void) {
    static uint32_t hue_refresh_time = 0;
    if (timer_elapsed32(hue_refresh_time) > 1000) {
        hue_refresh_time = timer_read32();
        rgb_matrix_increase_hue_noeeprom();
    }
}
