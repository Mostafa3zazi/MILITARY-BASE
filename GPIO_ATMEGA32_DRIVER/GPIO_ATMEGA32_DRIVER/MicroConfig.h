/*
 * MicroConfig.h
 *
 * Created: 19/04/2019 07:55:27 م
 *  Author: Azazi
 */ 


#ifndef MICROCONFIG_H_
#define MICROCONFIG_H_
	#define F_CPU	(1000000U)
	#include "STD_TYPES.h"
	#include "MACROS.h"
	
	#define PORTA_DIRREG_ADDRESS			((volatile uint8*)(0x3A))
	#define PORTA_OUTPUTREG_ADDRESS			((volatile uint8*)(0x3B))
	#define PORTA_INPUTMODE_ADDRESS			((volatile uint8*)(0x3B))
	#define PORTA_INPUTREAD_ADDRESS			((volatile uint8*)(0x39))
	#define PORTA_OUTPUTBLOCK_ADDRESS		((volatile uint8*)(0x39))
	
	#define PORTB_DIRREG_ADDRESS			((volatile uint8*)(0x37))
	#define PORTB_OUTPUTREG_ADDRESS			((volatile uint8*)(0x38))
	#define PORTB_INPUTMODE_ADDRESS			((volatile uint8*)(0x38))
	#define PORTB_INPUTREAD_ADDRESS			((volatile uint8*)(0x36))
	#define PORTB_OUTPUTBLOCK_ADDRESS		((volatile uint8*)(0x36))
	
	#define PORTC_DIRREG_ADDRESS			((volatile uint8*)(0x34))
	#define PORTC_OUTPUTREG_ADDRESS			((volatile uint8*)(0x35))
	#define PORTC_INPUTMODE_ADDRESS			((volatile uint8*)(0x35))
	#define PORTC_INPUTREAD_ADDRESS			((volatile uint8*)(0x33))
	#define PORTC_OUTPUTBLOCK_ADDRESS		((volatile uint8*)(0x33))
	
	
	
	#define PORTA_DIRREG					(*PORTA_DIRREG_ADDRESS)
	#define PORTA_OUTPUTREG					(*PORTA_OUTPUTREG_ADDRESS)
	#define PORTA_INPUTMODE					(*PORTA_INPUTMODE_ADDRESS)
	#define PORTA_INPUTREAD					(*PORTA_INPUTREAD_ADDRESS)
	#define PORTA_OUTPUTBLOCK				(*PORTA_OUTPUTBLOCK_ADDRESS)
	
	#define PORTB_DIRREG					(*PORTB_DIRREG_ADDRESS)
	#define PORTB_OUTPUTREG					(*PORTB_OUTPUTREG_ADDRESS)
	#define PORTB_INPUTMODE					(*PORTB_INPUTMODE_ADDRESS)
	#define PORTB_INPUTREAD					(*PORTB_INPUTREAD_ADDRESS)
	#define PORTB_OUTPUTBLOCK				(*PORTB_OUTPUTBLOCK_ADDRESS)
	
	#define PORTC_DIRREG					(*PORTC_DIRREG_ADDRESS)
	#define PORTC_OUTPUTREG					(*PORTC_OUTPUTREG_ADDRESS)
	#define PORTC_INPUTMODE					(*PORTC_INPUTMODE_ADDRESS)
	#define PORTC_INPUTREAD					(*PORTC_INPUTREAD_ADDRESS)
	#define PORTC_OUTPUTBLOCK				(*PORTC_OUTPUTBLOCK_ADDRESS)
	
	typedef enum {
			INPUT=0,
			OUTPUT=1,
		}Pin_Mode;
		
	typedef enum{
			FLOAT_MODE=0,
			PULLUP_MODE=1,
		}Input_Mode;
	
	typedef enum {
		OUT_PASS=0,
		OUT_BLOCK=1,
	}Output_Mode;
	
	typedef enum {
			HIGH=1,
			LOW=0,
		}IO_Signal;
	
	
	void GPIO_InputConfig(volatile uint8* DIRREG_address,volatile uint8* inputMode_address,Input_Mode Mode,uint8 pin_number);
	void GPIO_OutputConfig(volatile uint8* DIRREG_address,volatile uint8* outputMode_address,Output_Mode Mode,uint8 pin_number);
	void Digital_Write(volatile uint8* outputREG_address,uint8 pin_number,IO_Signal signal);
	IO_Signal Digital_Read(volatile uint8 * inputREG_address, uint8 pin_number);

#endif /* MICROCONFIG_H_ */