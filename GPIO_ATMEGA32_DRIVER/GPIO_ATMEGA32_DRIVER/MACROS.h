/*
 * MACROS.h
 *
 * Created: 19/04/2019 02:02:08 م
 *  Author: Azazi
 */ 


#ifndef MACROS_H_
#define MACROS_H_

	/*Set a certain bit in a certain register*/
	#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
	/*Clear a certain bit in a certain register*/
	#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
	/*Toggle a certain bit in a certain register*/
	#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))
	/*Check if a certain bit in a certain register is set and return true if yes*/
	#define IS_BIT_SET(REG,BIT) (REG & (1<<BIT))
	/*Check if a certain bit in a certain register is cleared and return true if yes*/
	#define IS_BIT_CLEAR(REG,BIT) (!(REG & (1<<BIT)))
	


#endif /* MACROS_H_ */