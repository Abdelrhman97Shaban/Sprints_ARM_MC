/**********************************************************************************************************************

*  FILE DESCRIPTION
*  -------------------------------------------------------------------------------------------------------------------
*         File:  GPTM_Private.h 
*       Module:  GPTM
*
*  Description:  <Write File DESCRIPTION here>     
*  
*********************************************************************************************************************/

#ifndef GPTM_PRIVATE_H
#define GPTM_PRIVATE_H

/**********************************************************************************************************************
* INCLUDES
*********************************************************************************************************************/


/**********************************************************************************************************************
*  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/
#define GPTM_CH_MODE_ONSHOT 		0X01
#define GPTM_CH_MODE_CONTINUOUS		0X02
/**********************************************************************************************************************
*  GLOBAL FUNCTION MACROS
*********************************************************************************************************************/


/**********************************************************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
*********************************************************************************************************************/


/**********************************************************************************************************************
*  GLOBAL DATA PROTOTYPES
*********************************************************************************************************************/

typedef uint32 GPTM_ValueType;

typedef enum
{
    TIMER_16_32_TIMER0 ,
	TIMER_16_32_TIMER1 ,
	TIMER_16_32_TIMER2 ,
	TIMER_16_32_TIMER3 ,
	TIMER_16_32_TIMER4 ,
	TIMER_16_32_TIMER5 ,
    TIMER_32_64_TIMER0 ,
	TIMER_32_64_TIMER1 ,
	TIMER_32_64_TIMER2 ,
	TIMER_32_64_TIMER3 ,
	TIMER_32_64_TIMER4 ,
	TIMER_32_64_TIMER5 , 

    NUMBER_GPT_CHANNELS=12
	
}GPTM_ChannelType;


typedef enum
{
    GPTM_MODE_NORMAL,
    GPTM_MODE_SLEEP
 
}GPTM_ModeType;


typedef enum
{
    GPT_PREDEF_TIMER_1US_16BIT,
    GPT_PREDEF_TIMER_1US_24BIT,
    GPT_PREDEF_TIMER_1US_32BIT,
    GPT_PREDEF_TIMER_100US_32BIT
}GPTM_PredefTimerType;


/**********************************************************************************************************************
*  GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************************/


#endif  /* GPTM_PRIVATE_H */

/**********************************************************************************************************************
*  END OF FILE: GPTM_Private.h
*********************************************************************************************************************/