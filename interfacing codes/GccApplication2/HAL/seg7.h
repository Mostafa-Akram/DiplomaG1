/*
 * seg7.h
 *
 * Created: 10/2/2024 8:09:54 PM
 *  Author: Mostafa Akram
 */ 


#ifndef SEG7_H_
#define SEG7_H_

#define F_CPU 8000000
#include <util/delay.h>
#include "../MemMap.h"
#include "../utils.h"
#include "../StdTypes.h"

#define SEG_PORT_1 PORTC
#define SEG_PORT_2 PORTD

void seg_display(u8 num);
void seg_numberbase100(u16 num);
void seg_display_BCD(u8 num);
void seg_2mux_numberbase100(u16 num);


#endif /* SEG7_H_ */