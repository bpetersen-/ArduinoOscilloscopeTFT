/**		Oscilloscope/Touch Screen Macros
 *
 *  	Copyright (c) 2014 by Bradley Petersen <bpetersen@ieee.org>
 *
 *  	The MIT License (MIT)
 *
 *  	Copyright (c) 2014 Bradley Petersen
 *
 *  	Permission is hereby granted, free of charge, to any person obtaining a copy of
 *  	this software and associated documentation files (the "Software"), to deal in
 *  	the Software without restriction, including without limitation the rights to
 *  	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 *  	the Software, and to permit persons to whom the Software is furnished to do so,
 *  	subject to the following conditions:
 *
 *  	The above copyright notice and this permission notice shall be included in all
 *  	copies or substantial portions of the Software.
 *
 *  	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 *  	FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 *  	COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 *  	IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 *  	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

 /***************************************
*	ARDUINO MODEL MACRO
***************************************/
#define MEGA			// Sets the type of Arduino

/***************************************
*	TOUCH SCREEN DIMENSIONS MACROS
***************************************/
#define MIN_X	0		// Touch Screen Origin (x-axis)
#define MIN_Y	0		// Touch Screen Origin (y-axis)
#define MAX_X	240	 	// Touch Screen Width = 240 Pixels
#define MAX_Y	320		// Touch Screen Length = 320 Pixels

/***************************************
*	TOUCHSCREEN MACROS
***************************************/
#define TS_MINX 140 	// ADC value when X = 0.
#define TS_MAXX 900		// ADC value when Y = 0.
#define TS_MINY 120		// ADC value when X = 240 - 1.
#define TS_MAXY 940		// ADC value when Y = 320 - 1.

/***************************************
*	TFT FONT MACROS
***************************************/
#define FONT_SPACE 6
#define FONT_X 8
#define FONT_Y 8

/***************************************
*	ARDUINO MACROS
***************************************/
#ifdef SEEEDUINO

#define DDR_CS      DDRB
#define PORT_CS     PORTB
#define CS_BIT      0x04
#define CS_OUTPUT   {DDR_CS|=CS_BIT;}
#define CS_HIGH     {PORT_CS|=CS_BIT;}
#define CS_LOW      {PORT_CS&=~CS_BIT;}

#define DDR_RS      DDRB
#define PORT_RS     PORTB
#define RS_BIT      0x08
#define RS_OUTPUT   {DDR_RS|=RS_BIT;}
#define RS_HIGH     {PORT_RS|=RS_BIT;}
#define RS_LOW      {PORT_RS&=~RS_BIT;}

#define DDR_WR      DDRB
#define PORT_WR     PORTB
#define WR_BIT      0x10
#define WR_OUTPUT   {DDR_WR|=WR_BIT;}
#define WR_HIGH     {PORT_WR|=WR_BIT;}
#define WR_LOW      {PORT_WR&=~WR_BIT;}
#define WR_RISING   {PORT_WR|=WR_BIT;PORT_WR&=~WR_BIT;}

#define DDR_RD      DDRB
#define PORT_RD     PORTB
#define RD_BIT      0x20
#define RD_OUTPUT   {DDR_RD|=RD_BIT;}
#define RD_HIGH     {PORT_RD|=RD_BIT;}
#define RD_LOW      {PORT_RD&=~RD_BIT;}
#define RD_RISING   {PORT_RD|=RD_BIT;PORT_RD&=~RD_BIT;}

#endif

/***************************************
*	ARDUINO MEGA MACROS
***************************************/
#ifdef MEGA
#define DDR_CS      DDRB
#define PORT_CS     PORTB
#define CS_BIT      0x10
#define CS_OUTPUT   {DDR_CS|=CS_BIT;}
#define CS_HIGH     {PORT_CS|=CS_BIT;}
#define CS_LOW      {PORT_CS&=~CS_BIT;}

#define DDR_RS      DDRB
#define PORT_RS     PORTB
#define RS_BIT      0x20
#define RS_OUTPUT   {DDR_RS|=RS_BIT;}
#define RS_HIGH     {PORT_RS|=RS_BIT;}
#define RS_LOW      {PORT_RS&=~RS_BIT;}

#define DDR_WR      DDRB
#define PORT_WR     PORTB
#define WR_BIT      0x40
#define WR_OUTPUT   {DDR_WR|=WR_BIT;}
#define WR_HIGH     {PORT_WR|=WR_BIT;}
#define WR_LOW      {PORT_WR&=~WR_BIT;}
#define WR_RISING   {PORT_WR|=WR_BIT;PORT_WR&=~WR_BIT;}

#define DDR_RD      DDRB
#define PORT_RD     PORTB
#define RD_BIT      0x80
#define RD_OUTPUT   {DDR_RD|=RD_BIT;}
#define RD_HIGH     {PORT_RD|=RD_BIT;}
#define RD_LOW      {PORT_RD&=~RD_BIT;}
#define RD_RISING   {PORT_RD|=RD_BIT;PORT_RD&=~RD_BIT;}

#endif

/***************************************
*	CHAR DIRECTION MACROS
***************************************/
#define LEFT2RIGHT 0
#define DOWN2UP    1
#define RIGHT2LEFT 2
#define UP2DOWN    3

/***************************************
*	ARDUINO MEGA MACROS
***************************************/
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__) // MEGA
#define YP A2		// Must be an analog pin, use "An" notation!
#define XM A1		// Must be an analog pin, use "An" notation!
#define YM 54		// Can be a digital pin, this is A0
#define XP 57		// Can be a digital pin, this is A3  
 
/***************************************
*	ARDUINO LEONARDO MACROS
***************************************/
#elif defined(__AVR_ATmega32U4__)	// LEONARDO
#define YP A2		// Must be an analog pin, use "An" notation!
#define XM A1		// Must be an analog pin, use "An" notation!   
#define YM 18		// Can be a digital pin, this is A0  
#define XP 21		// Can be a digital pin, this is A3  
 
/***************************************
*	ARDUINO-OTHER MACROS
***************************************/
#else 				//168, 328, something else
#define YP A2		// Must be an analog pin, use "An" notation! 
#define XM A1		// Must be an analog pin, use "An" notation!
#define YM 14		// Can be a digital pin, this is A0  
#define XP 17		// Can be a digital pin, this is A3
 
#endif
