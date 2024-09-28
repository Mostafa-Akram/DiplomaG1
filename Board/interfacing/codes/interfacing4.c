/*
 * GccApplication2.c
 *
 * Created: 9/11/2024 7:52:02 PM
 * Author : Mostafa Akram
 */ 

#define F_CPU 8000000
#include <util/delay.h>


/* DIO_Registers */
#define DDRA (*(volatile unsigned char*)0x3A)
#define DDRB (*(volatile unsigned char*)0x37)
#define DDRC (*(volatile unsigned char*)0x34)
#define DDRD (*(volatile unsigned char*)0x31)

#define PINA (*(const volatile unsigned char*)0x39)
#define PINAA (*(volatile unsigned char*)0x39)
#define PINB (*(volatile unsigned char*)0x36)
#define PINC (*(volatile unsigned char*)0x33)
#define PIND (*(volatile unsigned char*)0x30)

#define PORTA (*(volatile unsigned char*)0x3B)
#define PORTB (*(volatile unsigned char*)0x38)
#define PORTC (*(volatile unsigned char*)0x35)
#define PORTD (*(volatile unsigned char*)0x32)


#define GET_BIT(PORT,BIT)		((PORT >> BIT) & 1)
#define SET_BIT(PORT,BIT)		PORT = PORT | (1<<BIT)    // PORT |= (1<<BIT)    x=x+1   x+=1
#define CLR_BIT(PORT,BIT)		PORT = PORT &~ (1<<BIT)
#define TOG_BIT(PORT,BIT)       PORT = PORT^(1<<BIT)      // PORT ^= (1<<BIT) 


int main(void)
{
    /* Replace with your application code */
	
	
	 DDRA = 0xFF; // PORTA is OUTPUT  0b1111 1111
	 PORTA = 0x01; // PORTA is HIGH   0b1
	 DDRC = 0;
	 PORTC = 0xFF;
	 DDRB = 0xFF;
	 PORTB = 0x01;	
	 
	 unsigned char flag = 0;  
	

while (1)
{
		TOG_BIT(PORTB , 0);
		_delay_ms(300);

if(! GET_BIT(PINC , 0)){
		//while(! GET_BIT(PINC , 0));   // busywait
		
		
	if (flag == 0)                    // flag
	{
		PORTA = PORTA >> 1 ;
		flag = 1;
	}
		
		//_delay_ms(300);			  //delay
		
		if ( PORTA == 0)
		{
			PORTA = 0x01;
		}
}
if(GET_BIT(PINC , 1) == 0){
	   
		
		// while(! GET_BIT(PINC , 1));    // busywait
		//_delay_ms(300);				  // delay 
		
		if (flag == 0)                    // flag
		{
			PORTA <<= 1 ;
			flag = 1;
		}
	
		
		if ( PORTA == 0)
		{
			PORTA = 0x80;
		}
	}
		if (GET_BIT(PINC , 1) && GET_BIT(PINC , 0) )
		{
			flag = 0;
		}


	
}

}
