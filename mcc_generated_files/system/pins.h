/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA6 aliases
#define PULSADOR_TRIS                 TRISAbits.TRISA6
#define PULSADOR_LAT                  LATAbits.LATA6
#define PULSADOR_PORT                 PORTAbits.RA6
#define PULSADOR_WPU                  WPUAbits.WPUA6
#define PULSADOR_OD                   ODCONAbits.ODCA6
#define PULSADOR_ANS                  ANSELAbits.ANSELA6
#define PULSADOR_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define PULSADOR_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define PULSADOR_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define PULSADOR_GetValue()           PORTAbits.RA6
#define PULSADOR_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define PULSADOR_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define PULSADOR_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define PULSADOR_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define PULSADOR_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define PULSADOR_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define PULSADOR_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define PULSADOR_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define POTENCIOMETRO_TRIS                 TRISAbits.TRISA7
#define POTENCIOMETRO_LAT                  LATAbits.LATA7
#define POTENCIOMETRO_PORT                 PORTAbits.RA7
#define POTENCIOMETRO_WPU                  WPUAbits.WPUA7
#define POTENCIOMETRO_OD                   ODCONAbits.ODCA7
#define POTENCIOMETRO_ANS                  ANSELAbits.ANSELA7
#define POTENCIOMETRO_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define POTENCIOMETRO_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define POTENCIOMETRO_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define POTENCIOMETRO_GetValue()           PORTAbits.RA7
#define POTENCIOMETRO_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define POTENCIOMETRO_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define POTENCIOMETRO_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define POTENCIOMETRO_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define POTENCIOMETRO_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define POTENCIOMETRO_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define POTENCIOMETRO_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define POTENCIOMETRO_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB0 aliases
#define DISPLAY_3_TRIS                 TRISBbits.TRISB0
#define DISPLAY_3_LAT                  LATBbits.LATB0
#define DISPLAY_3_PORT                 PORTBbits.RB0
#define DISPLAY_3_WPU                  WPUBbits.WPUB0
#define DISPLAY_3_OD                   ODCONBbits.ODCB0
#define DISPLAY_3_ANS                  ANSELBbits.ANSELB0
#define DISPLAY_3_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DISPLAY_3_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DISPLAY_3_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DISPLAY_3_GetValue()           PORTBbits.RB0
#define DISPLAY_3_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DISPLAY_3_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DISPLAY_3_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define DISPLAY_3_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define DISPLAY_3_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define DISPLAY_3_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define DISPLAY_3_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define DISPLAY_3_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 aliases
#define DISPLAY_2_TRIS                 TRISBbits.TRISB1
#define DISPLAY_2_LAT                  LATBbits.LATB1
#define DISPLAY_2_PORT                 PORTBbits.RB1
#define DISPLAY_2_WPU                  WPUBbits.WPUB1
#define DISPLAY_2_OD                   ODCONBbits.ODCB1
#define DISPLAY_2_ANS                  ANSELBbits.ANSELB1
#define DISPLAY_2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define DISPLAY_2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define DISPLAY_2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define DISPLAY_2_GetValue()           PORTBbits.RB1
#define DISPLAY_2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define DISPLAY_2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define DISPLAY_2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define DISPLAY_2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define DISPLAY_2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define DISPLAY_2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define DISPLAY_2_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define DISPLAY_2_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define BIT_A_TRIS                 TRISBbits.TRISB2
#define BIT_A_LAT                  LATBbits.LATB2
#define BIT_A_PORT                 PORTBbits.RB2
#define BIT_A_WPU                  WPUBbits.WPUB2
#define BIT_A_OD                   ODCONBbits.ODCB2
#define BIT_A_ANS                  ANSELBbits.ANSELB2
#define BIT_A_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define BIT_A_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define BIT_A_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define BIT_A_GetValue()           PORTBbits.RB2
#define BIT_A_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define BIT_A_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define BIT_A_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define BIT_A_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define BIT_A_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define BIT_A_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define BIT_A_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define BIT_A_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 aliases
#define BIT_D_TRIS                 TRISBbits.TRISB3
#define BIT_D_LAT                  LATBbits.LATB3
#define BIT_D_PORT                 PORTBbits.RB3
#define BIT_D_WPU                  WPUBbits.WPUB3
#define BIT_D_OD                   ODCONBbits.ODCB3
#define BIT_D_ANS                  ANSELBbits.ANSELB3
#define BIT_D_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define BIT_D_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define BIT_D_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define BIT_D_GetValue()           PORTBbits.RB3
#define BIT_D_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define BIT_D_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define BIT_D_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define BIT_D_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define BIT_D_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define BIT_D_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define BIT_D_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define BIT_D_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 aliases
#define DISPLAY_1_TRIS                 TRISBbits.TRISB4
#define DISPLAY_1_LAT                  LATBbits.LATB4
#define DISPLAY_1_PORT                 PORTBbits.RB4
#define DISPLAY_1_WPU                  WPUBbits.WPUB4
#define DISPLAY_1_OD                   ODCONBbits.ODCB4
#define DISPLAY_1_ANS                  ANSELBbits.ANSELB4
#define DISPLAY_1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define DISPLAY_1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define DISPLAY_1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define DISPLAY_1_GetValue()           PORTBbits.RB4
#define DISPLAY_1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define DISPLAY_1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define DISPLAY_1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define DISPLAY_1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define DISPLAY_1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define DISPLAY_1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define DISPLAY_1_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define DISPLAY_1_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define DISPLAY_4_TRIS                 TRISBbits.TRISB5
#define DISPLAY_4_LAT                  LATBbits.LATB5
#define DISPLAY_4_PORT                 PORTBbits.RB5
#define DISPLAY_4_WPU                  WPUBbits.WPUB5
#define DISPLAY_4_OD                   ODCONBbits.ODCB5
#define DISPLAY_4_ANS                  ANSELBbits.ANSELB5
#define DISPLAY_4_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define DISPLAY_4_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define DISPLAY_4_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define DISPLAY_4_GetValue()           PORTBbits.RB5
#define DISPLAY_4_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define DISPLAY_4_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define DISPLAY_4_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define DISPLAY_4_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define DISPLAY_4_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define DISPLAY_4_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define DISPLAY_4_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define DISPLAY_4_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RB6 aliases
#define BIT_C_TRIS                 TRISBbits.TRISB6
#define BIT_C_LAT                  LATBbits.LATB6
#define BIT_C_PORT                 PORTBbits.RB6
#define BIT_C_WPU                  WPUBbits.WPUB6
#define BIT_C_OD                   ODCONBbits.ODCB6
#define BIT_C_ANS                  ANSELBbits.ANSELB6
#define BIT_C_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define BIT_C_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define BIT_C_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define BIT_C_GetValue()           PORTBbits.RB6
#define BIT_C_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define BIT_C_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define BIT_C_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define BIT_C_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define BIT_C_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define BIT_C_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define BIT_C_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define BIT_C_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 aliases
#define BIT_B_TRIS                 TRISBbits.TRISB7
#define BIT_B_LAT                  LATBbits.LATB7
#define BIT_B_PORT                 PORTBbits.RB7
#define BIT_B_WPU                  WPUBbits.WPUB7
#define BIT_B_OD                   ODCONBbits.ODCB7
#define BIT_B_ANS                  ANSELBbits.ANSELB7
#define BIT_B_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define BIT_B_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define BIT_B_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define BIT_B_GetValue()           PORTBbits.RB7
#define BIT_B_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define BIT_B_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define BIT_B_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define BIT_B_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define BIT_B_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define BIT_B_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define BIT_B_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define BIT_B_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RE2 aliases
#define RED_LED_TRIS                 TRISEbits.TRISE2
#define RED_LED_LAT                  LATEbits.LATE2
#define RED_LED_PORT                 PORTEbits.RE2
#define RED_LED_WPU                  WPUEbits.WPUE2
#define RED_LED_OD                   ODCONEbits.ODCE2
#define RED_LED_ANS                  ANSELEbits.ANSELE2
#define RED_LED_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define RED_LED_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define RED_LED_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define RED_LED_GetValue()           PORTEbits.RE2
#define RED_LED_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define RED_LED_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define RED_LED_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define RED_LED_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define RED_LED_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define RED_LED_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define RED_LED_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define RED_LED_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/