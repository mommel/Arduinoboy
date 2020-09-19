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
#ifndef __ARDUINOBOY__
#define __ARDUINOBOY__
#include <Arduino.h>

#include "Global_Definitions.h"
#include "Led_Functions.h"
#include "Memory_Functions.h"
#include "Mode.h"
#include "UsbMidi.h"

extern boolean usbMode;
extern HardwareSerial *serial;
extern byte defaultMemoryMap[MEM_MAX];
extern byte memory[MEM_MAX];
extern int pinStatusLed;
extern int pinLeds[AMOUNTLEDS];
extern int pinGBClock;
extern int buttonDepressed;
extern int buttonState;
extern int midioutBitDelay;
extern int midioutByteDelay;
extern int pinGBSerialOut;
extern int pinGBSerialIn;
extern int pinMidiInputPower;
extern int pinButtonMode;
extern uint16_t blinkMaxCount;
extern boolean alwaysUseDefaultSettings;

extern boolean sysexReceiveMode;
extern boolean sysexProgrammingMode;
extern boolean sysexProgrammingWaiting;
extern boolean sysexProgrammingConnected;
extern unsigned long sysexProgrammerWaitTime;
extern unsigned long sysexProgrammerCallTime;
extern unsigned long sysexProgrammerLastResponse;
extern unsigned long sysexProgrammerLastSent;
extern byte sysexManufacturerId;
extern int sysexPosition;
extern byte sysexData[128];
extern byte longestSysexMessage;
extern int midioutBitDelay;
extern int midioutByteDelay;
extern boolean sequencerStarted;
extern boolean midiSyncEffectsTime;
extern boolean midiNoteOnMode;
extern boolean midiNoteOffMode;
extern boolean midiProgramChange;
extern boolean midiAddressMode;
extern boolean midiValueMode;
extern int midiOutLastNote[4];
extern boolean statusLedIsOn;
extern boolean statusLedBlink;
extern boolean nanoState;
extern boolean nanoSkipSync;
extern int buttonDepressed;
extern int buttonState;
extern unsigned long int buttonProgrammerWaitTime;
extern unsigned long int buttonTime;
extern boolean blinkSwitch[6];
extern unsigned long int blinkSwitchTime[6];
extern uint8_t switchLight;
extern uint16_t blinkMaxCount;
extern unsigned long midioutNoteTimer[4];
extern byte midioutNoteHold[4][4];
extern byte midioutNoteHoldCounter[4];
extern int midioutNoteTimerThreshold;
extern int countLSDJTicks;
extern int countSyncTime;
extern int countSyncLightTime;
extern int countSyncSteps;
extern int countSyncPulse;
extern int countGbClockTicks;
extern int countClockPause;
extern int countIncommingMidiByte;
extern int countStatusLedOn;
extern unsigned int waitClock;

extern int miscLastLed;
extern unsigned long int miscLedTime;
extern unsigned long int miscLedMaxTime;
extern byte incomingMidiByte;
extern byte readgbClockLine;
extern byte readGbSerialIn;
extern byte bit;
extern byte midiData[3];
extern byte lastMidiData[3];
extern int incomingMidiNote;
extern int incomingMidiVel;
extern byte readToggleMode;
extern byte serialWriteBuffer[256];
extern byte midiDefaultStartOffset;
extern int writePosition;
extern int readPosition;
extern int lastMode;
extern byte midiSyncByte;
extern byte midiSyncByteLast;
extern byte midiStatusType;
extern byte midiStatusChannel;

// byte keyboardNotes[] =
extern byte keyboardOctDn;
extern byte keyboardOctUp;
extern byte keyboardInsDn;
extern byte keyboardInsUp;
extern byte keyboardTblDn;
extern byte keyboardTblUp;
extern byte keyboardTblCue;
extern byte keyboardMut1;
extern byte keyboardMut2;
extern byte keyboardMut3;
extern byte keyboardMut4;
extern byte keyboardCurL;
extern byte keyboardCurR;
extern byte keyboardCurU;
extern byte keyboardCurD;
extern byte keyboardPgUp;
extern byte keyboardPgDn;
extern byte keyboardEntr;
extern int keyboardCurrentOct;
extern int keyboardCurrentIns;
extern int keyboardCurrentTbl;
extern int keyboardLastOct;
extern int keyboardLastIns;
extern int keyboardLastTbl;
extern int keyboardDiff;
extern int keyboardCount;
extern byte keyboardStartOctave;
extern byte keyboardNoteStart;
extern byte keyboardNoteOffset;
extern byte keyboardCommands[12];
extern int incomingMidiNote;
extern int incomingMidiVel;
extern byte readToggleMode;
extern byte serialWriteBuffer[256];
extern byte midiDefaultStartOffset;
extern int writePosition;
extern int readPosition;
extern int lastMode;
extern byte keyboardNotes[];

extern byte midiSyncByte;
extern byte midiSyncByteLast;

extern byte midiStatusType;
extern byte midiStatusChannel;

extern int mapCurrentRow;

extern int mapQueueMessage;
extern unsigned long mapQueueTime;
extern uint8_t mapQueueWaitSerial;
extern uint8_t mapQueueWaitUsb;
#endif
