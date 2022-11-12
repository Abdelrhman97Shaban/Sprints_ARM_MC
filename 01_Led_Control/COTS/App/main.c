#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "RCC_interface.h"
#include "STK_interface.h"



#define ON_TIME			 	1       /* set on time	*/ 
#define OFF_TIME		 	3				/* SET off time */



void LOC_voidToggleLed(void);

int main(void)
{
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,2);
	
	MGPIO_VidSetPinDirection(GPIOA,PIN0,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_VidSetPinValue(GPIOA,PIN0,LOW);
	
	MSTK_voidInit();
	MSTK_voidSetIntervalSingle(ON_TIME*1000000, LOC_voidToggleLed);
	
	while(1)
	{
		
	}
}



void LOC_voidToggleLed()
{
	static u8 LOC_u8PinState = 0;
	LOC_u8PinState = MGPIO_u8GetPinValue(GPIOA, PIN0);
	if ( LOC_u8PinState == 0)
	{
		MGPIO_VidSetPinValue(GPIOA,PIN0,HIGH);
		MSTK_voidSetIntervalSingle(ON_TIME*1000000, LOC_voidToggleLed);
	}
	else
	{
		MGPIO_VidSetPinValue(GPIOA,PIN0,LOW);
		MSTK_voidSetIntervalSingle(OFF_TIME*1000000, LOC_voidToggleLed);
	}
}

