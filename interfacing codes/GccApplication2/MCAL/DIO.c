/*
 * DIO.c
 *
 * Created: 10/9/2024 8:09:59 PM
 *  Author: Mostafa Akram
 */ 

#include "DIO.h"


extern u8 pins_CFG_Arr[];
void DIO_init(void){
	dio_pins_t i=0;
	
	for (i=0 ; i < Total_pins ; ++i )
	{
		DIO_init_pin(i , pins_CFG_Arr[i]);	
	}
}

void DIO_init_pin(dio_pins_t pin , pin_status_t status){
	u8 port     =  pin/8;
	u8 pin_num  =  pin%8;
	
	switch(status){
		case INPUT:
			switch(port){
			case port1:
			CLR_BIT(DDRA , pin_num);
			break;
			case port2:
			CLR_BIT(DDRB , pin_num);
			break;
			case port3:
			CLR_BIT(DDRC , pin_num);
			break;
			case port4:
			CLR_BIT(DDRD , pin_num);
			break;
			default:
			break;	
			}
			break;
			
		case OUTPUT:
		switch(port){
			case port1:
			SET_BIT(DDRA , pin_num);
			CLR_BIT(PORTA , pin_num);
			break;
			case port2:
			SET_BIT(DDRB , pin_num);
			CLR_BIT(PORTB , pin_num);
			break;
			case port3:
			SET_BIT(DDRC , pin_num);
			CLR_BIT(PORTC , pin_num);
			break;
			case port4:
			SET_BIT(DDRD , pin_num);
			CLR_BIT(PORTD , pin_num);
			break;
			default:
			break;
		}
		break;
		

		case INPUT_PULL_UP:
			switch(port){
				case port1:
				CLR_BIT(DDRA , pin_num);
				SET_BIT(PORTA , pin_num);
				break;
				case port2:
				CLR_BIT(DDRB , pin_num);
				SET_BIT(PORTB , pin_num);
				break;
				case port3:
				CLR_BIT(DDRC , pin_num);
				SET_BIT(PORTC , pin_num);
				break;
				case port4:
				CLR_BIT(DDRD , pin_num);
				SET_BIT(PORTD , pin_num);
				break;
				default:
				break;
			}
			break;
			default:
			DDRA = 0xFF;
			DDRB = 0xFF;
			break;
	}
}



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
		break;
		
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


void DIO_WRITE_DATA_PORT(u8 port , u8 data){
		switch (port)
		{
			case PA:
			PORTA=data;
			break;
			case PB:
			PORTB=data;
			break;
			case PC:
			PORTC=data;
			break;
			case PD:
			PORTD=data;
			break;
		}
}

u8 DIO_READ_DATA_PORT(u8 port , u8 pinNum){
	u8 val=0;
	
	return val;
}