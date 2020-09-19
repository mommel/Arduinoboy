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
/***************************************************************************
 * Arduino Leonardo/Yún/Micro (ATmega32U4)
 ***************************************************************************/
// ^ The reason for not using digitalWrite is to allign clock and data pins for
// the GB shift reg. Pin distribution comes from official Arduino Leonardo
// documentation
int pinGBClock = A0;                 // Analog In 0 - clock out to gameboy
int pinGBSerialOut = A1;             // Analog In 1 - serial data to gameboy
int pinGBSerialIn = A2;              // Analog In 2 - serial data from gameboy
int pinMidiInputPower = 0;           // power pin for midi input opto-isolator
int pinStatusLed = 8;                // Status LED
int pinLeds[] = {3, 4, 5, 6, 7, 8};  // LED Pins
int pinButtonMode = 2;               // toggle button for selecting the mode
HardwareSerial *serial = &Serial1;
byte incomingPS2Byte;