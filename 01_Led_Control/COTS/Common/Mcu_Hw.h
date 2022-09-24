/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* Base Address for System control clcok */ 
#define SYSCTL_BASE_ADDRESS		   0x400FE000

/*  Clock  Control Regester */ 
#define SYSCTL_RCGCTIMER_REG     	(*((volatile uint32 *)(SYSCTL_BASE_ADDRESS + 0x604)))
#define SYSCTL_RCGCGPIO_REG			(*((volatile uint32 *)(SYSCTL_BASE_ADDRESS + 0x608)))
/* Base Address for GPIO Ports */ 
#define GPIO_POERTA_BASE_ADDRESS    0x40004000
#define GPIO_POERTB_BASE_ADDRESS    0x40005000
#define GPIO_POERTC_BASE_ADDRESS    0x40006000
#define GPIO_POERTD_BASE_ADDRESS    0x40007000
#define GPIO_POERTE_BASE_ADDRESS    0x40024000
#define GPIO_POERTF_BASE_ADDRESS    0x40025000

/* PORTA Regester definations */ 
#define GPIO_PORTA_DATA_REG 		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x3FC)))
#define GPIO_PORTA_DIR_REG  		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x400)))	
#define GPIO_PORTA_AFSEL_REG		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x420)))
#define GPIO_PORTA_ODR_REG    		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x50C)))
#define GPIO_PORTA_PUR_REG    		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x510)))
#define GPIO_PORTA_PDR_REG    		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x514)))
#define GPIO_PORTA_DEN_REG  		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x51C)))
#define GPIO_PORTA_LOCK_REG 		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x520)))
#define GPIO_PORTA_CR_REG   		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x524)))
#define GPIO_PORTA_AMSEL_REG		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x528)))
#define GPIO_PORTA_PCTL_REG 		(*((volatile uint32 *)(GPIO_POERTA_BASE_ADDRESS + 0x52C)))

/* PORTF  Regester Definations */ 
#define GPIO_PORTF_DATA_REG   		(*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x3FC)))
#define GPIO_PORTF_DIR_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x400)))
#define GPIO_PORTF_IS_REG           (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x404)))
#define GPIO_PORTF_IBE_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x408)))
#define GPIO_PORTF_IEV_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x40C)))
#define GPIO_PORTF_IM_REG           (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x410)))
#define GPIO_PORTF_RIS_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x414)))
#define GPIO_PORTF_MIS_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x418)))
#define GPIO_PORTF_ICR_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x41C)))
#define GPIO_PORTF_AFSEL_REG        (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x420)))
#define GPIO_PORTF_ODR_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x50C)))
#define GPIO_PORTF_PUR_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x510)))
#define GPIO_PORTF_PDR_REG          (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x514)))
#define GPIO_PORTF_SLR_REG      	(*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x518)))
#define GPIO_PORTF_DEN_REG    		(*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x51C)))
#define GPIO_PORTF_LOCK_REG   		(*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x520)))	
#define GPIO_PORTF_CR_REG           (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x524)))
#define GPIO_PORTF_AMSEL_REG        (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x528)))
#define GPIO_PORTF_PCTL_REG         (*((volatile uint32 *)(GPIO_POERTF_BASE_ADDRESS + 0x52C)))
	
/**************************************************************/
#define GPIO_OFFSET(x)		    (x<4?((0x40004000)+((x)*0x1000)):((0x40020000)+((x)*0x1000)))

#define GPIODATA(x)	    *((volatile uint32*)(GPIO_OFFSET(x)))
#define GPIODIR(x)	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0400))
#define GPIOIS(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0404))
#define GPIOIBE(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0408))
#define GPIOIEV(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x040C))
#define GPIOIM(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0410))
#define GPIORIS(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0414))
#define GPIOMIS(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0418))
#define GPIOICR(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x041C))
#define GPIOAFSEL(x)    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0420))
#define GPIODR2R(x) 	*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0500))
#define GPIODR4R(x) 	*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0504))
#define GPIODR8R(x)   	*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0508))
#define GPIOODR(x)  	*((volatile uint32*)(GPIO_OFFSET(x)+ 0x050C))
#define GPIOPUR(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0510))
#define GPIOPDR(x) 	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0514))
#define GPIOSLR(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0518))
#define GPIODEN(x) 	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x051C))
#define GPIOLOCK(x)	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0520))
#define GPIOCR(x)		*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0524))
/*****************************************************************************/

/* Base Address For Timers */ 
#define TIMR0_BASE_ADDRESS			0x40030000
/* Timer0 Regester Definations */ 

#define TIMER0_CFG_REG 				(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x000)))		
#define TIMER0_TAMR_REG     		(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x004)))
#define TIMER0_CTL_REG      		(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x00C)))
#define TIMER0_IMR_REG      		(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x018)))
#define TIMER0_TAILR_REG     		(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x028)))
#define TIMER0_ICR_REG      		(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x024)))
#define TIMER0_RIS_REG      		(*((volatile uint32 *)(TIMR0_BASE_ADDRESS + 0x01C)))
	
/* Base Address For NVIC */
#define NVIC_BASE_ADDRESS 	0xE000E000
/* NVIC Registers */ 
#define NVIC_EN0_REG            (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x100)))
#define NVIC_EN1_REG            (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x104)))
#define NVIC_EN2_REG            (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x108)))
#define NVIC_EN3_REG            (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x10C)))
#define NVIC_EN4_REG            (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x110)))
#define NVIC_DIS0_REG           (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x180)))
#define NVIC_DIS1_REG           (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x184)))
#define NVIC_DIS2_REG           (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x188)))
#define NVIC_DIS3_REG           (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x18C)))
#define NVIC_DIS4_REG           (*((volatile uint32 *)(NVIC_BASE_ADDRESS + 0x190)))


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/





