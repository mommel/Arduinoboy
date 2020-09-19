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
#ifndef _MODE_LSDJ_MASTERSYNC__
#define _MODE_LSDJ_MASTERSYNC__

#include <Arduino.h>

#include "Arduinoboy.h"
#include "Mode.h"
#include "Mode_LSDJ_Map.h"
#include "Mode_Programmer.h"

void modeLSDJMasterSyncSetup();

void modeLSDJMasterSync();

void checkActions();

boolean checkLSDJStopped();

void sendMidiClockSlaveFromLSDJ();

#endif