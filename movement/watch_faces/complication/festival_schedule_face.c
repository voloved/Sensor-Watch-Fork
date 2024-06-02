/*
 * MIT License
 *
 * Copyright (c) 2024 <David Volvoskiy>
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
#include "festival_schedule_face.h"
#include "festival_schedule_arr.h"


const char festival_stage[STAGE_COUNT + 1][2] =
{
    [RANCH_ARENA] = "Rn",
    [SHERWOOD_COURT] = "SH",
    [TRIPOLEE] = "TR",
    [CAROUSEL_CLUB] = "CA",
    [OBSERVATORY] = "OB",
    [HONEYCOMB] = "HC",
    [STAGE_COUNT] = "  "
};

const char festival_genre[GENRE_COUNT + 1][6] =
{
    [BASS] = " BASS ",
    [HOUSE] = "HOUSE",
    [INDIE] = " INDIE",
    [POP] = " POP  ",
    [JAM] = " JAm7 ",
    [RAP] = " RAP  ",
    [WORLD] = " WORLD",
    [GENRE_COUNT] = "      "
};

static watch_date_time _starting_time;
static watch_date_time _ending_time;
static bool alarm_held;


// Returns 0 if they're the same; Positive if dt1 is newer than dt2; Negative o/w
static int compareDateTimes(watch_date_time dt1, watch_date_time dt2) {
    if (dt1.unit.year != dt2.unit.year) {
        return dt1.unit.year - dt2.unit.year;
    }
    if (dt1.unit.month != dt2.unit.month) {
        return dt1.unit.month - dt2.unit.month;
    }
    if (dt1.unit.day != dt2.unit.day) {
        return dt1.unit.day - dt2.unit.day;
    }
    if (dt1.unit.hour != dt2.unit.hour) {
        return dt1.unit.hour - dt2.unit.hour;
    }
    return dt1.unit.minute - dt2.unit.minute;
}

static bool _act_is_playing(uint8_t act_num, watch_date_time curr_time){
    if (act_num == NUM_ACTS) return false;
    return compareDateTimes(festival_acts[act_num].start_time, curr_time) <= 0 && compareDateTimes(curr_time, festival_acts[act_num].end_time) < 0;
}

static uint8_t _act_performing_on_stage(uint8_t stage, watch_date_time curr_time)
{
    for (int i = 0; i < NUM_ACTS; i++) {
        if (festival_acts[i].stage == stage && _act_is_playing(i, curr_time))
            return i;
    }
    return NUM_ACTS;
}

static uint8_t _find_first_available_act(uint8_t first_stage_to_check, watch_date_time curr_time, bool reverse)
{
    int increment = reverse ? -1 : 1;
    uint8_t last_stage = (first_stage_to_check - increment + STAGE_COUNT) % STAGE_COUNT;
    for (int i = first_stage_to_check;; i = (i + increment + STAGE_COUNT) % STAGE_COUNT) {
        uint8_t act_num = _act_performing_on_stage(i, curr_time);
        if (act_num != NUM_ACTS)
            return act_num;
        if (i == last_stage) break;
    }
    return NUM_ACTS;
}

static void _display_act(uint8_t act_num, uint8_t stage){
    char buf[11];
    sprintf(buf, "%.2s  %.6s", festival_stage[stage], festival_acts[act_num].artist);
    watch_display_string(buf , 0);
}

static void _display_act_genre(uint8_t act_num){
    char buf[9];
    sprintf(buf, " g%.6s", festival_genre[festival_acts[act_num].genre]);
    watch_display_string(buf , 2);
}

static watch_date_time get_starting_time(void){
    watch_date_time date_oldest = festival_acts[0].start_time;
    for (int i = 1; i < NUM_ACTS; i++) {
        watch_date_time date_check = festival_acts[0].start_time;
        if (compareDateTimes(date_check, date_oldest) < 0)
            date_oldest= date_check;
    }
    return date_oldest;
}

static watch_date_time get_ending_time(void){
    watch_date_time date_newest = festival_acts[0].end_time;
    for (int i = 1; i < NUM_ACTS; i++) {
        watch_date_time date_check = festival_acts[0].end_time;
        if (compareDateTimes(date_check, date_newest) < 0)
            date_newest= date_check;
    }
    return date_newest;
}

static bool festival_occurring(watch_date_time curr_time){
    if (compareDateTimes(_starting_time, curr_time) > 0){
        watch_display_string("    WAIT  ", 0);
        return false;
    }
    else if (compareDateTimes(_ending_time, curr_time) <= 0){
        watch_display_string("    OVER  ", 0);
        return false;
    }
    return true;
}



void festival_schedule_face_setup(movement_settings_t *settings, uint8_t watch_face_index, void ** context_ptr) {
    (void) settings;
    (void) watch_face_index;
    if (*context_ptr == NULL) {
        *context_ptr = malloc(sizeof(festival_schedule_state_t));
        memset(*context_ptr, 0, sizeof(festival_schedule_state_t));
        // Do any one-time tasks in here; the inside of this conditional happens only at boot.
    }
    // Do any pin or peripheral setup here; this will be called whenever the watch wakes from deep sleep.
}

void festival_schedule_face_activate(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
    _starting_time = get_starting_time();
    _ending_time = get_ending_time();
}

bool festival_schedule_face_loop(movement_event_t event, movement_settings_t *settings, void *context) {
    festival_schedule_state_t *state = (festival_schedule_state_t *)context;
    watch_date_time curr_time;
    if (alarm_held){
        if (!watch_get_pin_level(BTN_ALARM)){
            alarm_held = false;
            _display_act(state->curr_act, state->curr_stage);
        }
        else return true;
    }
    switch (event.event_type) {
        case EVENT_ACTIVATE:
            curr_time = watch_rtc_get_date_time();
            if (!festival_occurring(curr_time)) break;
            state->curr_act = _find_first_available_act(0, curr_time, false);
            state->curr_stage = festival_acts[state->curr_act].stage;
            _display_act(state->curr_act, state->curr_stage);
            break;
        case EVENT_TICK:
        case EVENT_LOW_ENERGY_UPDATE:
            curr_time = watch_rtc_get_date_time();
            if (!festival_occurring(curr_time)) break;
            if (!_act_is_playing(state->curr_act, curr_time)){
                if (SHOW_EMPTY_STAGES)   
                    state->curr_act = NUM_ACTS;
                else{
                    state->curr_act = _find_first_available_act(state->curr_stage, curr_time, false);
                    state->curr_stage = festival_acts[state->curr_act].stage;
                } 
            }  
            _display_act(state->curr_act, state->curr_stage);
            break;
        case EVENT_LIGHT_BUTTON_UP:
            curr_time = watch_rtc_get_date_time();
            if (!festival_occurring(curr_time)) break;
            state->curr_stage = (state->curr_stage - 1 + STAGE_COUNT) % STAGE_COUNT;
            if (SHOW_EMPTY_STAGES)
                state->curr_act = _act_performing_on_stage(state->curr_stage, curr_time);
            else{
                state->curr_act = _find_first_available_act(state->curr_stage, curr_time, true);
                state->curr_stage = festival_acts[state->curr_act].stage;
            }
            _display_act(state->curr_act, state->curr_stage);
            break;
        case EVENT_ALARM_BUTTON_UP:
            curr_time = watch_rtc_get_date_time();
            if (!festival_occurring(curr_time)) break;
            state->curr_stage = (state->curr_stage + 1) % STAGE_COUNT;
            if (SHOW_EMPTY_STAGES)
                state->curr_act = _act_performing_on_stage(state->curr_stage, curr_time);
            else{
                state->curr_act = _find_first_available_act(state->curr_stage, curr_time, false);
                state->curr_stage = festival_acts[state->curr_act].stage;
            }
            _display_act(state->curr_act, state->curr_stage);
            break;
        case EVENT_ALARM_LONG_PRESS:
            alarm_held = true;
            _display_act_genre(state->curr_act);
            break;
        case EVENT_LIGHT_BUTTON_DOWN:
            break;
        case EVENT_LIGHT_LONG_PRESS:
            movement_illuminate_led();
            break;
        case EVENT_TIMEOUT:
            // Your watch face will receive this event after a period of inactivity. If it makes sense to resign,
            // you may uncomment this line to move back to the first watch face in the list:
            // movement_move_to_face(0);
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

void festival_schedule_face_resign(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;

    // handle any cleanup before your watch face goes off-screen.
}

