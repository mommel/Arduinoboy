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
#ifndef __MEMORY_FUNCTIONS__
#define __MEMORY_FUNCTIONS__

#include <Arduino.h>

#include "Arduinoboy.h"
#ifndef USE_DUE
#include <EEPROM.h>
#endif
boolean checkMemory();

void initMemory(boolean reinit);

void loadMemory();

void printMemory();

void saveMemory();

void changeTasks();

#endif