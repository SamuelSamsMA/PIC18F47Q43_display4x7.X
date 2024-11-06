/* 
 * File: display4x7.c
 * Author: Samuel Muñoz Aguilar
 * Comments:
 * Revision history: 
 */


#include <xc.h>
#include "display4x7.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/timer/tmr6.h"


void DISPLAY4x7_Interrupt(void);
void DISPLAY4x7_SetOneDigit(uint8_t n);


volatile uint8_t uni, dec, cen, umi;


void DISPLAY4x7_Initialize(void)
{
	uni = dec = cen = umi = 0;
	DISPLAY4x7_SetOneDigit(0);
	DISPLAY_1_LAT = 1;
	DISPLAY_2_LAT = 0;
	DISPLAY_3_LAT = 0;
	DISPLAY_4_LAT = 0;
	
	TMR6_OverflowCallbackRegister(DISPLAY4x7_Interrupt);
	TMR6_Start();
}


void DISPLAY4x7_Print(uint16_t n)
{
	if (n > 9999)
		return;
	
	umi = (uint8_t)(n / 1000);
	n -= umi * 1000;
	cen = (uint8_t)(n / 100);
	n -= cen * 100;
	dec = (uint8_t)(n / 10);
	uni = (uint8_t)(n - (dec * 10));
}


/**
 * @brief Prints one digit at a time in all four positions continuously.
 * 
 * @notes This function has to be called periodically by the timer assigned
 * for this display.
 */
void DISPLAY4x7_Interrupt(void)
{
	if (DISPLAY_1_PORT)
	{ // Shifts to the next display
		DISPLAY_1_LAT = 0;
		DISPLAY4x7_SetOneDigit(dec);
		DISPLAY_2_LAT = 1;
	}
	else if (DISPLAY_2_PORT)
	{ // Shifts to the next display
		DISPLAY_2_LAT = 0;
		DISPLAY4x7_SetOneDigit(cen);
		DISPLAY_3_LAT = 1;
	}
	else if (DISPLAY_3_PORT)
	{ // Shifts to the next display
		DISPLAY_3_LAT = 0;
		DISPLAY4x7_SetOneDigit(umi);
		DISPLAY_4_LAT = 1;
	}
	else if (DISPLAY_4_PORT)
	{ // Shifts to the next display
		DISPLAY_4_LAT = 0;
		DISPLAY4x7_SetOneDigit(uni);
		DISPLAY_1_LAT = 1;
	}
}

/**
 * @brief Writes a nibble at the BIT_X_LAT outputs.
 * @param n Four bit number.
 */
void DISPLAY4x7_SetOneDigit(uint8_t n)
{
	(n & 0x01) ? (BIT_A_LAT = 1) : (BIT_A_LAT = 0);
	(n & 0x02) ? (BIT_B_LAT = 1) : (BIT_B_LAT = 0);
	(n & 0x04) ? (BIT_C_LAT = 1) : (BIT_C_LAT = 0);
	(n & 0x08) ? (BIT_D_LAT = 1) : (BIT_D_LAT = 0);
}
