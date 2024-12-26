/*
 * MIT License
 *
 * Copyright (c) 2022 Joey Castillo
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MOVEMENT_CONFIG_H_
#define MOVEMENT_CONFIG_H_

#include "movement_faces.h"

const watch_face_t watch_faces[] = {
    simple_clock_face,
    stock_stopwatch_face,
    countdown_face,
    alarm_face,
    probability_face,
    tally_face,
    sunrise_sunset_face,
    world_clock2_face,
    moon_phase_face,
    party_face,
    periodic_face,
    simple_calculator_face,
    festival_schedule_face,
    wyoscan_face,
// Start of Secondary Faces
    preferences_face,
    set_time_face,
    thermistor_logging_face,
    voltage_face,
    finetune_face,
    nanosec_face,
// Start of Teriary Faces
    wordle_face,
    endless_runner_face,
    higher_lower_game_face,
    lander_face,
    simon_face,
    tarot_face,
};

#define MOVEMENT_NUM_FACES (sizeof(watch_faces) / sizeof(watch_face_t))

/* Determines what face to go to from the first face on long press of the Mode button.
 * Also excludes these faces from the normal rotation.
 * In the default firmware, this lets you access temperature and battery voltage with a long press of Mode.
 * Some folks also like to use this to hide the preferences and time set faces from the normal rotation.
 * If you don't want any faces to be excluded, set this to 0 and a long Mode press will have no effect.
 */
#define MOVEMENT_TERIARY_FACE_INDEX (MOVEMENT_NUM_FACES - 6)
#define MOVEMENT_SECONDARY_FACE_INDEX (MOVEMENT_TERIARY_FACE_INDEX - 6) // or (0)

/* Custom hourly chime tune. Check movement_custom_signal_tunes.h for options. */
#define SIGNAL_TUNE_DEFAULT SIGNAL_TUNE_CUSTOM

/* Determines the intensity of the led colors
 * Set a hex value 0-7 with 0x0 being off and 0x7 being max intensity
 */
#define MOVEMENT_DEFAULT_GREEN_COLOR 0x7
#define MOVEMENT_DEFAULT_RED_COLOR 0x0

/* Set to true for 24h mode or false for 12h mode
 * 0: 12Hr
 * 1: 24Hr
 * 2: Toggle with Alarm Btn
 */
#define MOVEMENT_DEFAULT_24H_MODE 0

/* Enable or disable the sound on mode button press */
#define MOVEMENT_DEFAULT_BUTTON_SOUND false

/* Set the timeout before switching back to the main watch face
 * Valid values are:
 * 0: 60 seconds
 * 1: 2 minutes
 * 2: 5 minutes
 * 3: 30 minutes
 */
#define MOVEMENT_DEFAULT_TIMEOUT_INTERVAL 0

/* Set the timeout before switching to low energy mode
 * Valid values are:
 * 0: Never
 * 1: 10 mins
 * 2: 1 hour
 * 3: 2 hours
 * 4: 6 hours
 * 5: 12 hours
 * 6: 1 day
 * 7: 7 days
 */
#define MOVEMENT_DEFAULT_LOW_ENERGY_INTERVAL 1

/* Set the led duration
 * Valid values are:
 * 0: No LED
 * 1: 250 milliseconds
 * 2: 1 second
 * 3: 3 seconds
 */
#define MOVEMENT_DEFAULT_LED_DURATION 2

/* Set if the watch will chime every hour and ignorethe start and end chimes
 * Valid values are:
 * 0: Use the Start and End values
 * 1: Chime every hour
 */
#define MOVEMENT_DEFAULT_HOURLY_CHIME_ALWAYS 0

/* When hourly chiming should begin (MOVEMENT_DEFAULT_HOURLY_CHIME_ALWAYS must be 0)
 * Valid values are:
 * 0: 6am
 * 1: 7am
 * 2: 10am
 * 3: 12pm or sunrise in long and lat set;
 */
#define MOVEMENT_DEFAULT_HOURLY_CHIME_START 3

/* When hourly chiming should end (MOVEMENT_DEFAULT_HOURLY_CHIME_ALWAYS must be 0)
 * Valid values are:
 * 0: 8pm
 * 1: 9pm
 * 2: 10pm
 * 3: 12am or sunset in long and lat set;
 */
#define MOVEMENT_DEFAULT_HOURLY_CHIME_END 3

#define MOVEMENT_DEFAULT_LE_DEEP_SLEEP true

#define TEMPERATURE_ASSUME_WEARING 27 //C

/* The latitude and longitude used for the wearers location
 * Set signed values in 1/100ths of a degree
 * Set lat and long for Raleigh (3578, -7864)
 * Double JJ Ranch (4354, -8636)
 */
#define MOVEMENT_DEFAULT_LATITUDE 3578
#define MOVEMENT_DEFAULT_LONGITUDE -7864

/* The wearers birthdate
 * Valid values:
 * Year: 1 - 4095
 * Month: 1 - 12
 * Day: 1 - 31
 */
#define MOVEMENT_DEFAULT_BIRTHDATE_YEAR 1995
#define MOVEMENT_DEFAULT_BIRTHDATE_MONTH 6
#define MOVEMENT_DEFAULT_BIRTHDATE_DAY 14

#endif // MOVEMENT_CONFIG_H_
