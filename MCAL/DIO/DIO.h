/*
 * DIO.h
 *
 *  Created on: Oct 14, 2023
 *      Author: eme
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_

#define NO_OF_PINS 8
#define NO_OF_PORTS 6

typedef enum {
    PORTA,
    PORTB,
    PORTC,
    PORTD,
    PORTE,
    PORTF,
}GPIO_PORT;


Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level);
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);
void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level);


#endif /* MCAL_DIO_DIO_H_ */
