
#include "Dio_Types.h"
#include "Port.h"


Dio_LevelType Dio_ReadChannal (Dio_ChannelType ChannalId)
{
    Dio_PortType Portnum = ChannalId/8 ;
    uint8 pinnum = ChannalId%8  ;
    if (Portnum==0)
    {
        return (uint8) PORTA_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else if (Portnum==1)
    {
        return (uint8)PORTB_REGS->GPIODATA[0x1<<pinnum] ;

    }
    else if (Portnum==2)
    {
        return (uint8)PORTC_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else if (Portnum==3)
    {
        return (uint8)PORTD_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else if (Portnum==4)
    {
        return (uint8)PORTE_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else
    {
        return (uint8)PORTF_REGS->GPIODATA[0x1<<pinnum] ;
    }  
}



void Dio_WriteChannal (Dio_ChannelType ChannalId,Dio_LevelType Level)
{
    Dio_PortType Portnum = ChannalId/8 ;
    uint8 pinnum = ChannalId%8  ;
    if (Portnum==0)
    {
        PORTA_REGS->GPIODATA[0x1<<pinnum]=(uint32)(Level<<pinnum) ;
    }
    else if (Portnum==1)
    {
        PORTB_REGS->GPIODATA[0x1<<pinnum]=(uint32)Level<<pinnum ;

    }
    else if (Portnum==2)
    {
        PORTC_REGS->GPIODATA[0x1<<pinnum]=(uint32)Level<<pinnum ;
    }
    else if (Portnum==3)
    {
        PORTD_REGS->GPIODATA[0x1<<pinnum]=(uint32)Level<<pinnum ;
    }
    else if (Portnum==4)
    {
        PORTE_REGS->GPIODATA[0x1<<pinnum]=(uint32)Level<<pinnum ;
    }
    else
    {
        PORTF_REGS->GPIODATA[0x1<<pinnum]=(uint32)Level<<pinnum ;
    }  

}


Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
    if (PortId==0)
    {
        return (uint8)PORTA_REGS->GPIODATA[255] ;
    }
    else if (PortId==1)
    {
        return (uint8)PORTB_REGS->GPIODATA[255] ;

    }
    else if (PortId==2)
    {
        return (uint8)PORTC_REGS->GPIODATA[255] ;
    }
    else if (PortId==3)
    {
        return (uint8)PORTD_REGS->GPIODATA[255] ;
    }
    else if (PortId==4)
    {
        return (uint8)PORTE_REGS->GPIODATA[255] ;
    }
    else
    {
        return (uint8)PORTF_REGS->GPIODATA[255] ;
    }     
}



void Dio_WritePort (Dio_PortType PortId ,Dio_PortLevelType Level)
{
    if (PortId==0)
    {
       PORTA_REGS->GPIODATA[255] = Level;
    }
    else if (PortId==1)
    {
       PORTB_REGS->GPIODATA[255] = Level;

    }
    else if (PortId==2)
    {
       PORTC_REGS->GPIODATA[255] = Level;
    }
    else if (PortId==3)
    {
       PORTD_REGS->GPIODATA[255] = Level;
    }
    else if (PortId==4)
    {
       PORTE_REGS->GPIODATA[255] = Level;
    }
    else
    {
       PORTF_REGS->GPIODATA[255] = Level;
    }         
}



Dio_LevelType Dio_FlipChannal (Dio_ChannelType ChannalId)
{
    Dio_PortType Portnum = ChannalId/8 ;
    uint32 pinnum = ChannalId%8  ;
		uint32 mask=1<<pinnum ;
    if (Portnum==0)
    {
			PORTA_REGS->GPIODATA[mask] ^= 0xFF;
			return (uint8)PORTA_REGS->GPIODATA[mask] ;
        
    }
    else if (Portnum==1)
    {
 			PORTB_REGS->GPIODATA[mask] ^= 0xFF;
			return (uint8)PORTB_REGS->GPIODATA[mask] ;

    }
    else if (Portnum==2)
    {
  		PORTC_REGS->GPIODATA[mask] ^= 0xFF;
			return (uint8)PORTC_REGS->GPIODATA[mask] ;
    }
    else if (Portnum==3)
    {
 			PORTD_REGS->GPIODATA[mask] ^= 0xFF;
			return (uint8)PORTD_REGS->GPIODATA[mask] ;
    }
    else if (Portnum==4)
    {
			PORTE_REGS->GPIODATA[mask] ^= 0xFF;
			return (uint8)PORTE_REGS->GPIODATA[mask] ;
    }
    else
    {
 			PORTF_REGS->GPIODATA[mask] ^= 0xFF;
			return (uint8)PORTF_REGS->GPIODATA[mask] ;
    }
}
