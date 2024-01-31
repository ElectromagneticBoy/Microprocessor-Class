#include "stm32f1xx_hal.h"

void lcd_init (void);   // initialize lcd

void lcd_send_cmd (uint8_t cmd);  // send command to the lcd

void lcd_send_data (uint8_t data);  // send data to the lcd

void lcd_putchar (char ch);  // send character to the lcd

void lcd_puts (char *str);  // send string to the lcd

void lcd_gotoxy(uint8_t col, uint8_t row);  // put cursor at the entered position row (0 or 1), col (0-15);

void lcd_clear (void);

void lcd_backlight(uint8_t state);