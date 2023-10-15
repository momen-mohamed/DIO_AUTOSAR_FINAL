
#include "TM4C123xx.h"
#include "Bit_Math.h"

void PORT_Init()
{
    /*************STUB CODE TO INITIALIZE PORTA AND PORTF**************************/
    SET_BIT(SYSCTL->RCGC[2], 0);
    GPIOA->DIR = 0xFF;
    GPIOA->DEN = 0xFF;
    SET_BIT(SYSCTL->RCGC[2], 5);
    GPIOF->DIR = 0xFF;
    GPIOF->DEN = 0xFF;

}
