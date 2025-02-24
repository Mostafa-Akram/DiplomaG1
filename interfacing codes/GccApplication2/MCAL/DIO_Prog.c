/*
 * DIO_Prog.c
 *
 * Created: 2/16/2025 5:29:20 PM
 *  Author: Mostafa Akram
 */ 

#include "DIO_Int.h"

extern DIO_PinStatus_t DIO_PinsStatusArr[TOTAL_PINS];

void DIO_Init(void){
	DIO_Pin_t i = PINA0;
	for (;i < TOTAL_PINS ; i++)
	{
		DIO_InitPin(i, DIO_PinsStatusArr[i]);
	}
	
}



void DIO_InitPin(DIO_Pin_t pin, DIO_PinStatus_t status){
DIO_port_t port = pin/8;
u8 pin_num = pin % 8; // 0 to 7 

switch(status){
	case OUTPUT:
	switch(port){
		case PA:
			SET_BIT(DDRA, pin_num); // pin is output
			CLR_BIT(PORTA, pin_num); //pin is output low (0 Volt)
		break;
		case PB:
			SET_BIT(DDRB, pin_num); // pin is output
			CLR_BIT(PORTB, pin_num); //pin is output low (0 Volt)
		break;
		case PC:
			SET_BIT(DDRC,pin_num);
			CLR_BIT(PORTC,pin_num);
		
		break;
		case PD:
			SET_BIT(DDRD,pin_num);
			CLR_BIT(PORTD,pin_num);
		break;
	}
	
	
	break;
	case INFREE:
	switch(port){
		case PA:
		CLR_BIT(DDRA, pin_num); // pin is input
		CLR_BIT(PORTA, pin_num); //pin is input free
		break;
		case PB:
		CLR_BIT(DDRB, pin_num); // pin is input
		CLR_BIT(PORTB, pin_num);  //pin is input free
		break;
		case PC:
		CLR_BIT(DDRC,pin_num);
		CLR_BIT(PORTC,pin_num);
		
		break;
		case PD:
		CLR_BIT(DDRD,pin_num);
		CLR_BIT(PORTD,pin_num);
		break;
	}
	
	break;
	
	
	case INPULL:
	switch(port){
		case PA:
		CLR_BIT(DDRA, pin_num); // pin is input
		SET_BIT(PORTA, pin_num); //pin is input pull-up
		break;
		case PB:
		CLR_BIT(DDRB, pin_num); // pin is input
		SET_BIT(PORTB, pin_num);  //pin is input pull-up
		break;
		case PC:
		CLR_BIT(DDRC,pin_num);
		SET_BIT(PORTC,pin_num);
		
		break;
		case PD:
		CLR_BIT(DDRD,pin_num);
		SET_BIT(PORTD,pin_num);
		break;
	}
	
	break;
		
}
}



void DIO_WritePort(DIO_port_t port, u8 data){
	switch(port){
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
DIO_PinVoltage_t DIO_ReadPin(DIO_Pin_t pin){
	DIO_port_t port=pin/8;

	u8 pin_num=pin%8;
	
	DIO_PinVoltage_t volt=LOW;
	switch (port)
	{
		case PA:
		
		volt= GET_BIT(PINA,pin_num);
		break;
		case PB:
		
		volt= GET_BIT(PINB,pin_num);
		break;
		case PC:
		
		volt= GET_BIT(PINC,pin_num);
		break;
		case PD:
		
		volt= GET_BIT(PIND,pin_num);
		break;
	}
	
	return volt;
}

void DIO_WritePin(DIO_Pin_t pin, DIO_PinVoltage_t volt)
{
	DIO_port_t port=pin/8;
	u8 pin_num=pin%8;
	
	if(volt==HIGH)
	{
		switch (port)
		{
			case PA:
			
			SET_BIT(PORTA,pin_num);
			break;
			case PB:
			
			SET_BIT(PORTB,pin_num);
			break;
			case PC:
			
			SET_BIT(PORTC,pin_num);
			break;
			case PD:
			
			SET_BIT(PORTD,pin_num);
			break;
		}
	}
	else if (volt==LOW)
	{
		switch (port)
		{
			case PA:
			
			CLR_BIT(PORTA,pin_num);
			break;
			case PB:
			
			CLR_BIT(PORTB,pin_num);
			break;
			case PC:
			
			CLR_BIT(PORTC,pin_num);
			break;
			case PD:
			
			CLR_BIT(PORTD,pin_num);
			break;
		}
	}
}







u8 DIO_ReadPort(DIO_port_t port){
	u8 data=0;
	
	switch(port){
		
		case PA:
		data = PINA;
		break;
		
		case PB:
		data = PINB;
		break;
		
		case PC:
		data = PINC;
		break;
		
		case PD:
		data = PIND;
		break;
	}
	return data;
}

void DIO_TogglePin(DIO_Pin_t pin); //Task