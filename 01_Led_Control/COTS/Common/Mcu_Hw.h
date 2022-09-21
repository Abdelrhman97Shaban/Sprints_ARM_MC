/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  -
 *
 *  Description:  Contain definations of registers    
 *  
 *********************************************************************************************************************/

#ifndef MCU_HW_H
#define MCU_HW_H

#define SYSCTL_RCGCGPIO_REG       (*((volatile uint32 *)0x400FE608))

/************************************************************************/
/* GPIO A REGISTERS                                                     */
/************************************************************************/
#define GPIO_PORTA_DATA_REG       (*((volatile uint32 *)0x400043FC))
#define GPIO_PORTA_DIR_REG        (*((volatile uint32 *)0x40004400))
#define GPIO_PORTA_AFSEL_REG      (*((volatile uint32 *)0x40004420))
#define GPIO_PORTA_ODR_R      	  (*((volatile uint32 *)0x4000450C))
#define GPIO_PORTA_PUR_R          (*((volatile uint32 *)0x40004510))
#define GPIO_PORTA_PDR_R          (*((volatile uint32 *)0x40004514))
#define GPIO_PORTA_DEN_REG        (*((volatile uint32 *)0x4000451C))
#define GPIO_PORTA_LOCK_REG       (*((volatile uint32 *)0x40004520))
#define GPIO_PORTA_CR_REG         (*((volatile uint32 *)0x40004524))
#define GPIO_PORTA_AMSEL_REG      (*((volatile uint32 *)0x40004528))
#define GPIO_PORTA_PCTL_REG       (*((volatile uint32 *)0x4000452C))

/************************************************************************/
/* GPIO F REGISTERS                                                     */
/************************************************************************/
#define GPIO_PORTF_DATA_REG       (*((volatile uint32 *)0x400253FC))
#define GPIO_PORTF_DIR_REG        (*((volatile uint32 *)0x40025400))
#define GPIO_PORTF_IS_R           (*((volatile uint32 *)0x40025404))
#define GPIO_PORTF_IBE_R          (*((volatile uint32 *)0x40025408))
#define GPIO_PORTF_IEV_R          (*((volatile uint32 *)0x4002540C))
#define GPIO_PORTF_IM_R     	  (*((volatile uint32 *)0x40025410))
#define GPIO_PORTF_RIS_R    	  (*((volatile uint32 *)0x40025414))
#define GPIO_PORTF_MIS_R    	  (*((volatile uint32 *)0x40025418))
#define GPIO_PORTF_ICR_R    	  (*((volatile uint32 *)0x4002541C))
#define GPIO_PORTF_AFSEL_REG      (*((volatile uint32 *)0x40025420))
#define GPIO_PORTF_ODR_R          (*((volatile uint32 *)0x4002550C))
#define GPIO_PORTF_PUR_R          (*((volatile uint32 *)0x40025510))
#define GPIO_PORTF_PDR_R          (*((volatile uint32 *)0x40025514))
#define GPIO_PORTF_SLR_R          (*((volatile uint32 *)0x40025518))
#define GPIO_PORTF_DEN_REG        (*((volatile uint32 *)0x4002551C))
#define GPIO_PORTF_LOCK_REG       (*((volatile uint32 *)0x40025520))
#define GPIO_PORTF_CR_REG         (*((volatile uint32 *)0x40025524))
#define GPIO_PORTF_AMSEL_REG      (*((volatile uint32 *)0x40025528))
#define GPIO_PORTF_PCTL_REG       (*((volatile uint32 *)0x4002552C))

/************************************************************************/
/* TIMER0 REGISTERS                                                   */
/************************************************************************/
#define SYSCTL_RCGCTIMER_REG      (*((volatile uint32 *)0x400FE604))
#define TIMER0_CFG_REG            (*((volatile uint32 *)0x40030000))
#define TIMER0_TAMR_REG           (*((volatile uint32 *)0x40030004))
#define TIMER0_CTL_REG            (*((volatile uint32 *)0x4003000C))       
#define TIMER0_IMR_REG            (*((volatile uint32 *)0x40030018))
#define TIMER0_TAILR_REG          (*((volatile uint32 *)0x40030028))
#define TIMER0_ICR_REG            (*((volatile uint32 *)0x40030024))
#define TIMER0_RIS_REG            (*((volatile uint32 *)0x4003001C))




/*    ///////////////////////////////////////////////////   */
#define GPIO_OFFSET(x)	(x<4?((0x40004000)+((x)*0x1000)):((0x40020000)+((x)*0x1000)))

#define GPIODATA(x)	    *((volatile uint32*)(GPIO_OFFSET(x)))
#define GPIODIR(x)	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0400))
#define GPIOIS(x)		    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0404))
#define GPIOIBE(x)	   	*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0408))
#define GPIOIEV(x)		  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x040C))
#define GPIOIM(x)		    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0410))
#define GPIORIS(x)		  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0414))
#define GPIOMIS(x)		  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0418))
#define GPIOICR(x)		  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x041C))
#define GPIOAFSEL(x)    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0420))
#define GPIODR2R(x) 	  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0500))
#define GPIODR4R(x) 	  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0504))
#define GPIODR8R(x)   	*((volatile uint32*)(GPIO_OFFSET(x)+ 0x0508))
#define GPIOODR(x)  	  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x050C))
#define GPIOPUR(x)		  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0510))
#define GPIOPDR(x) 	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0514))
#define GPIOSLR(x)		  *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0518))
#define GPIODEN(x) 	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x051C))
#define GPIOLOCK(x)	    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0520))
#define GPIOCR(x)		    *((volatile uint32*)(GPIO_OFFSET(x)+ 0x0524))
/*
#define GPIO_PORT_A_OFFSET      0x40004000
#define GPIO_PORT_B_OFFSET      0x40005000
#define GPIO_PORT_C_OFFSET      0x40006000
#define GPIO_PORT_D_OFFSET      0x40007000
#define GPIO_PORT_E_OFFSET      0x40024000
#define GPIO_PORT_F_OFFSET      0x40025000
*/


/*****************************************************************************
//
// NVIC registers (NVIC)
//
*****************************************************************************/
#define NVIC_EN0              (*((volatile uint32 *)0xE000E100))
#define NVIC_EN1              (*((volatile uint32 *)0xE000E104))
#define NVIC_EN2              (*((volatile uint32 *)0xE000E108))
#define NVIC_EN3              (*((volatile uint32 *)0xE000E10C))
#define NVIC_EN4              (*((volatile uint32 *)0xE000E110))
#define NVIC_DIS0             (*((volatile uint32 *)0xE000E180))
#define NVIC_DIS1             (*((volatile uint32 *)0xE000E184))
#define NVIC_DIS2             (*((volatile uint32 *)0xE000E188))
#define NVIC_DIS3             (*((volatile uint32 *)0xE000E18C))
#define NVIC_DIS4             (*((volatile uint32 *)0xE000E190))

#endif /* Mcu_Hw.h */
