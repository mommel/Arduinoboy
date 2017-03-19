/*
 * Arduinoboy
 * http://trash80.com
 * Copyright (c) 2016 Timothy Lamb
 *
 * This file is part of Arduinoboy.
 *
 * Arduinoboy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Arduinoboy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LSDJMidiout_h
#define LSDJMidiout_h

#define NUM_MIDIOUT 4
#define NUM_MIDIOUT_CC 7

#include "ArduinoboyGameboyModule.h"

class LSDJMidioutClass : public ArduinoboyGameboyModuleClass {
  public:
    void begin();
    void update();

    void setChannels(uint8_t c1, uint8_t c2, uint8_t c3, uint8_t c4) {
        channel[0] = c1;
        channel[1] = c2;
        channel[2] = c3;
        channel[3] = c4;
    }

    void setOptions(const uint8_t *opts) {
        for(uint8_t i=0;i<NUM_MIDIOUT;i++) {
            channel[i] = *(opts++);
        }

        for(uint8_t i=0;i<NUM_MIDIOUT;i++) {
            for(uint8_t c=0;c<NUM_MIDIOUT_CC;c++) {
                cc[i][c] = *(opts++);
            }
        }

        for(uint8_t i=0;i<NUM_MIDIOUT;i++) {
            ccMode[i] = *(opts++);
        }

        for(uint8_t i=0;i<NUM_MIDIOUT;i++) {
            ccScaling[i] = *(opts++);
        }
    };

    void allNotesOff();

  private:
    bool sequencerStarted;
    int lastNote[NUM_MIDIOUT];
    uint8_t channel[NUM_MIDIOUT];
    uint8_t cc[NUM_MIDIOUT][NUM_MIDIOUT_CC];
    bool ccMode[NUM_MIDIOUT];
    bool ccScaling[NUM_MIDIOUT];
    int command;

    void noteMessage(uint8_t chan, uint8_t data);
    void controlChangeMessage(uint8_t chan, uint8_t data);
    void programChangeMessage(uint8_t chan, uint8_t data);
};

typedef LSDJMidioutClass ModeLSDJMidiout;

#endif