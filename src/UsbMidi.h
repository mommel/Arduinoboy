/***************************************************************************
 ***************************************************************************
 *                         __      _             __                        *
 *         ____ __________/ /_  __(_)___  ____  / /_  ____  __  __         *
 *        / __ `/ ___/ __  / / / / / __ \/ __ \/ __ \/ __ \/ / / /         *
 *       / /_/ / /  / /_/ / /_/ / / / / / /_/ / /_/ / /_/ / /_/ /          *
 *       \__,_/_/   \__,_/\__,_/_/_/ /_/\____/_.___/\____/\__, /           *
 *                                                       /____/            *
 *                                                                         *
 ***************************************************************************/
#pragma once
#ifndef __USBMIDI__
#define __USBMIDI__

#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Mode.h"
#include "Mode_Programmer.h"

#ifndef BUILD_TEEENSY
void usbMidiSendTwoByteMessage(uint8_t b1, uint8_t b2);
void usbMidiSendThreeByteMessage(uint8_t b1, uint8_t b2, uint8_t b3);
void usbMidiSendRTMessage(uint8_t b);
void usbMidiHandleSysEx(const uint8_t *data, uint16_t length, bool complete);
void usbMidiInit();
void usbMidiUpdate();
#else
#include <MIDI.h>

void usbMidiSendTwoByteMessage(uint8_t b1, uint8_t b2);

void usbMidiSendThreeByteMessage(uint8_t b1, uint8_t b2, uint8_t b3);

void usbMidiSendRTMessage(uint8_t b);

void usbMidiUpdate();

void usbMidiHandleSysEx(const uint8_t *data, uint16_t length, bool complete);

void usbMidiInit();

#endif
#endif