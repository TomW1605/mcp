//Example ATmega2560 Project
//File: ATmega2560Project.c
//Author: Robert Howie
//Created: 26 February 2016
//An example file for second year mechatronics project

//include this .c file's header file
#include "Robot.h"

//static function prototypes, functions only called in this file


static uint8_t leds = 0x00;

int main(void)
{
	DDRC = 0xFF;//put PORTC into output mode
	PORTC = leds;
	while(1)//main loop
	{
		//origonal
		/*_delay_ms(500);     //500 millisecond delay
		PORTC |= (1<<PA3);  // note here PA3 is just an alias for the number 3
		// this line is equivalent to PORTC = PORTC | 0b00001000   which writes a HIGH to pin 3 of PORTC
		_delay_ms(500);
		PORTC &= ~(1<<PA3); // this line is equivalent to PORTC = PORTC & (0b11110111)  which writes a LOW to pin 3 of PORTC*/
		
		//Q6
		/*PORTC = (1<<PA2);
		_delay_ms(500);
		PORTC = (1<<PA5);
		_delay_ms(500);*/
		
		//Q7
		PORTC = (1<<PA0);
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		PORTC <<= 1;
		_delay_ms(500);
		
		PORTC >>= 1;
		_delay_ms(500);
		PORTC >>= 1;
		_delay_ms(500);
		PORTC >>= 1;
		_delay_ms(500);
		PORTC >>= 1;
		_delay_ms(500);
		PORTC >>= 1;
		_delay_ms(500);
		PORTC >>= 1;
		_delay_ms(500);
		
	}
	return(1);
}//end main

//0b00001000
//0b11110111
//0b00000000