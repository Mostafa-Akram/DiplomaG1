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


#define INPUT			0
#define OUTPUT			1
#define INPUT_PULL_UP   2

#define LOW  0
#define HIGH 1

#define port1 0
#define port2 1
#define port3 2
#define port4 3
//#define port5 PORTE



void DIO_DATA_DIRECTION_PORT(u8 port , u8 pinNum, u8 pinDirection);
void DIO_WRITE_DATA_PORT(u8 port , u8 pinNum, u8 data);
u8 DIO_READ_DATA_PORT(u8 port , u8 pinNum);


#endif /* DIO_H_ */