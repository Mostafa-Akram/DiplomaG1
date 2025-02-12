/*
 * DIO.h
 *
 * Created: 10/9/2024 8:10:14 PM
 *  Author: Mostafa Akram
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../MemMap.h"
#include "../StdTypes.h"
#include "../utils.h"


typedef enum {
	PINA0 = 0,
	PINA1 = 1,
	PINA2 = 2,
	PINA3,    
	PINA4,
	PINA5 ,
	PINA6,
	PINA7,  
	PINB0,
	PINB1,
	PINB2,
	PINB3,
	PINB4,
	PINB5,
	PINB6,
	PINB7,
	PINC0,
	PINC1,
	PINC2,
	PINC3,
	PINC4,
	PINC5,
	PINC6,
	PINC7,
	PIND0,
	PIND1,
	PIND2,
	PIND3,
	PIND4,
	PIND5,
	PIND6,
	PIND7,
	Total_pins
} dio_pins_t;

typedef enum{
	INPUT,
	OUTPUT,
	INPUT_PULL_UP
	}pin_status_t;

#define LOW  0
#define HIGH 1

#define port1 0
#define port2 1
#define port3 2
#define port4 3
//#define port5 PORTE

typedef enum{
	PA,
	PB,
	PC,
	PD
	
}DIO_port_t;


void DIO_DATA_DIRECTION_PORT(u8 port , u8 pinNum, u8 pinDirection);
void DIO_WRITE_DATA_PORT(u8 port , u8 data);
u8 DIO_READ_DATA_PORT(u8 port , u8 pinNum);
void DIO_init(void);
void DIO_init_pin(dio_pins_t pin , pin_status_t status);

#endif /* DIO_H_ */