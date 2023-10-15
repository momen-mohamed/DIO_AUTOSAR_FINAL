/******************************************************************************************************************
 *  INCLUDES
 ******************************************************************************************************************/
#include <stdint.h>
#include "Bit_Math.h"
#include "TM4C123xx.h"
#include "../../LIB/STD.h"
#include "DIO.h"


/******************************************************************************************************************
 *  LOCAL DATA
 ******************************************************************************************************************/

static GPIO_RegDef_t* GPIO_Arr[6] = { GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF };


/******************************************************************************************************************
 *  GLOBAL FUNCTIONS
 ******************************************************************************************************************/


/******************************************************************************************************************
 *  INCLUDES
 ******************************************************************************************************************/

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{

    GPIO_PORT port_num;
    uint8_t pin_num;

    port_num = (GPIO_PORT) (ChannelId / NO_OF_PINS);
    pin_num = ChannelId % NO_OF_PINS;

    return GET_BIT(GPIO_Arr[port_num]->DATA[255], pin_num);
}

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    GPIO_PORT port_num;
    uint8_t pin_num;

    port_num = (GPIO_PORT) (ChannelId / NO_OF_PINS);
    pin_num = ChannelId % NO_OF_PINS;

    INSERT_BIT(GPIO_Arr[port_num]->DATA[255], pin_num, Level);
}

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
    Dio_PortLevelType level = 0;

    if (PortId < NO_OF_PORTS)
    {
        level = GPIO_Arr[PortId]->DATA[255];
    }

    return level;

}

void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level)
{

    if (PortId < NO_OF_PORTS)
    {
        GPIO_Arr[PortId]->DATA[255] = Level;
    }

}
