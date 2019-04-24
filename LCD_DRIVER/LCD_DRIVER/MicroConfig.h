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

	#define PORTD_DIRREG_ADDRESS			((volatile uint8*)(0x31))
	#define PORTD_OUTPUTREG_ADDRESS			((volatile uint8*)(0x32))
	#define PORTD_INPUTMODE_ADDRESS			((volatile uint8*)(0x32))
	#define PORTD_INPUTREAD_ADDRESS			((volatile uint8*)(0x30))
	#define PORTD_OUTPUTBLOCK_ADDRESS		((volatile uint8*)(0x30))



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

	#define PORTD_DIRREG					(*PORTD_DIRREG_ADDRESS)
	#define PORTD_OUTPUTREG					(*PORTD_OUTPUTREG_ADDRESS)
	#define PORTD_INPUTMODE					(*PORTD_INPUTMODE_ADDRESS)
	#define PORTD_INPUTREAD					(*PORTD_INPUTREAD_ADDRESS)
	#define PORTD_OUTPUTBLOCK				(*PORTD_OUTPUTBLOCK_ADDRESS)



	/*PortA*/
	#define	PA0		0
	#define PA1		1
	#define	PA2		2
	#define PA3		3
	#define	PA4		4
	#define PA5		5
	#define	PA6		6
	#define PA7		7
	
	/*DDRA*/
	#define	DDRA0		0
	#define DDRA1		1
	#define	DDRA2		2
	#define DDRA3		3
	#define	DDRA4		4
	#define DDRA5		5
	#define	DDRA6		6
	#define DDRA7		7
	
	/*PINA*/
	#define	PINA0		0
	#define PINA1		1
	#define	PINA2		2
	#define PINA3		3
	#define	PINA4		4
	#define PINA5		5
	#define	PINA6		6
	#define PINA7		7
	
	/*PortB*/
	#define	PB0		0
	#define PB1		1
	#define	PB2		2
	#define PB3		3
	#define	PB4		4
	#define PB5		5
	#define	PB6		6
	#define PB7		7
	
	/*DDRB*/
	#define	DDRB0		0
	#define DDRB1		1
	#define	DDRB2		2
	#define DDRB3		3
	#define	DDRB4		4
	#define DDRB5		5
	#define	DDRB6		6
	#define DDRB7		7
	
	/*PINB*/
	#define	PINB0		0
	#define PINB1		1
	#define	PINB2		2
	#define PINB3		3
	#define	PINB4		4
	#define PINB5		5
	#define	PINB6		6
	#define PINB7		7
	
	/*PortC*/
	#define	PC0		0
	#define PC1		1
	#define	PC2		2
	#define PC3		3
	#define	PC4		4
	#define PC5		5
	#define	PC6		6
	#define PC7		7
	
	/*DDRC*/
	#define	DDRC0		0
	#define DDRC1		1
	#define	DDRC2		2
	#define DDRC3		3
	#define	DDRC4		4
	#define DDRC5		5
	#define	DDRC6		6
	#define DDRC7		7
	
	/*PINC*/
	#define	PINC0		0
	#define PINC1		1
	#define	PINC2		2
	#define PINC3		3
	#define	PINC4		4
	#define PINC5		5
	#define	PINC6		6
	#define PINC7		7
	
	/*PortD*/
	#define	PD0		0
	#define PD1		1
	#define	PD2		2
	#define PD3		3
	#define	PD4		4
	#define PD5		5
	#define	PD6		6
	#define PD7		7
	
	/*DDRA*/
	#define	DDRD0		0
	#define DDRD1		1
	#define	DDRD2		2
	#define DDRD3		3
	#define	DDRD4		4
	#define DDRD5		5
	#define	DDRD6		6
	#define DDRD7		7
	
	/*PINA*/
	#define	PIND0		0
	#define PIND1		1
	#define	PIND2		2
	#define PIND3		3
	#define	PIND4		4
	#define PIND5		5
	#define	PIND6		6
	#define PIND7		7



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
