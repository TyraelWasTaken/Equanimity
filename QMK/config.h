// Copyright 2024 StormCat Designs (@StormCat Designs)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MANUFACTURER "StormCat Designs"
#define PRODUCT "Equanimity"
#define MATRIX_ROWS 5
#define MATRIX_COLS 16
#define MATRIX_ROW_PINS {B11, B10, A1, A3, A4}
#define MATRIX_COL_PINS {B2, B1, B0, A7, A6, A5, A2, B12, B9, B8, B7, B6, B5, B4, B3, A15}
#define DIODE_DIRECTION COL2ROW 
#define ENCODERS_PAD_A { A9 }
#define ENCODERS_PAD_B { A10 }
#define ENCODER_RESOLUTION 1