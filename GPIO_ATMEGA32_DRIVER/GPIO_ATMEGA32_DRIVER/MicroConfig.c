/*
 * MicroConfig.c
 *
 * Created: 19/04/2019 09:07:43 م
 *  Author: Azazi
 */ 
#include "MicroConfig.h"

void GPIO_InputConfig(volatile uint8* DIRREG_address,volatile uint8* inputMode_address,Input_Mode Mode,uint8 pin_number){
	CLEAR_BIT(*DIRREG_address,pin_number);
	CLEAR_BIT(*inputMode_address,pin_number);
	*inputMode_address|=(Mode<<pin_number);
}
void GPIO_OutputConfig(volatile uint8* DIRREG_address,volatile uint8* outputMode_address,Output_Mode Mode,uint8 pin_number){
	SET_BIT(*DIRREG_address,pin_number);
	CLEAR_BIT(*outputMode_address,pin_number);
	*outputMode_address|=(Mode<<pin_number);
}
void Digital_Write(volatile uint8* outputREG_address,uint8 pin_number,IO_Signal signal){
	CLEAR_BIT(*outputREG_address,pin_number);
	*outputREG_address|=(signal<<pin_number);
}
IO_Signal Digital_Read(volatile uint8 * inputREG_address, uint8 pin_number){
	if(IS_BIT_SET(*inputREG_address,pin_number)){
		return HIGH;
	}
	return LOW;
}