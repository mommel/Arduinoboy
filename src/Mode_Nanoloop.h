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
#ifndef __MODE_NANOLOOP__
#define __MODE_NANOLOOP__
#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Mode.h"
#include "Mode_LSDJ_SlaveSync.h"
#include "Mode_Programmer.h"
#include "UsbMidi.h"
#if defined BUILD_SAM || defined BUILD_ARM32U4
#include <MIDIUSB.h>
#endif

void modeNanoloopSetup();

void modeNanoloopSync();

boolean sendTickToNanoloop(boolean state, boolean last_state);

void usbMidiNanoloopRealtimeMessage(uint8_t message);

void modeNanoloopUsbMidiReceive();

#endif
