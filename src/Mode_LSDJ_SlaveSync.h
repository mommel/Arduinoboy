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
#ifndef __MODE_LSDJ_SLAVESYNC__
#define __MODE_LSDJ_SLAVESYNC__
#include <Arduino.h>

#include "Arduinoboy.h"
#include "Mode.h"
#include "Mode_LSDJ_Map.h"
#include "Mode_LSDJ_Midiout.h"

void modeLSDJSlaveSyncSetup();

void modeLSDJSlaveSync();

void sendClockTickToLSDJ();

void getSlaveSyncEffect(byte note);

void usbMidiLSDJSlaveRealtimeMessage(uint8_t message);

void modeLSDJSlaveSyncUsbMidiReceive();

#endif