
#ifndef __BLINK__
#define __BLINK__

#include <stm32f446xx.h>

/// @brief initializes pin A5 for output mode
void GPIO_Init(void);

/// @brief initializes SysTick timer for basic delays
void SysTick_Init(void);

/// @brief Delays a value of milliseconds using SysTick
/// @param ms is millisecond delay
void delayMS(uint16_t ms);

#endif

/* EOF */