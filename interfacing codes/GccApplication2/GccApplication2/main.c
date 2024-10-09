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




int main(void)
{
    /* Replace with your application code */
	
	
	 
  DIO_DATA_DIRECTION_PORT(port1 , 0 , OUTPUT);
  DIO_DATA_DIRECTION_PORT(port2 , 1 , INPUT);
  DIO_DATA_DIRECTION_PORT(port3 , 2 , INPUT_PULL_UP);
  DIO_DATA_DIRECTION_PORT(port4 , 3 , OUTPUT);
  
  DIO_WRITE_DATA_PORT(port1 , 0 , HIGH);
  DIO_WRITE_DATA_PORT(port2 , 0 , LOW);
	 
	
while (1)
{


	
}

}
