/*
 * MIT License
 *
 * Copyright (c) 2024 <#David Volovskiy#>
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
#include "party_face.h"

void party_face_setup(movement_settings_t *settings, uint8_t watch_face_index, void ** context_ptr) {
    (void) settings;
    (void) watch_face_index;
    if (*context_ptr == NULL) {
        *context_ptr = malloc(sizeof(party_state_t));
        memset(*context_ptr, 0, sizeof(party_state_t));
        // Do any one-time tasks in here; the inside of this conditional happens only at boot.
    }
    // Do any pin or peripheral setup here; this will be called whenever the watch wakes from deep sleep.
}

void party_face_activate(movement_settings_t *settings, void *context) {
    (void) settings;
    party_state_t *state = (party_state_t *)context;
    state->active = false;
    state->led = true;
    state->led_duration_bak = settings->bit.led_duration;
    settings->bit.led_duration = 0; // Turn off the LED turning on in this mode
    // Handle any tasks related to your watch face coming on screen.
}

static void _party_face_init_lcd(party_state_t *state) {
    char buf[11];
    const char text[MAX_TEXT][7] = {" Party", " Pronn"};
    sprintf(buf, "%s %c%s", state->led ? "L1" : "L0",state->fast ? 'F' : 'S', text[state->text]);
    watch_display_string(buf, 0);
}

static void _party_face_update_lcd_on(party_state_t *state) {
    char text[MAX_TEXT][11] = {"EF24 Party", "     Pronn"}; // EF24 = Electric Forest 2024
    watch_display_string(text[state->text], 0);
}

bool party_face_loop(movement_event_t event, movement_settings_t *settings, void *context) {
    party_state_t *state = (party_state_t *)context;

    switch (event.event_type) {
        case EVENT_ACTIVATE:
            _party_face_init_lcd(state);
            break;
        case EVENT_LIGHT_BUTTON_UP:
            if (!state->active) {
                state->led = !state->led;
                _party_face_init_lcd(state);
            }
            break;
        case EVENT_LIGHT_LONG_PRESS:
            if (!state->active) {
                state->text = (state->text + 1) % MAX_TEXT;
                _party_face_init_lcd(state);
            }
            break;
        case EVENT_ALARM_BUTTON_UP:
            if (!state->active) {
                state->active = true;
                movement_request_tick_frequency(state->fast ? 8 : 2);
            } else {
                state->active = false;
                watch_set_led_off();
                _party_face_init_lcd(state);
            }
            break;
        case EVENT_ALARM_LONG_PRESS:
            if (!state->active) {
                state->fast = !state->fast;
                _party_face_init_lcd(state);
            }
            break;
        case EVENT_TIMEOUT:
            if (!state->active){
                watch_set_led_off();
                movement_move_to_face(0);
            }
            break;
        case EVENT_LOW_ENERGY_UPDATE:

            // If you did not resign in EVENT_TIMEOUT, you can use this event to update the display once a minute.
            // Avoid displaying fast-updating values like seconds, since the display won't update again for 60 seconds.
            // You should also consider starting the tick animation, to show the wearer that this is sleep mode:
            watch_set_led_off();
            watch_start_tick_animation(500);
            break;
        case EVENT_TICK:
            if (state->active) {
                if (event.subsecond % 2 == 0){
                    _party_face_update_lcd_on(state);
                }
                else{
                    watch_clear_display();
                }
                if (!state->led)
                    break;
                switch (state->color)
                {
                case 0:
                    watch_set_led_red();
                    break;
                 case 1:
                    watch_set_led_green();
                    break;
                case 2:
                    watch_set_led_yellow();
                    break;               
                default:
                    watch_set_led_off();
                    break;
                }
                state->color = (state->color + 1) % 3;
            }
            break;
        default:
            // Movement's default loop handler will step in for any cases you don't handle above:
            // * EVENT_LIGHT_BUTTON_DOWN lights the LED
            // * EVENT_MODE_BUTTON_UP moves to the next watch face in the list
            // * EVENT_MODE_LONG_PRESS returns to the first watch face (or skips to the secondary watch face, if configured)
            // You can override any of these behaviors by adding a case for these events to this switch statement.
            return movement_default_loop_handler(event, settings);
    }

    // return true if the watch can enter standby mode. Generally speaking, you should always return true.
    // Exceptions:
    //  * If you are displaying a color using the low-level watch_set_led_color function, you should return false.
    //  * If you are sounding the buzzer using the low-level watch_set_buzzer_on function, you should return false.
    // Note that if you are driving the LED or buzzer using Movement functions like movement_illuminate_led or
    // movement_play_alarm, you can still return true. This guidance only applies to the low-level watch_ functions.
    return true;
}

void party_face_resign(movement_settings_t *settings, void *context) {
    party_state_t *state = (party_state_t *)context;
    settings->bit.led_duration = state->led_duration_bak; // Turn LED back to default
    (void) settings;
    (void) context;
    watch_set_led_off();
    // handle any cleanup before your watch face goes off-screen.
}

