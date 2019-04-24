/*
 * GPIO_ATMEGA32_DRIVER.c
 *
 * Created: 19/04/2019 01:47:31 م
 * Author : Azazi
 */ 

#include "MicroConfig.h"
#include "STD_TYPES.h"
#include "MACROS.h"
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	GPIO_OutputConfig(PORTA_DIRREG_ADDRESS,PORTA_OUTPUTBLOCK_ADDRESS,OUT_PASS,0);
    while (1) 
    {
		TOGGLE_BIT(PORTA_OUTPUTREG,0);
		_delay_ms(500);
    }
}