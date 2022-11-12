#ifndef _STK_CONFIG_H
#define _STK_CONFIG_H



/* Options:    STK_HSE_CRYSTAL
               STK_HSE_RC
               STK_HSI
               STK_PLL			   */
#define STK_CLOCK_TYPE    STK_HSE_CRYSTAL


/* Options:     STK_PLL_IN_HSI_DIV_2
                STK_PLL_IN_HSE_DIV_2
				STK_PLL_IN_HSE      */
/* Note: Select value only if you have PLL as input clock source */
#if STK_CLOCK_TYPE == STK_PLL
#define STK_PLL_INPUT     STK_PLL_IN_HSE_DIV_2
#endif


/* Options: 2 to 16 */
/* Note: Select value only if you have PLL as input clock source */
#if STK_CLOCK_TYPE == STK_PLL
#define STK_PLL_MUL_VAL   4
#endif



#endif