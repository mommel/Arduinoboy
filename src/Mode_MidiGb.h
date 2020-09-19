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
#ifndef __MODE_MIDIGB__
#define __MODE_MIDIGB__
#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Mode.h"
#include "Mode_Programmer.h"
#if defined BUILD_SAM || defined BUILD_ARM32U4
#include <MIDIUSB.h>
#endif

void modeMidiGbSetup();

void modeMidiGb();

void sendByteToGameboy(byte send_byte);

void modeMidiGbUsbMidiReceive();

#ifdef USE_ESP32

void handleNoteOn(byte channel, byte note, byte velocity);

void handleNoteOff(byte channel, byte note, byte velocity);

void handleControlChange(byte channel, byte number, byte velocity);

void handleProgramChange(byte channel, byte number);

void handlePitchBend(byte channel, int bend);

int convertChannel(byte channel);

#endif

#endif