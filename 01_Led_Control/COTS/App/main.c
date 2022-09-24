#include "Dio_Config.h" 
#include "GPTM_Config.h"
#include "NVIC_Config.h"

int main (void) 
{
	DIO_PortConfig Port_F; 
  Port_F.Port_Clock   = CRGCGPIO_PORTF;
	Port_F.Commit_Pins  = 0xff; 
	Port_F.Port_Ctrl 		= 0;
	Port_F.Port_Dir			= 0x0f; 
	Port_F.Port_Mode 		= 0; 
	Dio_PortInit(&Port_F);
  GPTM_Delay(TIME_ON);	
	
}

	
void TIMER_Handler()
{
	 if (TIMER0_RIS_REG & 0x01)
	 {
		 TOG_BIT(GPIO_PORTF_DATA_REG,2);
		 GPTM_Delay(TIME_OFF);	
		 TIMER0_ICR_REG = 0x1; 
	 }
}

