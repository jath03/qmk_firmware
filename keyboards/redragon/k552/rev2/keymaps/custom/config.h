                            /* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0C45
#define PRODUCT_ID      0x5004
#define DEVICE_VER      0x0001

#define MANUFACTURER    Redragon
#define PRODUCT         K552
#define DESCRIPTION     K552 Kumara

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, B0, B1 }
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#ifdef DEBOUNCE
#   undef DEBOUNCE
#endif
#define DEBOUNCE 10

#define RGB_MATRIX_KEYPRESSES
// #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_SPLASH
#define RGB_MATRIX_STARTUP_HUE 120
// #define RGBLIGHT_ANIMATIONS

#define RGB_DI_PIN D5
#define RGBLED_NUM 8
// #define NOP_FUDGE .03
#define STM32_SYSCLK 48000000
#define RGBW
#define WS2812_TRST_US 100

#define COMBO_COUNT 0
// #define COMBO_TERM 1000

// #define WS2812_BYTE_ORDER 0
// #define WS2812_EXTERNAL_PULLUP
//
#define FORCE_NKRO
