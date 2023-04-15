/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define RCC_BASE 	 0x40023800
#define PORT_D_BASE  0x40020C00
#define RCC_AHB1ENR  *(volatile unsigned int * ) (RCC_BASE    +  0x30)
#define GPIOD_MODER  *(volatile unsigned int * ) (PORT_D_BASE +  0x00)
#define GPIOD_ODR    *(volatile unsigned int * ) (PORT_D_BASE +  0x14)

#define MAN_BIT(REG,BIT,VAL)   (REG = (REG&(~(1<<BIT))) | (VAL << BIT ))
#define SET_BIT(REG,BIT)   MAN_BIT(REG,BIT,1)
#define CLR_BIT(REG,BIT)   MAN_BIT(REG,BIT,0)

#define MAN_2BITS(REG,BIT,VAL)   (REG = (REG&(~(3<<BIT))) | (VAL << BIT ))

int main(void)
{
	volatile unsigned long int i = 0 ;
	SET_BIT(RCC_AHB1ENR,3)  ;
	MAN_2BITS(GPIOD_MODER,26,1) ;
	while(1)
	{
		SET_BIT(GPIOD_ODR,13) ;
		for(i = 0 ; i <= 100000 ; i++ ) ;
		CLR_BIT(GPIOD_ODR,13) ;
		for(i = 0 ; i <= 100000 ; i++ ) ;
	}

}
