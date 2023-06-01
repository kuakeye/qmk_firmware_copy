/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

// WS2812 RGB LED strip input and number of LEDs
#define RGBLED_NUM      20
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT \
    { 10, 10 }

// #define AUDIO_PIN       C6

// #define EE_HANDS
// #define USE_SERIAL

/* PMW33XX Settings */
#define PMW33XX_CS_PIN B1
#define PMW33XX_CS_PIN_RIGHT B1
#define CONSOLE_ENABLE

// /* spi config for eeprom and pmw3360 sensor */
#define SPI_DRIVER                           SPID2
#define SPI_SCK_PIN                          B3
#define SPI_SCK_PAL_MODE                     5
#define SPI_MOSI_PIN                         B2
#define SPI_MOSI_PAL_MODE                    5
#define SPI_MISO_PIN                         B6
#define SPI_MISO_PAL_MODE                    5
#define POINTING_DEVICE_COMBINED
