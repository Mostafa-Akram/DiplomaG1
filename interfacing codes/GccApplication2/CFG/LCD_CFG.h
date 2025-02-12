/*
 * LCD.h
 *
 * Created: 2/3/2025 4:34:28 PM
 *  Author: Mostafa Akram
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_

#define _4_BIT 1
#define _8_BIT 2


#define LCD_MODO _8_BIT

#define LCD_PORT PORTB

#define RS PINA1
#define EN PINA0


#define D0 PINB0
#define D1 PINB1
#define D2 PINB2
#define D3 PINB3
#define D4 PINB4
#define D5 PINB5
#define D6 PINB6
#define D7 PINB7



#endif /* LCD.CFG_H_ */