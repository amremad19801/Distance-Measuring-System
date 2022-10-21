/*******************************************************************************
 *
 * File Name: main.c
 *
 * Author: Amr Emad
 *
 * Description: Distance Measuring System
 *
 * Date: 10/4/2022
 *
 *******************************************************************************/

/*******************************************************************************
 *                                  Includes                                   *
 *******************************************************************************/

#include "icu.h"
#include "lcd.h"
#include <avr/io.h>	/* To use SREG register */
#include "ultrasonic.h"
#include <util/delay.h>	/* To use the delay functions */

/*******************************************************************************
 *                                    Code                                     *
 *******************************************************************************/

int main(void)
{
	/*******************************************************************************
	 *                              Initialization Code                             *
	 *******************************************************************************/

	/* Variable to store the Current Distance Value */
	uint16 currDist = 0;

	/* Initialize the drivers */

	/* Enable Global Interrupt I-Bit */
	SREG |= (1 << 7);

	/* Initialize the LCD driver */
	LCD_init();

	/* Initialize the Ultra-sonic sensor driver */
	Ultrasonic_init();

	LCD_displayStringRowColumn(0,0,"Distance =    cm");

	while(1)
	{
		/*******************************************************************************
		 *                               Application Code                              *
		 *******************************************************************************/

		/* Store the Current Distance Value */
		currDist = Utltrasonic_readDistance();

		LCD_moveCursor(0,11);
		if(currDist >= 100){
			LCD_integerToString(currDist);
		}
		else
		{
			LCD_integerToString(currDist);
			LCD_displayCharacter(' ');
		}
	}
}
