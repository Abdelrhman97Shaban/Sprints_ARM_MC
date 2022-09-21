/**********************************************************************************************************************

*  FILE DESCRIPTION
*  -------------------------------------------------------------------------------------------------------------------
*         File:  Dio_Private.h
*       Module:  DIO
*
*  Description:      
*  
*********************************************************************************************************************/

#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

/**********************************************************************************************************************
* INCLUDES
*********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
*  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/


/**********************************************************************************************************************
*  GLOBAL FUNCTION MACROS
*********************************************************************************************************************/


/**********************************************************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
*********************************************************************************************************************/

/**********************************************************************************************************************
*  GLOBAL DATA PROTOTYPES
*********************************************************************************************************************/
typedef      uint8   COMMIT_Pins;			
typedef      uint8   AlternativePort;	
typedef      uint8   Port_Control;	
typedef      uint8   Port_Dir;	
typedef      uint8   DIO_PortValue;	


typedef enum
{
	Port_A	= 	0x01,
	Port_B	= 	0x02,
	Port_C   =	0X04,
	Port_D   = 	0X08,
	Port_E   = 	0X10,
	Port_F	= 	0X20
	
} CRGCGPIO_Port;


typedef  enum
{
	LOW  =	 0,
	HIGH = 	 1
} DIO_PinLevel;

typedef enum
{
	PIN0 ,
	PIN1 ,
	PIN2 ,
	PIN3 ,
	PIN4 ,
	PIN5 ,
	PIN6 ,
	PIN7 
}DIO_Channel;

typedef enum
{
	PortA,
	PortB,
	PortC,
	PortD,
	PortE,
	PortF
} DIO_Port;


typedef enum
{
	NORMAL_MODE ,
	Alternative_MODE
} PortPinMode;

typedef enum
{
	INPUT ,
	OUTPUT 
} PortPinDirection;

typedef enum
{
	PULL_UP ,
	PULL_DOWN ,
	OPEN_DRAIN
} PortPinInternalAttach;

typedef enum
{
	Current_2mA,
	Current_4mA,
	Current_8mA
}PortPinOutputCurrent;

typedef struct 
{
	DIO_Port   	 Port;
	DIO_Channel  Pin;
	DIO_PinLevel level;
	
}DIO_PinConfig;




/**********************************************************************************************************************
*  GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************************/


#endif  /* DIO_PRIVATE_H */

/**********************************************************************************************************************
*  END OF FILE: Dio_Private.h
*********************************************************************************************************************/
