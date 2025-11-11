#ifndef _PINS_ARDUINO_H_
#define _PINS_ARDUINO_H_

#include "r4_minima_core.h"  // Or your custom core header

#define PIN_COUNT           (30)

// Digital pins
#define D0                  0   // RX
#define D1                  1   // TX
#define D2                  2
#define D3                  3
#define D4                  4
#define D5                  5
#define D6                  6
#define D7                  7
#define D8                  8
#define D9                  9
#define D10                 10
#define D11                 11
#define D12                 12
#define D13                 13  // LED_BUILTIN

// Analog pins
#define A0                  14
#define A1                  15
#define A2                  16
#define A3                  17
#define A4                  18
#define A5                  19

// PWM capable pins
#define PWM0                D3
#define PWM1                D5
#define PWM2                D6
#define PWM3                D9
#define PWM4                D10

// SPI
#define PIN_SPI_MISO        D12
#define PIN_SPI_MOSI        D11
#define PIN_SPI_SCK         D13
#define PIN_SPI_SS          D10

// I2C
#define PIN_WIRE_SDA        D18  // A4
#define PIN_WIRE_SCL        D19  // A5

// UART
#define PIN_SERIAL_RX       D0
#define PIN_SERIAL_TX       D1

// Built-in LED
#define LED_BUILTIN         D13

// Default I2C and SPI instances
#define WIRE_INTERFACES_COUNT 1
#define SPI_INTERFACES_COUNT 1

#endif // _PINS_ARDUINO_H_