
#include "blink.h"

void GPIO_Init(void)
{
  RCC->AHB1ENR &= ~0xF;
  RCC->AHB1ENR |= 1 << 0;

  GPIOA->MODER &= ~(3 << (2 * 5));
  GPIOA->MODER |= 1 << (2 * 5);
}

void SysTick_Init(void)
{
  SysTick->CTRL = 0;
  SysTick->LOAD = 0xFFFFFF;
  SysTick->VAL  = 0;
  SysTick->CTRL |= 1 | (1 << 2);
}

void delayMS(uint16_t ms)
{
  SysTick->LOAD = 16000 * (ms - 1);
  SysTick->VAL  = 0;
  while (!(SysTick->CTRL & (1 << 16))) {}
}