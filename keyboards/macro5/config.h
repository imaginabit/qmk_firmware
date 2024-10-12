/*
* Copyright (c) 2024 Fernando (Your Name)
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including the rights to use, copy, modify,
* merge, publish, distribute, sublicense, and/or sell copies of the Software,
* and to permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/


#pragma once

// Define the keyboard name and settings
// #define DIODE_DIRECTION COL2ROW  // Diode direction
#define MATRIX_ROWS 1             // Number of rows
#define MATRIX_COLS 5             // Number of columns

// Define matrix pins
#define MATRIX_PINS \
    { GP3, \
      GP10, GP9,\
      GP11, GP12, GP13 }  // Adjust according to your setup

// Enable features
// #define BOOTMAGIC_ENABLE      // Enable Bootmagic
#define NKRO                  // Enable N-Key Rollover
