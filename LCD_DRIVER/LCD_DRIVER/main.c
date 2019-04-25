/*
 * LCD_DRIVER.c
 *
 * Created: 24/04/2019 05:25:44 م
 * Author : Unknown
 */ 

#include "MACROS.h"
#include "MicroConfig.h"
#include "STD_TYPES.h"
#include "LCD_Driver.h"
#include <util/delay.h>

int main(void)
{
	_delay_ms(20);
	LCD_init();
    /* Replace with your application code */
    while (1) 
    {
		LCD_goToRowColumn(1,0);
		LCD_displayInt(156);
		_delay_ms(1000);
    }
}

