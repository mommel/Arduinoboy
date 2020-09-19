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
#ifndef __MODE__
#define __MODE__

#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Memory_Functions.h"
#include "Mode_LSDJ_Keyboard.h"
#include "Mode_LSDJ_Map.h"
#include "Mode_LSDJ_MasterSync.h"
#include "Mode_LSDJ_Midiout.h"
#include "Mode_LSDJ_SlaveSync.h"
#include "Mode_MidiGb.h"
#include "Mode_Nanoloop.h"
#include "Mode_Programmer.h"

void setMode();

void switchMode();

void sequencerStart();

void sequencerStop();

#endif