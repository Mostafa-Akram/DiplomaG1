/*
 * GccApplication2.c
 *
 * Created: 9/11/2024 7:52:02 PM
 * Author : Mostafa Akram
 */ 



#define F_CPU 8000000
#include <util/delay.h>

#include "MemMap.h"
#include "StdTypes.h"
#include "utils.h"
#include "./HAL/seg7.h"
#include "./MCAL/DIO.h"
#include "./HAL/LCD_interface.h"




int main(void)
{
    /* Replace with your application code */
	
	DIO_init(); 
	LCD_init();

}
