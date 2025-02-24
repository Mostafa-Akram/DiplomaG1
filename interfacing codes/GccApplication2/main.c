/*
 * GccApplication2.c
 *
 * Created: 9/11/2024 7:52:02 PM
 * Author : Mostafa Akram
 */ 
#include "StdTypes.h"
#include "MemMap.h"
#include "utils.h"
#include "./MCAL/DIO_Int.h"
#include "./CFG/DIO_cfg.h"
#include "./HAL/LCD_Int.h"

#define F_CPU 8000000
#include <util/delay.h>





int main(void)
{
    /* Replace with your application code */
	
	DIO_Init();
	LCD_Init();
	WriteData('A');
	_delay_ms(1000);
	WriteData('h');
	_delay_ms(1000);
	WriteData('m');


	
	

}
