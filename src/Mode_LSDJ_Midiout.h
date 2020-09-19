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
#ifndef __MODE_LSDJ_MIDIOUT__
#define __MODE_LSDJ_MIDIOUT__
#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Mode.h"
#include "Mode_Programmer.h"
#if defined BUILD_SAM || defined BUILD_ARM32U4
#include <MIDIUSB.h>
#endif

void modeLSDJMidioutSetup();

void modeLSDJMidiout();

void midioutDoAction(byte m, byte v);

void checkStopNote(byte m);

void stopNote(byte m);

void playNote(byte m, byte n);

void playCC(byte m, byte n);

void playPC(byte m, byte n);

void stopAllNotes();

boolean getIncommingSlaveByte();

#endif