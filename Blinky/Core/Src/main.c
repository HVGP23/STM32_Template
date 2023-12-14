/*  Author: Jacob Clarey
 *  Date: 8/16/2023
 *  Description: Basic blinking LD2 program
 *  Notes: N/A
 */

#include "blink.h"
#include <stm32f446xx.h>

int main(void)
{
  GPIO_Init();
  SysTick_Init();
  while (1)
  {
    GPIOA->ODR ^= 1 << 5;
    delayMS(1000);
  } // end of while(1)
} // end of main(void)

/* EOF */
