/*
 * LiquidCrystal.h - LiquidCrystal Library for STM32 ARM microcontrollers
 *
 *  Created on: April 12, 2018
 *      Author: S. Saeed Hosseini (sayidhosseini@hotmail.com)
 *      Ported from: Arduino, Adafruit (https://github.com/arduino-libraries/LiquidCrystal)
 *      Published to: Github (https://github.com/SayidHosseini/STM32LiquidCrystal)
 */

#ifndef LiquidCrystal_h
#define LiquidCrystal_h




// low-level functions
void send(uint8_t, GPIO_PinState);
void write4bits(uint8_t);
void write8bits(uint8_t);
void pulseEnable(void);

// initializers
void LiquidCrystal(GPIO_TypeDef *gpioport, uint16_t rs, uint16_t rw, uint16_t enable,
  uint16_t d0, uint16_t d1, uint16_t d2, uint16_t d3);

void init(uint8_t fourbitmode, GPIO_TypeDef *gpioport, uint16_t rs, uint16_t rw, uint16_t enable,
    uint16_t d0, uint16_t d1, uint16_t d2, uint16_t d3, uint16_t d4, uint16_t d5, uint16_t d6, uint16_t d7);
  
void begin(uint8_t cols, uint8_t rows);
void enableClock(void);

// high-level functions
void lcd_clear(void);
size_t lcd_putchar(uint8_t);
void lcd_gotoxy(uint8_t, uint8_t); 
size_t lcd_puts(const char []);
void createChar(uint8_t, uint8_t[]);
void command(uint8_t);
void setRowOffsets(int row0, int row1, int row2, int row3);

#endif