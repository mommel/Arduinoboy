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
 * Esp Devkit C (ESP32)
 ***************************************************************************/
int pinGBClock = 16;        // Analog In 0 - clock out to gameboy
int pinGBSerialOut = 17;    // Analog In 1 - serial data to gameboy
int pinGBSerialIn = 18;     // Analog In 2 - serial data from gameboy
int pinMidiInputPower = 0;  // Not used!
int pinStatusLed = 13;      // Status LED
int pinLeds[] = {23, 22, 21, 20, 4, 13};  // LED Pins
int pinButtonMode = 2;  // toggle button for selecting the mode
BLEMIDI_CREATE_ESP32_INSTANCE(USB_NAME)