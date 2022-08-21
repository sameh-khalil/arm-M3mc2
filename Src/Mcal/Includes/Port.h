
#include "Std_Types.h"
#include "Port_cfg.h"
#include "MCU_HW.h"

#ifndef __PORT_H__
#define __PORT_H__

typedef enum {
    PINA0,
    PINA1,
    PINA2,
    PINA3,
    PINA4,
    PINA5,
    PINA6,
    PINA7,

    PINB0,
    PINB1,
    PINB2,
    PINB3,
    PINB4,
    PINB5,
    PINB6,
    PINB7,

    PINC0,
    PINC1,
    PINC2,
    PINC3,
    PINC4,
    PINC5,
    PINC6,
    PINC7,

    PIND0,
    PIND1,
    PIND2,
    PIND3,
    PIND4,
    PIND5,
    PIND6,
    PIND7,

    PINE0,
    PINE1,
    PINE2,
    PINE3,
    PINE4,
    PINE5,
    PINE6,

    PINF0=40,
    PINF1,
    PINF2,
    PINF3,
    PINF4,
    PINF5

}Port_PinType;

typedef enum {
	PORTA,
	PORTB,
	PORTC,
	PORTD,
	PORTE,
	PORTF
} Port_Type;


typedef enum {
    Input,
    Output
}Port_PinDirectionType ;


typedef unsigned char Port_PinModeType ;

#define Dio (Port_PinModeType)0x00


typedef enum{
    OpenDrain,
    PullUp,
    PullDown,
		SlewRate 
}Port_PinInternalAttachmentType;


typedef enum{
    c2m,
    c4m,
    c8m
}Port_PinOutputCurrentType;




typedef struct Port_ConfigType
{
    Port_PinType PinNum ;
    Port_PinDirectionType Direction;
    uint8 PinValue ;
    Port_PinModeType Mode ;
    Port_PinInternalAttachmentType Attachment;
    Port_PinOutputCurrentType Current ;
}Port_ConfigType;


void Port_Init(const Port_ConfigType* ConfigPtr);


extern const Port_ConfigType ConfiType[3];


#endif
