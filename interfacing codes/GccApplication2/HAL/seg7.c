/*
 * Seg7.c
 *
 * Created: 10/2/2024 8:05:29 PM
 *  Author: Mostafa Akram
 */ 

#include "seg7.h"


u8 Seg_Arr[]={0x3F,  0x06,  0x5B, 0x4F, 0x66, 0x6D, 0x7D,0x07, 0x7F, 0x6F};  // lookup table

void seg_display(u8 num){
	SEG_PORT_1 = Seg_Arr[num];
	
}
void seg_numberbase100(u16 num){
	u8 d0 = 0;
	u8 d1 = 0;
	
	d0 = num / 10;
	d1 = num % 10;
	
	SEG_PORT_1 = Seg_Arr[d0];
	SEG_PORT_2 = Seg_Arr[d1];
	
}

void seg_display_BCD(u8 num){
	PORTA = num;
	
}
void seg_2mux_numberbase100(u16 num){
	u8 d0 = 0;
	u8 d1 = 0;
	
	d0 = num / 10;
	d1 = num % 10;
	
	SET_BIT(PORTD , 1);
	SEG_PORT_1 = Seg_Arr[d0];
	CLR_BIT(PORTD , 0);
	_delay_ms(5);
	
	
	SET_BIT(PORTD , 0);
	SEG_PORT_1 = Seg_Arr[d1];
	CLR_BIT(PORTD , 1);
	_delay_ms(5);
	
}
