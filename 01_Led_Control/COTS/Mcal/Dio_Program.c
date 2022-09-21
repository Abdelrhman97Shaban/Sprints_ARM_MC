/**********************************************************************************************************************
*  FILE DESCRIPTION
*  -----------------------------------------------------------------------------------------------------------------*/
/**      \file  Dio_Program.c
*        \brief  
*
*      \details  
*
*
*********************************************************************************************************************/

/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/

#include "Mcu_Hw.h" 
#include "Bit_Math.h"
#include "Std_Types.h" 
#include "Dio_Interface.h"
#include "Dio_Private.h"
#include "Dio_Cfg.h"


/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
*  LOCAL DATA 
*********************************************************************************************************************/

/**********************************************************************************************************************
*  GLOBAL DATA
*********************************************************************************************************************/

/**********************************************************************************************************************
*  LOCAL FUNCTION PROTOTYPES
*********************************************************************************************************************/

/**********************************************************************************************************************
*  LOCAL FUNCTIONS
*********************************************************************************************************************/

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
*********************************************************************************************************************/

void DIO_PortInit(PortConfigTypes PortConfig)
{
	SYSCTL_RCGCGPIO_REG  |= PortConfig.Port_clock;                  
	while ((SYSCTL_RCGCGPIO_REG &  PortConfig.Port_clock  ) == 0)  
	GPIO_PORTF_LOCK_REG = 0x4C4F434B ;           
	GPIO_PORTF_CR_REG = PortConfig.CommitPins ;            
	GPIO_PORTF_PCTL_REG = PortConfig.PCTL;                    
	GPIO_PORTF_DIR_REG =  PortConfig.PortDirection;           
	GPIO_PORTF_AFSEL_REG = PortConfig.Port_Mode;    
	GPIO_PORTF_DEN_REG = 0xff;            
}

DIO_PinLevel DIO_ReadChannel(DIO_PinConfig ChannelID)
{
	DIO_PinLevel Level; 
	if (!(BIT_IS_CLR(GPIODATA(ChannelID.Port),ChannelID.Pin)))
	{
		Level = LOW;
	}
	else if ((BIT_IS_SET(GPIODATA(ChannelID.Port),ChannelID.Pin)))
	{
		Level = HIGH; 
	}
	
	return Level; 
}

void DIO_WriteChannel(DIO_PinConfig ChannelID)
{
	
	if ( ChannelID.level == HIGH )
	{
		SET_BIT(GPIODATA(ChannelID.Port),ChannelID.Pin);
	}else
	{
		CLR_BIT(GPIODATA(ChannelID.Port),ChannelID.Pin);
	}
}

DIO_PortValue DIO_ReadPort(DIO_Port PortID)
{
	return GPIODATA(PortID);
}

void DIO_WritePort(DIO_Port PortID ,DIO_PortValue val)
{
	GPIODATA(PortID) = val;
}

DIO_PinLevel DIO_FlopChannel(DIO_PinConfig ChannelID)
{
	TOG_BIT(GPIODATA(ChannelID.Port),ChannelID.Pin);
	return DIO_ReadChannel(ChannelID);
}


/**********************************************************************************************************************
*  END OF FILE: FileName.c
*********************************************************************************************************************/
