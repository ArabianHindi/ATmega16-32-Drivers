/******************************************************************************************************
File Name	: PWM.h
Author		: Sherif Beshr
Description : source file for the DC Motor driver
*******************************************************************************************************/

#ifndef PWM_H_
#define PWM_H_

#include "std_types.h"

/***************************************************************************************************
 *                                	Function Prototype                                  		   *
 ***************************************************************************************************/

/*
 * Description :
 * Function responsible to calculate the ON_time of PWM with the duty cycle.
 */
void PWM_Timer0_Start(uint8 duty_cycle);

#endif /* PWM_H_ */
