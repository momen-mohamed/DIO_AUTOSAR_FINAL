


#include "LIB/STD.h"
#include "MCAL/DIO/DIO.h"
#include "MCAL/PORT/PORT.h"

int main(void)
{

    Dio_PortLevelType level = 0;

    PORT_Init();
    Dio_WriteChannel(42, 1);
    Dio_WriteChannel(42, 0);
    Dio_WriteChannel(41, 1);
    Dio_WriteChannel(41, 0);
    Dio_WriteChannel(43, 1);
    Dio_WriteChannel(43, 0);
    Dio_WritePort(0, 10);
    level = Dio_ReadPort(0);


	return 0;
}
