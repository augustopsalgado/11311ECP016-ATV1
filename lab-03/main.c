#include <stdlib.h>
#include <stdint.h>

/* AHB1 Base Addresses ******************************************************/

#define STM32_RCC_BASE              0x40023800      /* 0x40023800-0x40023bff: Reset
                                                        and Clock control RCC */

/* AHB2 Base Addresses ******************************************************/

#define STM32_GPIOC_BASE            0x48000800U     /* 0x48000800-0x48000bff: GPIO
                                                        Port C */

/* Register Offsets *********************************************************/

#define STM32_RCC_AHB1ENR_OFFSET    0x0030          /* AHB1 Peripheral Clock enable
                                                        register */

#define STM32_GPIO_MODER_OFFSET     0x0000          /* GPIO port mode register */

#define STM32_GPIO_OTYPER_OFFSET    0x0004          /* GPIO port output type register */

#define STM32_GPIO_PUPDR_OFFSET     0x000c          /* GPIO port pull-up/pull-down
                                                        register */

#define STM32_GPIO_BSRR_OFFSET      0x0018          /* GPIO port bit set/reset register */

/* Register Addresses *******************************************************/

#define STM32_RCC_AHB1ENR (STM32_RCC_BASE+STM32_RCC_AHB1ENR_OFFSET)
#define STM32_GPIOC_MODER (STM32_GPIOC_BASE+STM32_GPIO_MODER_OFFSET)
#define STM32_GPIOC_OTYPER (STM32_GPIOC_BASE+STM32_GPIO_OTYPER_OFFSET)
#define STM32_GPIOC_PUPDR (STM32_GPIOC_BASE+STM32_GPIO_PUPDR_OFFSET)
#define STM32_GPIOC_BSRR (STM32_GPIOC_BASE + STM32_GPIO_BSRR_OFFSET)
