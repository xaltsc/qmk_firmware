// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define WM_WS1  LGUI(EG_1) // Workspace 1
#define WM_WS2  LGUI(EG_2) // Workspace 2
#define WM_WS3  LGUI(EG_3) // Workspace 3
#define WM_WS4  LGUI(EG_4) // Workspace 4
#define WM_WS5  LGUI(EG_5) // Workspace 5
#define WM_WS6  LGUI(EG_6) // Workspace 6
#define WM_WS7  LGUI(EG_7) // Workspace 7
#define WM_WS8  LGUI(EG_8) // Workspace 8
#define WM_WS9  LGUI(EG_9) // Workspace 9
#define WM_WS0  LGUI(EG_0) // Workspace 0
#define WM_QUIT LGUI(EG_Q) // Quit compositor
#define WM_CLSW LGUI(KC_BSPC) // Close window
#define WM_TERM LGUI(KC_ENT) // Launch terminal
#define WM_LNCH LGUI(EG_E) // Launcher
#define WM_CPTR LGUI(EG_N) // Capture
#define WM_FULS LGUI(EG_F) // Fullscreen/Set window properties
#define WM_DISL LGUI(EG_LBRC) // Left display
#define WM_DISR LGUI(EG_RBRC) // Left display
#define WM_FOCL LGUI(KC_LEFT) // "Focus left",
#define WM_FOCD LGUI(KC_DOWN) // "Focus down",
#define WM_FOCU LGUI(KC_UP) // "Focus up",
#define WM_FOCR LGUI(KC_RGHT) // "Focus right",
#define WM_RESZ LGUI(EG_Z) // "Resize window",
#define WM_CNTR LGUI(EG_C) // "Center window",
#define WM_DISP LGUI(EG_B) // Manage displays
#define WM_INSZ LGUI(EG_PLUS) // Increase window size
#define WM_DCSZ LGUI(EG_MINS) // Decrease window size
#define WM_CONS LGUI(EG_DOT) // Consume window
#define WM_EXPL LGUI(EG_COMM) // Expel window

