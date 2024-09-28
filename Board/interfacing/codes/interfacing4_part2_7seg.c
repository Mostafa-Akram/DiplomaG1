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

#define SEG_PORT PORTC

unsigned char Seg_Arr[]={0x3F, 0x06 }; // complete the array
	
void seg_display(unsigned char num){
	SEG_PORT = Seg_Arr[num];
}


int main(void)
{
    /* Replace with your application code */
	
	
	 
	 DDRC = 0xFF;
	 PORTC = 0xFF;
	 DDRB = 0xFF;
	 PORTB = 0x01;	
	 
	 _delay_ms( 1000 );
	  
	 seg_display(0);
	 _delay_ms( 1000 );
	 seg_display(1);
while (1)
{



	
}

}
