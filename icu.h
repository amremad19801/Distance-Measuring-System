/*******************************************************************************
 *
 * Module: ICU
 *
 * File Name: icu.h
 *
 * Description: Header file for the AVR ICU driver
 *
 * Author: Amr Emad
 *
 *******************************************************************************/

#ifndef ICU_H_
#define ICU_H_

/*******************************************************************************
 *                                  Includes                                   *
 *******************************************************************************/

#include "std_types.h"

/*******************************************************************************
 *                              Types Declaration                              *
 *******************************************************************************/

typedef enum
{
	NO_CLOCK,
	F_CPU_CLOCK,
	F_CPU_8,
	F_CPU_64,
	F_CPU_256,
	F_CPU_1024
}Icu_Clock;

typedef enum
{
	FALLING,
	RISING
}Icu_EdgeType;

typedef struct
{
	Icu_Clock clock;
	Icu_EdgeType edge;
}Icu_ConfigType;

/*******************************************************************************
 *                             Functions Prototypes                            *
 *******************************************************************************/

/*
 * Description :
 * Initialize the ICU:
 * 1. Set the required clock.
 * 2. Set the required edge detection.
 * 3. Enable the Input Capture Interrupt.
 * 4. Initialize Timer1 Registers.
 */
void Icu_init(const Icu_ConfigType * Config_Ptr);

/*
 * Description :
 * Set the Call Back function address.
 */
void Icu_setCallBack(void(*a_ptr)(void));

/*
 * Description :
 * Set the required edge detection.
 */
void Icu_setEdgeDetectionType(const Icu_EdgeType edgeType);

/*
 * Description :
 * Get the Timer1 Value when the input is captured.
 * The value is stored at Input Capture Register ICR1.
 */
uint16 Icu_getInputCaptureValue(void);

/*
 * Description :
 * Clear the Timer1 Value to start count from ZERO.
 */
void Icu_clearTimerValue(void);

/*
 * Description :
 * Disable the Timer1 to stop the ICU.
 */
void Icu_DeInit(void);

#endif /* ICU_H_ */
