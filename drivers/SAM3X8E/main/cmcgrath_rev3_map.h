/*
  cmcgrath_rev3_map.h - driver code for Atmel SAM3X8E ARM processor, pin mappings compatible with cmcgrath rev3 g2core board

  Board design files (KiCad): https://github.com/cmcgrath5035/G2core-DUE-External-Interfaces

  Part of GrblHAL

  Copyright (c) 2019 Terje Io

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#define X2_STEP_PORT      A_STEP_PORT
#define X2_STEP_PIN       A_STEP_PIN
#define X2_DIRECTION_PORT A_DIRECTION_PORT
#define X2_DIRECTION_PIN  A_DIRECTION_PIN
#define X2_DISABLE_PORT   A_DISABLE_PORT
#define X2_DISABLE_PIN    A_DISABLE_PIN

//#define SQUARING_ENABLED - DO NOT ENABLE! work in progress!

 // Define step pulse output pins.
#define X_STEP_PORT         PIOB
#define X_STEP_PIN          25  // Due Digital Pin 2
#define X_STEP_BIT          (1<<X_STEP_PIN)
#define Y_STEP_PORT         PIOC
#define Y_STEP_PIN          28  // Due Digital Pin 3
#define Y_STEP_BIT          (1<<Y_STEP_PIN)
#define Z_STEP_PORT         PIOC
#define Z_STEP_PIN          26  // Due Digital Pin 4
#define Z_STEP_BIT          (1<<Z_STEP_PIN)
#define A_STEP_PORT         PIOA
#define A_STEP_PIN          7   // Due Digital Pin 31
#define A_STEP_BIT          (1<<A_STEP_PIN)

// Define step direction output pins.
#define X_DIRECTION_PORT    PIOC
#define X_DIRECTION_PIN     25  // Due Digital Pin 5
#define X_DIRECTION_BIT     (1<<X_DIRECTION_PIN)
#define Y_DIRECTION_PORT    PIOC
#define Y_DIRECTION_PIN     24  // Due Digital Pin 6
#define Y_DIRECTION_BIT     (1<<Y_DIRECTION_PIN)
#define Z_DIRECTION_PORT    PIOC
#define Z_DIRECTION_PIN     23  // Due Digital Pin 7
#define Z_DIRECTION_BIT     (1<<Z_DIRECTION_PIN)
#define A_DIRECTION_PORT    PIOD
#define A_DIRECTION_PIN     10  // Due Digital Pin 32
#define A_DIRECTION_BIT     (1<<A_DIRECTION_PIN)

// Define stepper driver enable/disable output pin(s).
#define X_DISABLE_PORT      PIOB
#define X_DISABLE_PIN       26  // Due Digital Pin 22
#define X_DISABLE_BIT       (1<<X_DISABLE_PIN)
#define Y_DISABLE_PORT      PIOD
#define Y_DISABLE_PIN       0   // Due Digital Pin 25
#define Y_DISABLE_BIT       (1<<Y_DISABLE_PIN)
#define Z_DISABLE_PORT      PIOD
#define Z_DISABLE_PIN       3   // Due Digital Pin 28
#define Z_DISABLE_BIT       (1<<Z_DISABLE_PIN)
#define A_DISABLE_PORT      PIOC
#define A_DISABLE_PIN       1   // Due Digital Pin 33
#define A_DISABLE_BIT       (1<<A_DISABLE_PIN)

// Define homing/hard limit switch min input pins.
#define X_LIMIT_PORT        PIOD
#define X_LIMIT_PIN         4   // Due Digital Pin 14
#define X_LIMIT_BIT         (1<<X_LIMIT_PIN)
#define Y_LIMIT_PORT        PIOA
#define Y_LIMIT_PIN         13  // Due Digital Pin 16
#define Y_LIMIT_BIT         (1<<Y_LIMIT_PIN)
#define Z_LIMIT_PORT        PIOA
#define Z_LIMIT_PIN         11  // Due Digital Pin 18
#define Z_LIMIT_BIT         (1<<Z_LIMIT_PIN)

#ifdef SQUARING_ENABLED
#define X2_LIMIT_PORT       PIOA
#define X2_LIMIT_PIN        11  // Due Digital Pin 18
#define X2_LIMIT_BIT        (1<<Z_LIMIT_PIN)
#endif

// Define homing/hard limit switch max input pins.
#define X_LIMIT_PORT_MAX    PIOD
#define X_LIMIT_PIN_MAX     5   // Due Digital Pin 15
#define X_LIMIT_BIT_MAX     (1<<X_LIMIT_PIN_MAX)
#define Y_LIMIT_PORT_MAX    PIOA
#define Y_LIMIT_PIN_MAX     12  // Due Digital Pin 17
#define Y_LIMIT_BIT_MAX     (1<<Y_LIMIT_PIN_MAX)
#define Z_LIMIT_PORT_MAX    PIOA
#define Z_LIMIT_PIN_MAX     10  // Due Digital Pin 19
#define Z_LIMIT_BIT_MAX     (1<<Z_LIMIT_PIN_MAX)

#ifdef SQUARING_ENABLED
#define X2_LIMIT_PORT_MAX   PIOA
#define X2_LIMIT_PIN_MAX    11  // Due Digital Pin 18
#define X2_LIMIT_BIT_MAX    (1<<Z_LIMIT_PIN)
#endif

// Define spindle enable and spindle direction output pins.
#define SPINDLE_ENABLE_PORT     PIOD
#define SPINDLE_ENABLE_PIN      8   // Due Digital Pin 12
#define SPINDLE_ENABLE_BIT      (1<<SPINDLE_ENABLE_PIN)

// Start of PWM & Stepper Enabled Spindle
#define SPINDLE_PWM_TIMER   (TC2->TC_CHANNEL[2])
#define SPINDLE_PWM_PORT    PIOD
#define SPINDLE_PWM_PIN     7   // Due Digital Pin 11 / TIOA8
#define SPINDLE_PWM_BIT     (1<<SPINDLE_PWM_PIN)
/*
// Define flood and mist coolant enable output pins.
#define COOLANT_FLOOD_PORT  PIOA
#define COOLANT_FLOOD_PIN   22
#define COOLANT_FLOOD_BIT   (1<<COOLANT_FLOOD_PIN)

// Define user-control CONTROLs (cycle start, reset, feed hold) input pins.
#define RESET_PORT          PIOA
#define RESET_PIN           16
#define RESET_BIT           (1<<RESET_PIN)

#define FEED_HOLD_PORT      PIOA
#define FEED_HOLD_PIN       24
#define FEED_HOLD_BIT       (1<<FEED_HOLD_PIN)

#define CYCLE_START_PORT    PIOA
#define CYCLE_START_PIN     23
#define CYCLE_START_BIT     (1<<CYCLE_START_PIN)
*/
// Define probe switch input pin.
#define PROBE_PORT          PIOA
#define PROBE_PIN           2   // DUE Analog Pin 7
#define PROBE_BIT           (1<<PROBE_PIN)

/**/
