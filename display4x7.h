/* 
 * File: display4x7.h
 * Author: Samuel Muñoz Aguilar
 * Comments:
 * Revision history: 
 */

#ifndef XC_DISPLAY_4X7_H
#define	XC_DISPLAY_4X7_H

#include <xc.h>


/**
 * @brief Initializes the state of pins, attaches the timer interrupt to
 * the callback function and starts the timer.
 * Timer must be initialized before this function.
 * 
 * @notes
 *	Timer's recommended configuration:
 *		+ Control mode: Roll over pulse
 *		+ Start/Reset Option: Software control
 *		+ Enable clock sync: No (to run even with the processor asleep).
 *		+ Period: 5 ms
 *		+ Callback Function Rate: 0
 */
void DISPLAY4x7_Initialize(void);


/**
 * @brief Prints a positive integer in the 4 digits display.
 * @param n Number between 0 and 9999.
 */
void DISPLAY4x7_Print(uint16_t n);


#endif	/* XC_DISPLAY_4X7_H */

