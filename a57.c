//a57.c
//28.09.2014

#include "a57.h"


///////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayWrite(uint8_t data, uint8_t mode) //отправка данных/команд в дисплей
{
uint8_t s=0x80;

LCD_MOSI_L;
LCD_SCK_L;
if(mode)LCD_DC_H; //data
else LCD_DC_L; //command
LCD_CS_L;
for(uint8_t i=0; i<8; i++)
	{
	if(data & s) LCD_MOSI_H;
	else LCD_MOSI_L;
	s = s>>1;
	LCD_SCK_H;
	LCD_SCK_L;
	}
LCD_CS_H;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
void GotoLineRow(uint8_t line, uint8_t row) //позиция вывода на экран //0..7 //0..100
{
DisplayWrite(line+64,0);
DisplayWrite(row+128,0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
void ClearScreen(void) //чистим экран
{
GotoLineRow(0,0);
for(uint16_t i=0; i<((101*64)/8+8); i++) DisplayWrite(0,1);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayInit(void) //включаем дисплей
{
//настройка портов
SetBit(LCD_SCK_DDRX,LCD_SCK_PIN);
SetBit(LCD_MOSI_DDRX,LCD_MOSI_PIN);
SetBit(LCD_DC_DDRX,LCD_DC_PIN);
SetBit(LCD_CS_DDRX,LCD_CS_PIN);
SetBit(LCD_RST_DDRX,LCD_RST_PIN);

//сброс дисплея
LCD_RST_L;
LCD_RST_H;

//инициализация дисплея
DisplayWrite(0x21,0); //chip is active, extended instruction set
DisplayWrite(0x09,0); //set HV-gen voltage multiplier factor
DisplayWrite(0xF7,0); //set Vop
DisplayWrite(0x14,0); //bias system
DisplayWrite(0x06,0); //temperature control
DisplayWrite(0x20,0); //standart instruction set
DisplayWrite(0x0C,0); //normal mode, display non-inverted

ClearScreen();
}


///////////////////////////////////////////////////////////////////////////////////////////////////
void DrawChar(uint8_t c, uint8_t x, uint8_t y) //рисуем символ
{
if((x<9) && (y<13))
	{
	GotoLineRow(8-x, 100-y*8);
	if(c<0x20) c=0x20;
	int16_t pos = 8*(c-0x20);
	for(uint8_t y=0; y<8; y++) DisplayWrite(pgm_read_byte(&font8x8[pos++]),1);
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////
void DrawString(uint8_t x, uint8_t y, char *c) //рисуем строку
{
for(uint8_t i=0; ((i<12) && (*(c+i) != '\0')); i++) DrawChar(*(c+i),x,y+i);
}
