/*
 * MIT License
 *
 * Copyright (c) 2022 Andrew Mike
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
#include "tally_face.h"
#include "watch.h"

static const uint32_t _tally_default[] = {0, 40, 20};
static const uint8_t _tally_default_size = sizeof(_tally_default) / sizeof(uint32_t);
static bool _le_mode;

void tally_face_setup(movement_settings_t *settings, uint8_t watch_face_index, void ** context_ptr) {
    (void) settings;
    (void) watch_face_index;
    if (*context_ptr == NULL) {
        *context_ptr = malloc(sizeof(tally_state_t));
        memset(*context_ptr, 0, sizeof(tally_state_t));
        tally_state_t *state = (tally_state_t *)*context_ptr;
        state->tally_default_idx = 0;
        state->tally_idx = _tally_default[state->tally_default_idx];
    }
}

void tally_face_activate(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
}

bool tally_face_loop(movement_event_t event, movement_settings_t *settings, void *context) {
    (void) settings;
    tally_state_t *state = (tally_state_t *)context;
    
    switch (event.event_type) {
        case EVENT_LOW_ENERGY_UPDATE:
            _le_mode = true;
            break;
        case EVENT_ALARM_BUTTON_UP:
            if ( _le_mode){
                _le_mode = false;
                break;
            }
            // increment tally index
            state->tally_idx++;
            if (state->tally_idx > 999999) { //0-999,999
                //reset tally index and play a reset tune
                state->tally_idx = _tally_default[state->tally_default_idx];
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_G6, 30);
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_REST, 30);
            }
            print_tally(state);
            if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_E6, 30);
            break;
        case EVENT_ALARM_LONG_PRESS:
            if (state->tally_idx == _tally_default[state->tally_default_idx]){  // Able to turn off sound if we hold this button when it's at zero.
                state->soundOff = !state->soundOff;
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_E6, 30);
                print_tally(state);
            }
            else{
                state->tally_idx = _tally_default[state->tally_default_idx]; // reset tally index
                //play a reset tune
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_G6, 30);
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_REST, 30);
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_E6, 30);
                print_tally(state);
            }
            break;
        case EVENT_LIGHT_BUTTON_UP:
            // decrement tally index
            if (state->tally_idx != 0){
                state->tally_idx--;
                print_tally(state);
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_C6SHARP_D6FLAT, 30);
            }
            break;
        case EVENT_LIGHT_BUTTON_DOWN:
            break;
        case EVENT_LIGHT_LONG_PRESS:
            if (state->tally_idx == _tally_default[state->tally_default_idx]){
                state->tally_default_idx = (state->tally_default_idx + 1) % _tally_default_size;
                state->tally_idx = _tally_default[state->tally_default_idx];
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_E6, 30);
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_REST, 30);
                if (!state->soundOff) watch_buzzer_play_note(BUZZER_NOTE_G6, 30);
                print_tally(state);
            }
            movement_illuminate_led();
            break;
        case EVENT_ACTIVATE:
            print_tally(state);
            break;
        case EVENT_TIMEOUT:
            // ignore timeout
            break;
        default:
            movement_default_loop_handler(event, settings);
            break;
    }

    return true;
}

// print tally index at the center of display.
void print_tally(tally_state_t *state) {
    char buf[14];
    if (!state->soundOff)
        watch_set_indicator(WATCH_INDICATOR_BELL);
    else
        watch_clear_indicator(WATCH_INDICATOR_BELL);
    sprintf(buf, "TA  %06d", (int)(state->tally_idx)); // center of LCD display
    watch_display_string(buf, 0);
}

void tally_face_resign(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
}
