#include "mcc_generated_files/system/system.h"
#include "display4x7.h"

/**
 * Necessary code for the bootloader.
 */
#include <stdint.h> 
#ifdef __XC8__ 
#include <xc.h> 
#endif 
volatile const uint16_t 
#ifdef __XC8__ 
__at(0x1FFFE) 
#endif 
applicationFooter __attribute__((used, section("application_footer"))) = 0xFFFF;

/**
 * This function changes the high priority interrupt vector to address 2008h
 * due to the space allocated to the bootloader.
 * It's important to set the new address in the _interrupt() function too
 * (see the INTERRUPT_InterruptManager() function of the MCC generated file).
 */
void remapInterruptVector(void)
{
	INTERRUPT_GlobalInterruptDisable();
	IVTLOCK = 0x55;
	IVTLOCK = 0xAA;
	IVTLOCKbits.IVTLOCKED = 0;
	
	IVTBASEU = 0;
	IVTBASEH = 0x20;
	IVTBASEL = 0x08;
	
	IVTLOCK = 0x55;
	IVTLOCK = 0xAA;
	IVTLOCKbits.IVTLOCKED = 1;
}

/**
 * Main function
 */
int main(void)
{
    SYSTEM_Initialize();
	remapInterruptVector();
	
	DISPLAY4x7_Initialize();
    INTERRUPT_GlobalInterruptEnable();
	
    while(1)
    {
		uint16_t adc = ADCC_GetSingleConversion(POTENCIOMETRO);
		DISPLAY4x7_Print(adc);
		
		__delay_ms(150);
    }
}
