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
#ifndef __LED_FUNCTIONS__
#define __LED_FUNCTIONS__

#include <Arduino.h>

#include "Arduinoboy.h"
#include "Mode.h"
#include "Mode_Programmer.h"

void showSelectedMode();
void updateVisualSync();
void updateBlinkLights();
void updateBlinkLight(uint8_t light);
void updateStatusLight();
void blinkLight(byte midiMessage, byte midiValue);
void updateProgrammerLeds();
void updateStatusLed();
void statusLedOn();
void startupSequence();

#endif