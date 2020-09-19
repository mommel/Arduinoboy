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
#ifdef TEENSY
#include "usb_names.h"

#ifndef MIDI_NAME
#define MIDI_NAME \
  { 'T', 'e', 'e', 'n', 's', 'y', 'b', 'o', 'y' }
#define MIDI_NAME_LEN 9
#endif

#ifndef MANUFACTURER_NAME
#define MANUFACTURER_NAME \
  { 'T', 'r', 'a', 's', 'h', ' ', '8', '0' }
#define MANUFACTURER_NAME_LEN 8
#endif

#ifndef SERIAL_NUMBER
#define SERIAL_NUMBER \
  { 'G', 'a', 'm', 'e', 'b', 'i', 't', 'c', 'h' }
#define SERIAL_NUMBER_LEN 9
#endif

struct usb_string_descriptor_struct usb_string_product_name = {
    2 + MIDI_NAME_LEN * 2, 3, MIDI_NAME};
struct usb_string_descriptor_struct usb_string_manufacturer_name = {
    2 + MANUFACTURER_NAME_LEN * 2, 3, MANUFACTURER_NAME};

struct usb_string_descriptor_struct usb_string_serial_number = {
    2 + SERIAL_NUMBER_LEN * 2, 3, SERIAL_NUMBER};
#endif
