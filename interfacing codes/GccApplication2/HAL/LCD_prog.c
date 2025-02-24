/*
 * LCD_Prog.c
 *
 * Created: 2/24/2025 6:45:47 PM
 *  Author: Mostafa Akram
 */ 

#include "LCD_Int.h"


void WriteIns(u8 ins){
	DIO_WritePin(RS,LOW);
	DIO_WritePort(LCD_PORT, ins);
	DIO_WritePin(EN,HIGH);
	_delay_ms(1);
	DIO_WritePin(EN,LOW);
	_delay_ms(1);
	
}

void WriteData(u8 data){
	DIO_WritePin(RS,HIGH);
	DIO_WritePort(LCD_PORT, data);
	DIO_WritePin(EN,HIGH);
	_delay_ms(1);
	DIO_WritePin(EN,LOW);
	_delay_ms(1);
	
}





void LCD_Init(void){
	_delay_ms(50);
	
	
	WriteIns(0x38); // 0011 1000 

	_delay_ms(1);
	
	WriteIns(0x0c); // 0000 1100
	
	_delay_ms(1);
	
	WriteIns(0x01); // 0000 0001
	
	_delay_ms(3);
	
	WriteIns(0x06); // 0000 0110
	
}
