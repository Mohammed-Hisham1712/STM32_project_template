#include "RCC_interface.h"
#include "GPIO_interface.h"

int main(void)
{
    RCC_voidInitSysClock();
    RCC_voidEnableClock(RCC_APB2, 4);	//Enable GPIOC

    GPIO_voidSetPinMode(GPIOC, PIN13, OUTPUT_2MHZ_OPEN_DRAIN);
    GPIO_voidTogglePin(GPIOC, PIN13);

    while(1)
    {
        for(uint32_t i = 0; i < 100000; i++);
        GPIO_voidTogglePin(GPIOC, PIN13);
    }

    return 0;
}
