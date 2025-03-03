/*
 * DIO_Int.h
 *
 * Created: 2/16/2025 5:30:13 PM
 *  Author: Mostafa Akram
 */ 


#ifndef DIO_INT_H_
#define DIO_INT_H_

#include "../StdTypes.h"
#include "../MemMap.h"
#include "../utils.h"
#include "../CFG/DIO_cfg.h"

typedef enum{
	PINA0=0,
	PINA1=1,
	PINA2,
	PINA3,
	PINA4,
	PINA5,
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
	TOTAL_PINS	
	} DIO_Pin_t;

typedef enum{
	OUTPUT=0,
	INFREE,
	INPULL
	}DIO_PinStatus_t;
	
	
typedef enum{
	PA,
	PB,
	PC,
	PD
	
	}DIO_port_t;

typedef enum{
	LOW=0,
	HIGH
	}DIO_PinVoltage_t;
	


void DIO_Init(void);
	
	

void DIO_InitPin(DIO_Pin_t pin, DIO_PinStatus_t status);
u8 DIO_ReadPort(DIO_port_t port);
void DIO_WritePort(DIO_port_t port, u8 data);
DIO_PinVoltage_t DIO_ReadPin(DIO_Pin_t pin);
void DIO_WritePin(DIO_Pin_t pin, DIO_PinVoltage_t volt);
void DIO_TogglePin(DIO_Pin_t pin);


#endif /* DIO_INT_H_ */