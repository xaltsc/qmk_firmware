/* Copyright 2024 Nicolas Raymond (@Helcoume)
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

// Sendstring lookup tables for Ergo-L layouts

#pragma once

#include "send_string.h"
#include "keymap_ergol.h"

// clang-format off

const uint8_t ascii_to_shift_lut[16] PROGMEM = {
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),

    KCLUT_ENTRY(0, 1, 1, 1, 1, 1, 1, 0),
    KCLUT_ENTRY(0, 0, 1, 1, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 1, 1, 0, 0, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 1, 1, 1, 1, 1),
    KCLUT_ENTRY(1, 1, 1, 0, 0, 0, 1, 1),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 1, 1, 1, 1, 0)
};

const uint8_t ascii_to_altgr_lut[16] PROGMEM = {
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),

    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(1, 1, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0),
    KCLUT_ENTRY(0, 0, 0, 0, 0, 0, 0, 0)
};

const uint8_t ascii_to_keycode_lut[128] PROGMEM = {
    // NUL   SOH      STX      ETX      EOT      ENQ      ACK      BEL
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // BS    TAB      LF       VT       FF       CR       SO       SI
    KC_BSPC, KC_TAB,  KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // DLE   DC1      DC2      DC3      DC4      NAK      SYN      ETB
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // CAN   EM       SUB      ESC      FS       GS       RS       US
    XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

    //       !        "        #        $        %        &        '
    KC_SPC,  EG_1DK,  EG_QUOT, EG_9,    EG_4,    EG_5,    EG_7,    EG_QUOT,
    // (     )        *        +        ,        -        .        /
    EG_S,    EG_E,    EG_8,    EG_EQL,  EG_COMM, EG_MINS, EG_DOT,  EG_SLSH,
    // 0     1        2        3        4        5        6        7
    EG_0,    EG_1,    EG_2,    EG_3,    EG_4,    EG_5,    EG_6,    EG_7,
    // 8     9        :        ;        <        =        >        ?
    EG_8,    EG_9,    EG_DOT,  EG_COMM, EG_LABK, EG_EQL,  EG_LABK, EG_MINS,
    // @     A        B        C        D        E        F        G
    EG_0,    EG_A,    EG_B,    EG_C,    EG_D,    EG_E,    EG_F,    EG_G,
    // H     I        J        K        L        M        N        O
    EG_H,    EG_I,    EG_J,    EG_K,    EG_L,    EG_M,    EG_N,    EG_O,
    // P     Q        R        S        T        U        V        W
    EG_P,    EG_Q,    EG_R,    EG_S,    EG_T,    EG_U,    EG_V,    EG_W,
    // X     Y        Z        [        \        ]        ^        _
    EG_X,    EG_Y,    EG_Z,    EG_LBRC, EG_BSLS, EG_RBRC, EG_6,    EG_SLSH,
    // `     a        b        c        d        e        f        g
    EG_GRV,  EG_A,    EG_B,    EG_C,    EG_D,    EG_E,    EG_F,    EG_G,
    // h     i        j        k        l        m        n        o
    EG_H,    EG_I,    EG_J,    EG_K,    EG_L,    EG_M,    EG_N,    EG_O,
    // p     q        r        s        t        u        v        w
    EG_P,    EG_Q,    EG_R,    EG_S,    EG_T,    EG_U,    EG_V,    EG_W,
    // x     y        z        {        |        }        ~        DEL
    EG_X,    EG_Y,    EG_Z,    EG_LBRC, EG_BSLS, EG_RBRC, EG_GRV,  KC_DEL
};
