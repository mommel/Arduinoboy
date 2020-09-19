#/***************************************************************************
 ***************************************************************************
 *                         __      _             __                        *
 *         ____ __________/ /_  __(_)___  ____  / /_  ____  __  __         *
 *        / __ `/ ___/ __  / / / / / __ \/ __ \/ __ \/ __ \/ / / /         *
 *       / /_/ / /  / /_/ / /_/ / / / / / /_/ / /_/ / /_/ / /_/ /          *
 *       \__,_/_/   \__,_/\__,_/_/_/ /_/\____/_.___/\____/\__, /           *
 *                                                       /____/            *
 *                                                                         *
 ***************************************************************************/
/**************************************************************************
 * Name:    Timothy Lamb                                                  *
 * Email:   trash80@gmail.com                                             *
 ***************************************************************************/
#pragma once
#ifndef __MODE_LSDJ_KEYBOARD__
#define __MODE_LSDJ_KEYBOARD__

#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Memory_Functions.h"
#include "Mode.h"
#include "Mode_LSDJ_Keyboard.h"
#include "Mode_LSDJ_Map.h"
#include "Mode_LSDJ_MasterSync.h"
#include "Mode_LSDJ_Midiout.h"
#include "Mode_LSDJ_SlaveSync.h"
#include "Mode_MidiGb.h"
#include "Mode_Nanoloop.h"
#include "Mode_Programmer.h"
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

void modeLSDJKeyboardSetup();

void modeLSDJKeyboard();

/*
 changeLSDJInstrument does what it does via magic (rtfm, realize the fucking
 magic)
*/
void changeLSDJInstrument(byte channel, byte message);

/*
 w00t...
*/
void playLSDJNote(byte channel, byte note, byte velocity);

/*
 changeLSDJOctave compares the last octave with the current one and then sends a
 byte to shift the octave to match if need be. its pretty much the same as the
 changeLSDJInstrument function.
*/
void changeLSDJOctave();

/*
  sendKeyboardByteToGameboy
*/
void sendKeyboardByteToGameboy(byte send_byte);

void modeLSDJKeyboardMidiReceive();

#endif