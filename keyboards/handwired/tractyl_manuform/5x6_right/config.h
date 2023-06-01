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


#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1200
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400
#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200
#define CHARYBDIS_DRAGSCROLL_DPI 200
#define CHARYBDIS_POINTER_ACCELERATION_ENABLE

#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN B1
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02

#define SERIAL_USART_FULL_DUPLEX 
#define SERIAL_USART_TX_PIN D3
#define SERIAL_USART_RX_PIN D0
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600
#define USE_SERIAL
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC


#define DYNAMIC_KEYMAP_LAYER_COUNT  16
#define LAYER_STATE_16BIT


/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


