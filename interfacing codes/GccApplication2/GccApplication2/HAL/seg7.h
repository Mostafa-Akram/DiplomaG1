/*
 * seg7.h
 *
 * Created: 10/2/2024 8:09:54 PM
 *  Author: Mostafa Akram
 */ 


#ifndef SEG7_H_
#define SEG7_H_

#include "../MemMap.h"
#include "../StdTypes.h"

#define SEG_PORT_1 PORTC
#define SEG_PORT_2 PORTD

void seg_display(u8 num);
void numberbase100(u16 num);
void seg_display_BCD(u8 num);
void numberbase100_BCD(u16 num);


#endif /* SEG7_H_ */