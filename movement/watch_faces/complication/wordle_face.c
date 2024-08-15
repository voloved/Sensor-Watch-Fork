/*
 * MIT License
 *
 * Copyright (c) 2024 <#author_name#>
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
#include "wordle_face.h"

/*
TODO:
* Add quick iteration (8x freq to get to the letter we want)
* Fix the word matching (if answer is AAAAA and we put in AACAA, the C blinks)
* Verify pressing back always work when the board is G_G_G
* Add daily streak and wait for next day
* Add a way tpo recount previous attempts
*/


// From: https://gist.github.com/shmookey/b28e342e1b1756c4700f42f17102c2ff

/*
Letter | Usage
E      | 1519
S      | 1490
A      | 1213
R      | 1026
O      | 852
L      | 850
I      | 843
T      | 819  But looks bad across all positions
N      | 681
D      | 619  lowercase d looks like a in certain positions
C      | 525
U      | 514  P has more words with the other letters here (281 vs 198)
P      | 448
*/
static const char _valid_letters[] = {'E', 'S', 'A', 'R', 'O', 'L', 'I', 'N', 'C', 'P'};

// Number of words found: 281
static const char _legal_words[][WORDLE_LENGTH + 1] = {
    "SPIES", "SOLAR", "RAISE", "RARES", "PAEAN", "PLIES", "CRASS", "PEARS", "SNORE", 
    "POLES", "ROLLS", "ALOES", "LOSES", "SLICE", "PEACE", "POLLS", "POSES", "LANES", 
    "COPRA", "SPANS", "CANAL", "LOSER", "PAPER", "PILES", "CLASS", "RACER", "POOLS", 
    "PLAIN", "SPEAR", "SPARE", "INNER", "ALIEN", "NOSES", "EARLS", "SEALS", "LEARN", 
    "COLIC", "OPERA", "LOOSE", "SPOOR", "SCALE", "SOARS", "PAILS", "PRONE", "OPALS", 
    "PIPER", "RILLS", "CAIRN", "POISE", "LEAPS", "ELOPE", "NICER", "SLOOP", "PANES", 
    "SOLES", "CROSS", "NIECE", "LAIRS", "LEASE", "SALES", "SCENE", "SORES", "SNARL", 
    "SPIRE", "LASSO", "CLOSE", "OSIER", "SPOOL", "PRICE", "LOANS", "POSSE", "PENAL", 
    "SLAPS", "RELIC", "SINCE", "CIRCA", "LIARS", "RISES", "OPENS", "ROARS", "PACES", 
    "ARISE", "RISEN", "PENIS", "LAPEL", "CROPS", "CANON", "LAPSE", "SCION", "ARSON", 
    "AREAS", "SLAIN", "CANOE", "EERIE", "NOOSE", "PIANO", "PLANE", "CLASP", "SCARE", 
    "COCOA", "CRESS", "NASAL", "LOCAL", "RINSE", "SCARS", "PROPS", "OASES", "SLEEP", 
    "SNAPS", "SIRES", "CANES", "RAILS", "RESIN", "COLON", "PEASE", "POPES", "PENCE", 
    "AROSE", "REELS", "SALSA", "OCEAN", "PESOS", "OPINE", "RACES", "RAINS", "PRIES", 
    "CRIES", "CALLS", "PIERS", "CELLS", "SCRAP", "EARNS", "IRONS", "SPACE", "LOONS", 
    "SILLS", "COALS", "PIECE", "PALER", "REINS", "APACE", "SLOPE", "CREPE", "CONES", 
    "CAPER", "SEERS", "CAPES", "OASIS", "REAPS", "PALES", "CLAPS", "PLEAS", "INANE", 
    "COINS", "SNAIL", "CLEAR", "ROSIN", "LILAC", "SPARS", "SPINE", "NONCE", "CRISP", 
    "CRAPE", "AISLE", "CRONE", "SPOIL", "SPOON", "ARENA", "PARSE", "CASES", "SPICE", 
    "RIPER", "PILLS", "SOLOS", "SPINS", "PEERS", "RARER", "CONIC", "REARS", "CACAO", 
    "PAPAS", "ACRES", "ROPES", "CORAL", "CLEAN", "EASES", "SPILL", "SENSE", "PIPES", 
    "CLANS", "PRESS", "LOINS", "PAPAL", "APPLE", "PAIRS", "SCORN", "ALONE", "PEEPS", 
    "SPREE", "SNARE", "CLIPS", "EASEL", "CAROL", "ASPEN", "SALON", "LOOPS", "PEALS", 
    "SNEER", "PLACE", "SELLS", "LINEN", "CRIER", "ACORN", "SLIPS", "ERASE", "LIONS", 
    "NAILS", "REPEL", "CORES", "LEPER", "APPAL", "ROSES", "SCORE", "RISER", "CREEP", 
    "CAPON", "ERROR", "NOISE", "CARES", "APRON", "SOILS", "SLOPS", "PAINS", "EPICS", 
    "SANER", "SAILS", "PRIOR", "ASSES", "COILS", "SCOOP", "LACES", "SCALP", "CRANE", 
    "PLANS", "ISLES", "SPORE", "PANIC", "COOLS", "SPELL", "ALIAS", "PORES", "SCRIP", 
    "PEARL", "PANEL", "ENROL", "LANCE", "CORPS", "LINES", "COPSE", "ONION", "NEARS", 
    "RIPEN", "LINER", "SCOPE", "SCANS", "SNIPE", "CEASE", "LEANS", "AEONS", "PINES", 
    "POPPA", "ROLES", "REALS", "PERIL", "POSER", "PROSE", "POLAR", "CORNS", "LIENS", 
    "SIREN", "PEONS", 
};

static const uint32_t _num_words = (sizeof(_legal_words) / sizeof(_legal_words[0]));
static const uint8_t _num_valid_letters = (sizeof(_valid_letters) / sizeof(_valid_letters[0]));

static uint32_t get_random(uint32_t max) {
    #if __EMSCRIPTEN__
    return rand() % max;
    #else
    return arc4random_uniform(max);
    #endif
}

static void display_letter(wordle_state_t *state, bool display_dash) {
    char buf[1 + 1];
    if (state->word_elements[state->position] >= _num_valid_letters) {
        if (display_dash)
            watch_display_string("-", state->position + 5);
        else
            watch_display_string(" ", state->position + 5);
        return;
    }
    sprintf(buf, "%c", _valid_letters[state->word_elements[state->position]]);
    watch_display_string(buf, state->position + 5);
}

static void display_all_letters(wordle_state_t *state) {
    uint8_t prev_pos = state->position;
    for (size_t i = 0; i < WORDLE_LENGTH; i++) {
        state->position = i;
        display_letter(state, false);
    }
    state->position = prev_pos;
}

static bool check_word(wordle_state_t *state) {

    // Exact
    bool is_exact_match = true;
    for (size_t i = 0; i < WORDLE_LENGTH; i++) {
        if (_valid_letters[state->word_elements[i]] == _legal_words[state->curr_answer][i])
            state->word_elements_result[i] = WORDLE_LETTER_CORRECT;
        else {
            state->word_elements_result[i] = WORDLE_LETTER_WRONG;
            is_exact_match = false;
        }
    }
    
    // Wrong Location
     for (size_t i = 0; i < WORDLE_LENGTH; i++) {
        for (size_t j = 0; j < WORDLE_LENGTH; j++) {
            if (state->word_elements_result[j] != WORDLE_LETTER_WRONG) continue;
            if (_valid_letters[state->word_elements[i]] == _legal_words[state->curr_answer][j]) {
                printf("me: %c them: %c\r\n", _valid_letters[state->word_elements[i]], _legal_words[state->curr_answer][j]);
                state->word_elements_result[j] = WORDLE_LETTER_WRONG_LOC;
                break;
            }
        }
    }

    for (size_t i = 0; i < WORDLE_LENGTH; i++) {
        printf("%d : %d\r\n", i, state->word_elements_result[i]);
    }



    return is_exact_match;
}

static void display_attempt(uint8_t attempt) {
    char buf[2];
    sprintf(buf, "%d", attempt);
    watch_display_string(buf, 3);
}

static void reset_board(wordle_state_t *state) {
    for (size_t i = 0; i < WORDLE_LENGTH; i++) {
        state->word_elements[i] = _num_valid_letters;
        state->word_elements_result[i] = WORDLE_LETTER_WRONG;
    }
    state->curr_answer = get_random(_num_words);
    state->position = 0;
    state->attempt = 1;
    state->curr_screen = SCREEN_PLAYING;
    watch_clear_colon();
    watch_display_string(" ", 4);
    display_attempt(state->attempt);
    display_all_letters(state);
    watch_display_string("-", 5);
    printf("rand: %s\r\n", _legal_words[state->curr_answer]);
}

static void display_title(wordle_state_t *state) {
    state->curr_screen = SCREEN_TITLE;
    watch_display_string("WO  WORDLE", 0);
}

static void display_streak(wordle_state_t *state) {
    char buf[12];
    state->curr_screen = SCREEN_STREAK;
    printf("streak %d \r\n", state->streak);
    sprintf(buf, "WO  St%2ddy", state->streak);
    watch_display_string(buf, 0);
    watch_set_colon();
}

static void display_lose(wordle_state_t *state, uint8_t subsecond) {
    char buf[WORDLE_LENGTH + 6];
    sprintf(buf," L   %s", subsecond % 2 ? _legal_words[state->curr_answer] : "     ");
    watch_display_string(buf, 0);
}

static void display_win(wordle_state_t *state, uint8_t subsecond) {
    (void) state;
    char buf[13];
    sprintf(buf," W   %s  ", subsecond % 2 ? "NICE" : "JOb ");
    watch_display_string(buf, 0);
}

static uint8_t get_first_pos(WordleLetterResult *word_elements_result) {
    for (size_t i = 0; i < WORDLE_LENGTH; i++) {
        if (word_elements_result[i] != WORDLE_LETTER_CORRECT)
            return i;
    }
    return 0;
}

static uint8_t get_next_pos(uint8_t curr_pos, WordleLetterResult *word_elements_result) {
    uint8_t pos = curr_pos;
    do {
        pos++;
        if (pos > WORDLE_LENGTH) return WORDLE_LENGTH + 1;
    } while (word_elements_result[pos] == WORDLE_LETTER_CORRECT);
    return pos;
}

static uint8_t get_prev_pos(uint8_t curr_pos, WordleLetterResult *word_elements_result) {
    int8_t pos = curr_pos;
    do {
        pos--;
        if (pos < 0) return curr_pos;
    } while (word_elements_result[pos] == WORDLE_LETTER_CORRECT);
    return pos;
}

static void display_result(wordle_state_t *state, uint8_t subsecond) {
    char buf[WORDLE_LENGTH + 1];
    for (size_t i = 0; i < WORDLE_LENGTH; i++)
    {
        switch (state->word_elements_result[i])
        {
        case WORDLE_LETTER_WRONG:
            buf[i] = '-';
            break;
        case WORDLE_LETTER_CORRECT:
            buf[i] = _valid_letters[state->word_elements[i]];
            break;
        case WORDLE_LETTER_WRONG_LOC:
            if (subsecond % 2)
                buf[i] = ' ';
            else
               buf[i] = _valid_letters[state->word_elements[i]]; 
        default:
            break;
        }
    }
    watch_display_string(buf, 5);
}

static bool act_on_btn(wordle_state_t *state) {
    switch (state->curr_screen)
    {
    case SCREEN_RESULT:
        for (size_t i = 0; i < WORDLE_LENGTH; i++) {
            if (state->word_elements_result[i] != WORDLE_LETTER_CORRECT)
                state->word_elements[i] = _num_valid_letters;
        }
        display_attempt(state->attempt);
        display_all_letters(state);
        state->position = get_first_pos(state->word_elements_result);
        state->curr_screen = SCREEN_PLAYING;
        return true;
    case SCREEN_TITLE:
        display_streak(state);
        return true;
    case SCREEN_STREAK:
        reset_board(state);
        return true;
    case SCREEN_WIN:
    case SCREEN_LOSE:
        display_title(state);
        return true;   
    default:
        return false;
    }
    return false;
}

void wordle_face_setup(movement_settings_t *settings, uint8_t watch_face_index, void ** context_ptr) {
    (void) settings;
    (void) watch_face_index;
    if (*context_ptr == NULL) {
        *context_ptr = malloc(sizeof(wordle_state_t));
        memset(*context_ptr, 0, sizeof(wordle_state_t));
        wordle_state_t *state = (wordle_state_t *)*context_ptr;
        state->curr_screen = SCREEN_TITLE;

    }
    // Do any pin or peripheral setup here; this will be called whenever the watch wakes from deep sleep.
}

void wordle_face_activate(movement_settings_t *settings, void *context) {
    (void) settings;
    wordle_state_t *state = (wordle_state_t *)context;
    movement_request_tick_frequency(2);
    if (state->curr_screen == SCREEN_TITLE)
        display_title(state);
}

bool wordle_face_loop(movement_event_t event, movement_settings_t *settings, void *context) {
    wordle_state_t *state = (wordle_state_t *)context;

    switch (event.event_type) {
        case EVENT_ACTIVATE:
            if (state->curr_screen == SCREEN_PLAYING)
                display_all_letters(state);
            break;
        case EVENT_TICK:
            switch (state->curr_screen)
            {
            case SCREEN_PLAYING:
                if (event.subsecond % 2) {
                    display_letter(state, true);
                } else {
                    watch_display_string(" ", state->position + 5);
                }
                break;
            case SCREEN_RESULT:
                display_result(state, event.subsecond);
                break;
            case SCREEN_LOSE:
                display_lose(state, event.subsecond);
                break;
            case SCREEN_WIN:
                display_win(state, event.subsecond);
                break;
            default:
                break;
            }
            break;
        case EVENT_LIGHT_BUTTON_UP:
            if (act_on_btn(state)) break;
            if (state->word_elements[state->position] >= _num_valid_letters) state->word_elements[state->position] = 0;
            else state->word_elements[state->position] = (state->word_elements[state->position] + 1) % _num_valid_letters;
            display_letter(state, true);
            break;
        case EVENT_LIGHT_LONG_PRESS:
            if (state->word_elements[state->position] >= _num_valid_letters) state->word_elements[state->position] = _num_valid_letters - 1;
            else state->word_elements[state->position] = (state->word_elements[state->position] + _num_valid_letters - 1) % _num_valid_letters;
            display_letter(state, true);
            break; 
        case EVENT_ALARM_BUTTON_UP:
            if (act_on_btn(state)) break;
            display_letter(state, true);
            if (state->word_elements[state->position] == _num_valid_letters) break;
            state->position = get_next_pos(state->position, state->word_elements_result);
            if(WORDLE_LENGTH == (state->position)) {
                bool exact_match = check_word(state);
                if (exact_match) {
                    state->curr_screen = SCREEN_WIN;
                    state->streak++;
                    break;
                }
                if (state->attempt++ >= WORDLE_MAX_ATTEMPTS) {
                    state->curr_screen = SCREEN_LOSE;
                    state->streak = 0;
                    break;
                }
                state->curr_screen = SCREEN_RESULT;
                break;
            }
            break;
        case EVENT_ALARM_LONG_PRESS:
            display_letter(state, true);
            state->position = get_prev_pos(state->position, state->word_elements_result);
            break;
        case EVENT_LIGHT_BUTTON_DOWN:
            break;
        case EVENT_TIMEOUT:
        case EVENT_LOW_ENERGY_UPDATE:
            break;
        default:
            return movement_default_loop_handler(event, settings);
    }
    return true;
}

void wordle_face_resign(movement_settings_t *settings, void *context) {
    (void) settings;
    (void) context;
}

