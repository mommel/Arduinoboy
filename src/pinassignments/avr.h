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
 * Arduino UNO/Ethernet/Nano (ATmega328), Arduino UNO Wifi (ATmega4809) or Mega
 *2560 (ATmega2560/ATmega1280) (assumed)
 ***************************************************************************/
PS2Keyboard keyboard;
int pinGBClock = A0;        // Analog In 0 - clock out to gameboy
int pinGBSerialOut = A1;    // Analog In 1 - serial data to gameboy
int pinGBSerialIn = A2;     // Analog In 2 - serial data from gameboy
int pinMidiInputPower = 4;  // power pin for midi input opto-isolator
int pinStatusLed = 13;      // Status LED
int pinLeds[] = {12, 11, 10, 9, 8, 13};  // LED Pins
int pinButtonMode = 2;                   // toggle button for selecting the mode
HardwareSerial *serial = &Serial;
byte incomingPS2Byte;