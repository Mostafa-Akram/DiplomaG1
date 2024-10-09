/*
 * DIO.c
 *
 * Created: 10/9/2024 8:09:59 PM
 *  Author: Mostafa Akram
 */ 

#include "DIO.h"

void DIO_DATA_DIRECTION_PORT(u8 port , u8 pinNum, u8 pinDirection){
	switch(pinDirection){
		case OUTPUT:
			switch(port){
				case 0:
					SET_BIT(DDRA, pinNum);
					break;
				case 1:
					SET_BIT(DDRB , pinNum);
					break;
				case 2:
					SET_BIT(DDRC , pinNum);
					break;
				case 3:
					SET_BIT(DDRD , pinNum);
					break;
			}
			break;
			
		case INPUT:
		switch(port){
			case 0:
			CLR_BIT(DDRA, pinNum);
			break;
			case 1:
			CLR_BIT(DDRB , pinNum);
			break;
			case 2:
			CLR_BIT(DDRC , pinNum);
			break;
			case 3:
			CLR_BIT(DDRD , pinNum);
			break;
		}
		case INPUT_PULL_UP:
		switch(port){
			case 0:
			CLR_BIT(DDRA, pinNum);
			SET_BIT(PORTA , pinNum);
			break;
			case 1:
			CLR_BIT(DDRB, pinNum);
			SET_BIT(PORTB , pinNum);
			break;
			case 2:
			CLR_BIT(DDRC, pinNum);
			SET_BIT(PORTC , pinNum);
			break;
			case 3:
			CLR_BIT(DDRD, pinNum);
			SET_BIT(PORTD , pinNum);
			break;
		}
		
		
			break;
		
	}
}


void DIO_WRITE_DATA_PORT(u8 port , u8 pinNum, u8 data){
	
}

u8 DIO_READ_DATA_PORT(u8 port , u8 pinNum){
	
}