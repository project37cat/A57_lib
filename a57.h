//a57.h
//28.09.2014

#include <stdint.h>
#include <avr/io.h>

#include "font.h"


///////////////////////////////////////////////////////////////////////////////////////////////////

#define LCD_SCK_PIN 3
#define LCD_SCK_DDRX DDRD
#define LCD_SCK_PORTX PORTD

#define LCD_MOSI_PIN 4
#define LCD_MOSI_DDRX DDRD
#define LCD_MOSI_PORTX PORTD

#define LCD_DC_PIN 5
#define LCD_DC_DDRX DDRD
#define LCD_DC_PORTX PORTD

#define LCD_CS_PIN 6
#define LCD_CS_DDRX DDRD
#define LCD_CS_PORTX PORTD

#define LCD_RST_PIN 7
#define LCD_RST_DDRX DDRD
#define LCD_RST_PORTX PORTD

///////////////////////////////////////////////////////////////////////////////////////////////////


#define SetBit(reg, bit) reg|=(1<<bit)
#define ClearBit(reg, bit) reg&=(~(1<<bit))


#define LCD_SCK_H SetBit(LCD_SCK_PORTX,LCD_SCK_PIN)
#define LCD_SCK_L ClearBit(LCD_SCK_PORTX,LCD_SCK_PIN)

#define LCD_MOSI_H SetBit(LCD_MOSI_PORTX,LCD_MOSI_PIN)
#define LCD_MOSI_L ClearBit(LCD_MOSI_PORTX,LCD_MOSI_PIN)

#define LCD_DC_H SetBit(LCD_DC_PORTX,LCD_DC_PIN)
#define LCD_DC_L ClearBit(LCD_DC_PORTX,LCD_DC_PIN)

#define LCD_CS_H SetBit(LCD_CS_PORTX,LCD_CS_PIN)
#define LCD_CS_L ClearBit(LCD_CS_PORTX,LCD_CS_PIN)

#define LCD_RST_H SetBit(LCD_RST_PORTX,LCD_RST_PIN)
#define LCD_RST_L ClearBit(LCD_RST_PORTX,LCD_RST_PIN)


void DisplayWrite(uint8_t data, uint8_t mode);
void DisplayInit(void);
void GotoLineRow(uint8_t line, uint8_t row);
void ClearScreen(void);
void DisplayInit(void);
void DrawChar(uint8_t c, uint8_t x, uint8_t y);
void DrawString(uint8_t x, uint8_t y, char *c);

