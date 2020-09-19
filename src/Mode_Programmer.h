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
#ifndef __MODE_PROGRAMMER__
#define __MODE_PROGRAMMER__
#include <Arduino.h>

#include "Arduinoboy.h"
#include "Led_Functions.h"
#include "Memory_Functions.h"
#include "Mode.h"
#include "UsbMidi.h"

#if defined BUILD_SAM || defined BUILD_ARM32U4
#include <MIDIUSB.h>
#endif

#ifndef USE_DUE
#include <EEPROM.h>
#endif

void modeProgrammer();

void setProgrammerConnected();

void checkProgrammerConnected();

void programmerSendSettings();

void setProgrammerRequestConnect();

void setProgrammerMemorySave();

void setProgrammerRestoreMemory();

void programmerCheckTimeout();

void programmerSendConnectRequest();

boolean checkSysexChecksum();

void clearSysexBuffer();

void setMode(byte mode);

void sendMode();

void setMidioutDelay(byte a, byte b, byte c, byte d);

void getSysexData();

boolean checkForProgrammerSysex(byte sin);

void blinkSelectedLight(int led);

#endif