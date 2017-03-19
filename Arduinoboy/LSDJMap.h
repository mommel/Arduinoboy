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

#ifndef ModeLSDJMap_h
#define ModeLSDJMap_h

#include "ArduinoboyGameboyModule.h"

class LSDJMapClass : public ArduinoboyGameboyModuleClass {
  public:
    void setChannels(uint8_t c1, uint8_t c2) {
        channel1 = c1;
        channel2 = c2;
    };
    void setOptions(const uint8_t *opts) {
        channel1 = *(opts++);
        channel2 = *(opts);
    };

    void begin();
    void update();
    void onCommand(MidiCallbackClass * midi);
    void onData1(MidiCallbackClass * midi);
    void onNoteOn(MidiCallbackClass * midi);
    void onNoteOff(MidiCallbackClass * midi);
    void onTransportClock();
    void onTransportStart();
    void onTransportContinue();
    void onTransportStop();

  private:
      uint8_t channel1;
      uint8_t channel2;
      bool sequencerStarted;
      int  currentRow;
      int  queueMessage;
      unsigned long queueTime;
      void clearQueue();
      void setQueueMessage(uint8_t message);
};

typedef LSDJMapClass ModeLSDJMap;

#endif