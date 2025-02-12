/*

 * LCD_prog.c
 *
 * Created: 2/3/2025 4:44:22 PM
 *  Author: Mostafa Akram
 */ 


#define F_CPU 8000000
#include <util/delay.h>

#include "../MemMap.h"
#include "../StdTypes.h"
#include "../utils.h"
#include "../MCAL/DIO.h"
#include "../CFG/LCD_CFG.h"
#include "LCD_interface.h"

void LCD_WriteInst_8bit(u8 inst){
	DIO_init_pin(RS,LOW);
	
	DIO_WRITE_DATA_PORT(LCD_PORT, inst); // 0b00000001 clear screen
	
	DIO_init_pin(EN,HIGH);
	_delay_ms(2);
	DIO_init_pin(EN,LOW);
	_delay_ms(2);	
	
}

void LCD_Writedata_8bit(u8 data){
	DIO_init_pin(RS,HIGH);
	
	DIO_WRITE_DATA_PORT(LCD_PORT, data); // 0b00000001 data
	
	DIO_init_pin(EN,HIGH);
	_delay_ms(2);
	DIO_init_pin(EN,LOW);
	_delay_ms(2);
	
}

void LCD_init (void){
	
	_delay_ms(50);
	DIO_init_pin(RS,LOW);
	
	LCD_WriteInst_8bit(0b00110000);
	_delay_ms(1);
	LCD_WriteInst_8bit(0b00001000);
	_delay_ms(1);
	LCD_WriteInst_8bit(0b00000001);
	_delay_ms(5);
	LCD_WriteInst_8bit(0b00000100);
	_delay_ms(1);
	
	
}





void LCD_WriteChar(u8 chr);
void LCD_WriteStr(u8* str);
void LCD_WriteNum(s32 num);