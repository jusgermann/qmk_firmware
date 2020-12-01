#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Wulkan
#define PRODUCT         Handwired48Keys
#define DESCRIPTION     A compact ortholinear handwired keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B4, B5, B6, B7 } 
#define MATRIX_COL_PINS { B9, B15, B14, B13, A1, A2, B8, A0, B1, B0, B3, B2 }

#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define FORCE_NKRO
