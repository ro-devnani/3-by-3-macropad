#pragma once

// Matrix configuration: 3 Rows, 4 Columns
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { 27, 26, 22 }
#define MATRIX_COL_PINS { 29, 28, 11, 20  }

// Diode Direction
#define DIODE_DIRECTION COL2ROW

// Enable rotary encoder feature
#define ENCODER_ENABLE = yes

#define ENCODER_A_PINS { 14 }
#define ENCODER_B_PINS { 15 }

// Optional: Define encoder resolution
#define ENCODER_RESOLUTION 4