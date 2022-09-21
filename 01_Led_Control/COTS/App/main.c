#include "Dio_Interface.h"
#include "Dio_Private.h" 
#include "Dio_Cfg.h" 
#include "GPTM_Cfg.h" 
#include "NVIC_Cfg.h" 




int main()
{ 
	PortConfigTypes r1;
  r1.Port_clock = PORT_F;
	r1.CommitPins = 0xff;
	r1.PCTL = 0;
	r1.PortDirection = 0x0f;
	r1.Port_Mode = 0;
  DIO_PortInit(r1);
  GPTM_Delay(TIME_ON);	
	
}


TIMER0A_Handler()
{
	 if (TIMER0_RIS_REG & 0x01)
	 {
		 TOGGLE_BIT(GPIO_PORTF_DATA_REG,2);
		 GPTM_Delay(TIME_OFF);	
		 TIMER0_ICR_REG = 0x1; 
	 }
}