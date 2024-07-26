/*
 * MIT License
 *
 * Copyright (c) 2023 Jeremy O'Brien
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

#ifndef MOVEMENT_CUSTOM_SIGNAL_TUNES_H_
#define MOVEMENT_CUSTOM_SIGNAL_TUNES_H_

int8_t signal_tune_original[] = {
    BUZZER_NOTE_C8, 5,
    BUZZER_NOTE_REST, 6,
    BUZZER_NOTE_C8, 5,
    0
};

int8_t signal_tune_custom[] = {
    BUZZER_NOTE_C8, 5,
    BUZZER_NOTE_REST, 6,
    BUZZER_NOTE_F7SHARP_G7FLAT, 7,
    0
};

int8_t signal_tune_zelda_secret[] = {
    BUZZER_NOTE_G5, 8,
    BUZZER_NOTE_F5SHARP_G5FLAT, 8,
    BUZZER_NOTE_D5SHARP_E5FLAT, 8,
    BUZZER_NOTE_A4, 8,
    BUZZER_NOTE_G4SHARP_A4FLAT, 8,
    BUZZER_NOTE_E5, 8,
    BUZZER_NOTE_G5SHARP_A5FLAT, 8,
    BUZZER_NOTE_C6, 20,
    0
};

int8_t signal_tune_mario_theme[] = {
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 11,
    BUZZER_NOTE_C6, 7,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_E6, 7,
    BUZZER_NOTE_REST, 10,
    BUZZER_NOTE_G6, 8,
    BUZZER_NOTE_REST, 30,
    BUZZER_NOTE_G5, 8,
    0
};

int8_t signal_tune_kim_possible[] = {
    BUZZER_NOTE_G7, 6,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G4, 3,
    BUZZER_NOTE_REST, 5,
    BUZZER_NOTE_G7, 6,
    BUZZER_NOTE_REST, 1,
    BUZZER_NOTE_G4, 3,
    BUZZER_NOTE_REST, 5,
    BUZZER_NOTE_A7SHARP_B7FLAT, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G7, 6,
    0
};

int8_t signal_tune_deep_cover[] = {
    BUZZER_NOTE_F4SHARP_G4FLAT, 12,
    BUZZER_NOTE_REST, 7,
    BUZZER_NOTE_C4, 12,
    BUZZER_NOTE_REST, 16,
    BUZZER_NOTE_F4SHARP_G4FLAT, 12,
    BUZZER_NOTE_REST, 16,
    BUZZER_NOTE_C5, 24,
    0
};

int8_t signal_tune_song_of_storms[] = {
    BUZZER_NOTE_D7, 5,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_F7, 5,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A7, 8,
    0
};

int8_t signal_tune_happy_birthday[] = {
    BUZZER_NOTE_G4, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G4, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_A4, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_G4, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_C5, 6,
    BUZZER_NOTE_REST, 2,
    BUZZER_NOTE_B4, 8,
    0
};

// DON'T FORGET TO UPDATE signal_tune_t IN movements.h
int8_t *signal_tune[] = {
    signal_tune_original,
    signal_tune_custom,
    signal_tune_zelda_secret,
    signal_tune_mario_theme,
    signal_tune_kim_possible,
    signal_tune_deep_cover,
    signal_tune_song_of_storms,
    signal_tune_happy_birthday,
};

#endif // MOVEMENT_CUSTOM_SIGNAL_TUNES_H_
