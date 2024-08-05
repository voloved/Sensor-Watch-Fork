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

#include <stdlib.h>
#include <string.h>
#include "preferences_face.h"
#include "watch.h"

#define PREFERENCES_FACE_NUM_PREFERENCES (10)
const char preferences_face_titles[PREFERENCES_FACE_NUM_PREFERENCES][11] = {
    "BT  Beep  ",   // Buttons: should they beep?
    "CL        ",   // Clock: 12 or 24 hour
    "TO        ",   // Timeout: how long before we snap back to the clock face?
    "LE        ",   // Low Energy mode: how long before it engages?
    "LEds      ",   // Low Energy deep sleep
    "CHSt      ",   // Hourly Chime Start
    "CHEd      ",   // Hourly Chime End
    "LT        ",   // Light: duration
#ifdef WATCH_IS_BLUE_BOARD
    "LT   blu  ",   // Light: blue component (for watches with blue LED)
#else
    "LT   grn  ",   // Light: green component
#endif
    "LT   red  "    // Light: red component
};

void preferences_face_setup(movement_settings_t *settings, uint8_t watch_face_index, void ** context_ptr) {
    (void) settings;
    (void) watch_face_index;
    if (*context_ptr == NULL) {
        *context_ptr = malloc(sizeof(preferences_state_t));
        memset(*context_ptr, 0, sizeof(preferences_state_t));
    }
}

void preferences_face_activate(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
    preferences_state_t *state = (preferences_state_t *)context;
    state->do_deepsleep = 0;
    movement_request_tick_frequency(4); // we need to manually blink some pixels
}

static void _watch_display_hourly_chime_string(movement_settings_t *settings, uint8_t hour){
    char buf[6];
    if (settings->bit.hourly_chime_always){
        watch_clear_indicator(WATCH_INDICATOR_PM);
        watch_display_string(" Always", 4);
    }
    else{
        if (!settings->bit.clock_mode_24h) {
            // if we are in 12 hour mode, do some cleanup.
            if (hour < 12) {
                watch_clear_indicator(WATCH_INDICATOR_PM);
            } else {
                watch_set_indicator(WATCH_INDICATOR_PM);
            }
            hour %= 12;
            if (hour == 0) hour = 12;
        }
        if (hour > 9)
            sprintf(buf, "%2d00", hour);
        else
            sprintf(buf, " %d00", hour);
        watch_set_colon();
        watch_display_string(buf, 4);
    }
}


bool preferences_face_loop(movement_event_t event, movement_settings_t *settings, void *context) {
    preferences_state_t *state = (preferences_state_t *)context;
    switch (event.event_type) {
        case EVENT_TICK:
        case EVENT_ACTIVATE:
            // Do nothing; handled below.
            break;
        case EVENT_MODE_BUTTON_UP:
            watch_set_led_off();
            movement_move_to_next_face();
            return false;
        case EVENT_LIGHT_BUTTON_DOWN:
            switch (state->do_deepsleep)
            {
            case 1:
                settings->bit.screen_off_after_le = state->prev_screen_off_pref;
                g_force_sleep = 2;
                state->do_deepsleep = 2;
                // fall through
            case 2: // Don't update anything when in state 2; It's waiting to go to sleep at this point.
                break;
            case 0:
            default:
                state->current_page = (state->current_page + 1) % PREFERENCES_FACE_NUM_PREFERENCES;
                break;
            }
            break;
        case EVENT_ALARM_BUTTON_UP:
            switch (state->current_page) {
                case 0:
                    settings->bit.button_should_sound = !(settings->bit.button_should_sound);
                    break;
                case 1:
                    if (settings->bit.clock_mode_toggle) {
                        settings->bit.clock_mode_toggle = false;
                        settings->bit.clock_mode_24h = false;
                    }
                    else if (settings->bit.clock_mode_24h) {
                        settings->bit.clock_mode_toggle = true;
                        settings->bit.clock_mode_24h = false;
                    }
                    else {
                        settings->bit.clock_mode_24h = true;
                    }
                    break;
                case 2:
                    settings->bit.to_interval = settings->bit.to_interval + 1;
                    break;
                case 3:
                    settings->bit.le_interval = settings->bit.le_interval + 1;
                    break;
                case 4:
                    if (settings->bit.screen_off_after_le && state->do_deepsleep == 0)
                        state->do_deepsleep = 1;
                    else{
                        state->do_deepsleep = 0;
                        settings->bit.screen_off_after_le = !(settings->bit.screen_off_after_le);
                    }
                    break;
                case 5:
                    if (settings->bit.hourly_chime_always){
                        settings->bit.hourly_chime_always = false;
                        settings->bit.hourly_chime_start = 0;
                    }
                    else if (settings->bit.hourly_chime_start == 3){
                        settings->bit.hourly_chime_always = true;
                        settings->bit.hourly_chime_start = 0;
                    }
                    else{
                        settings->bit.hourly_chime_start = settings->bit.hourly_chime_start + 1;
                    }
                    break;
                case 6:
                    if (settings->bit.hourly_chime_always){
                        settings->bit.hourly_chime_always = false;
                        settings->bit.hourly_chime_end = 0;
                    }
                    else if (settings->bit.hourly_chime_end == 3){
                        settings->bit.hourly_chime_always = true;
                        settings->bit.hourly_chime_end = 0;
                    }
                    else{
                        settings->bit.hourly_chime_end = settings->bit.hourly_chime_end + 1;
                    }
                    break;
                case 7:
                    settings->bit.led_duration = settings->bit.led_duration + 1;
                    break;
                case 8:
                    settings->bit.led_green_color = settings->bit.led_green_color + 1;
                    break;
                case 9:
                    settings->bit.led_red_color = settings->bit.led_red_color + 1;
                    break;
            }
            break;
        case EVENT_TIMEOUT:
            if (state->current_page == 3)
                break;
            movement_move_to_face(0);
            break;
        default:
            return movement_default_loop_handler(event, settings);
    }

    if (state->current_page == 0)
        state->prev_screen_off_pref = settings->bit.screen_off_after_le;
    watch_display_string((char *)preferences_face_titles[state->current_page], 0);
    watch_clear_colon();

    // blink active setting on even-numbered quarter-seconds
    if (event.subsecond % 2) {
        char buf[8];
        switch (state->current_page) {
            case 0:
                if (settings->bit.button_should_sound) watch_display_string("y", 9);
                else watch_display_string("n", 9);
                break;
            case 1:
                if (settings->bit.clock_mode_toggle) watch_display_string("Btn", 4);
                else if (settings->bit.clock_mode_24h) watch_display_string("24h", 4);
                else watch_display_string("12h", 4);
                break;
            case 2:
                switch (settings->bit.to_interval) {
                    case 0:
                        watch_display_string("60 SeC", 4);
                        break;
                    case 1:
                        watch_display_string("2 n&in", 4);
                        break;
                    case 2:
                        watch_display_string("5 n&in", 4);
                        break;
                    case 3:
                        watch_display_string("30n&in", 4);
                        break;
                }
                break;
            case 3:
                switch (settings->bit.le_interval) {
                    case 0:
                        watch_display_string(" Never", 4);
                        break;
                    case 1:
                        watch_display_string("10n&in", 4);
                        break;
                    case 2:
                        watch_display_string("1 hour", 4);
                        break;
                    case 3:
                        watch_display_string("2 hour", 4);
                        break;
                    case 4:
                        watch_display_string("6 hour", 4);
                        break;
                    case 5:
                        watch_display_string("12 hr", 4);
                        break;
                    case 6:
                        watch_display_string(" 1 day", 4);
                        break;
                    case 7:
                        watch_display_string(" 7 day", 4);
                        break;
                }
                break;
            case 4:
                if(state->do_deepsleep != 0) watch_display_string("Nowj", 6);
                else if (settings->bit.screen_off_after_le) watch_display_string("ON", 7);
                else watch_display_string("OFF", 7);
                break;
            case 5:
                _watch_display_hourly_chime_string(settings, Hourly_Chime_Start[settings->bit.hourly_chime_start]);
                break;
            case 6:
                _watch_display_hourly_chime_string(settings, Hourly_Chime_End[settings->bit.hourly_chime_end]);
                break;
            case 7:
                switch (settings->bit.led_duration)
                {
                case 0:
                    watch_display_string("no LEd", 4);
                    break;
                case 1:
                    watch_display_string(" 0 SeC", 4);
                    break;
                case 2:
                    watch_display_string(" 1 SeC", 4);
                    break;
                case 3:
                    watch_display_string(" 3 SeC", 4);
                    break;
                }
                break;
            case 8:
                sprintf(buf, "%2d", settings->bit.led_green_color);
                watch_display_string(buf, 8);
                break;
            case 9:
                sprintf(buf, "%2d", settings->bit.led_red_color);
                watch_display_string(buf, 8);
                break;
        }
    }

    if (state->current_page != 5 && state->current_page != 6)
        watch_clear_indicator(WATCH_INDICATOR_PM);

    // on LED color select screns, preview the color.
    if (state->current_page >= 8) {
        watch_set_led_color(get_color_val(settings->bit.led_red_color),
                            get_color_val(settings->bit.led_green_color));
        // return false so the watch stays awake (needed for the PWM driver to function).
        return false;
    }

    watch_set_led_off();
    return true;
}

void preferences_face_resign(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
    memset(context, 0, sizeof(preferences_state_t));
    watch_set_led_off();
    watch_store_backup_data(settings->reg, 0);
}
