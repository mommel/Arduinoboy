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

#ifndef __GLOBAL_DEFINITIONS__
#define __GLOBAL_DEFINITIONS__

#define MEM_MAX 75
#define NUMBER_OF_MODES \
  7  // Right now there are 7 modes, Might be more in the future

//!!! do not edit these, they are the position in EEPROM memory that contain the
//! value of each stored setting
#define MEM_CHECK 0
#define MEM_VERSION_FIRST 1
#define MEM_VERSION_SECOND 2
#define MEM_MODE 5
#define MEM_FORCE_MODE 4

#define MEM_LSDJSLAVE_MIDI_CH 6

#define MEM_LSDJMASTER_MIDI_CH 7
#define MEM_KEYBD_CH 8

#define MEM_KEYBD_COMPAT_MODE 9
#define MEM_KEYBD_CH_TO_INST 10

#define MEM_MIDIOUT_NOTE_CH 11
#define MEM_MIDIOUT_CC_CH 15
#define MEM_MIDIOUT_CC_MODE 19
#define MEM_MIDIOUT_CC_SCALING 23
#define MEM_MIDIOUT_CC_NUMBERS 27

#define MEM_MGB_CH 55
#define MEM_LIVEMAP_CH 70

#define MEM_MIDIOUT_BIT_DELAY 71
#define MEM_MIDIOUT_BYTE_DELAY 73

#define AMOUNTLEDS 6
#define GB_MIDI_DELAY 500  // Microseconds to delay the sending of a byte to gb

#if defined(__MKL26Z64__)
#define GB_SET(bit_cl, bit_out, bit_in) \
  GPIOB_PDOR = ((bit_in << 3) | (bit_out << 1) | bit_cl)
#elif defined BUILD_TEENSY
#define GB_SET(bit_cl, bit_out, bit_in) \
  GPIOB_PDOR =                          \
      (GPIOB_PDIR & 0xfffffff4) | ((bit_in << 3) | (bit_out << 1) | bit_cl)
#elif defined BUILD_ARM32U4
#define GB_SET(bit_cl, bit_out, bit_in) \
  PORTF = (PINF & B00011111) |          \
          ((bit_cl << 7) | ((bit_out) << 6) | ((bit_in) << 5))
#elif defined BUILD_SAM

#include <digitalWriteFast.h>

#define GB_SET(bit_cl, bit_out, bit_in) \
  digitalWriteFast(A0, bit_cl);         \
  digitalWriteFast(A1, bit_out);        \
  digitalWriteFast(A2, bit_in);
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
#define GB_SET(bit_cl, bit_out, bit_in) \
  PORTF = (PINF & B11111000) | ((bit_in << 2) | ((bit_out) << 1) | bit_cl)
#elif defined(__AVR_ATmega4809__)
#define GB_SET(bit_cl, bit_out, bit_in) \
  PORTD = (PIND & B11111000) | ((bit_in << 2) | ((bit_out) << 1) | bit_cl)
#elif defined BUILD_AVR_OTHER
#define GB_SET(bit_cl, bit_out, bit_in) \
  PORTC = (PINC & B11111000) | ((bit_in << 2) | ((bit_out) << 1) | bit_cl)
#elif defined BUILD_ESP32
#define GB_SET(bit_cl, bit_out, bit_in) \
  GPIOB_PDOR =                          \
      (GPIOB_PDIR & 0xfffffff4) | ((bit_in << 3) | (bit_out << 1) | bit_cl)
#endif

#endif
