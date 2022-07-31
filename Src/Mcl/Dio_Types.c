
#include "Dio_Types.h"
#include "Port.h"


Dio_LevelType Dio_ReadChannal (Dio_ChannelType ChannalId)
{
    Dio_PortType Portnum = ChannalId/8 ;
    uint8 pinnum = ChannalId%8  ;
    if (Portnum==0)
    {
        return PORTA_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else if (Portnum==1)
    {
        return PORTB_REGS->GPIODATA[0x1<<pinnum] ;

    }
    else if (Portnum==2)
    {
        return PORTC_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else if (Portnum==3)
    {
        return PORTD_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else if (Portnum==4)
    {
        return PORTE_REGS->GPIODATA[0x1<<pinnum] ;
    }
    else
    {
        return PORTF_REGS->GPIODATA[0x1<<pinnum] ;
    }  
}



void Dio_WriteChannal (Dio_ChannelType ChannalId,Dio_LevelType Level)
{
    Dio_PortType Portnum = ChannalId/8 ;
    uint8 pinnum = ChannalId%8  ;
    if (Portnum==0)
    {
        PORTA_REGS->GPIODATA[0x1<<pinnum]=Level<<pinnum ;
    }
    else if (Portnum==1)
    {
        PORTB_REGS->GPIODATA[0x1<<pinnum]=Level<<pinnum ;

    }
    else if (Portnum==2)
    {
        PORTC_REGS->GPIODATA[0x1<<pinnum]=Level<<pinnum ;
    }
    else if (Portnum==3)
    {
        PORTD_REGS->GPIODATA[0x1<<pinnum]=Level<<pinnum ;
    }
    else if (Portnum==4)
    {
        PORTE_REGS->GPIODATA[0x1<<pinnum]=Level<<pinnum ;
    }
    else
    {
        PORTF_REGS->GPIODATA[0x1<<pinnum]=Level<<pinnum ;
    }  

}


Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
    if (PortId==0)
    {
        return PORTA_REGS->GPIODATA[255] ;
    }
    else if (PortId==1)
    {
        return PORTB_REGS->GPIODATA[255] ;

    }
    else if (PortId==2)
    {
        return PORTC_REGS->GPIODATA[255] ;
    }
    else if (PortId==3)
    {
        return PORTD_REGS->GPIODATA[255] ;
    }
    else if (PortId==4)
    {
        return PORTE_REGS->GPIODATA[255] ;
    }
    else
    {
        return PORTF_REGS->GPIODATA[255] ;
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
    uint8 pinnum = ChannalId%8  ;
		uint8 mask=1<<pinnum ;
    if (Portnum==0)
    {
			PORTA_REGS->GPIODATA[mask] ^= 0xFF;
			return PORTA_REGS->GPIODATA[mask] ;
        
    }
    else if (Portnum==1)
    {
 			PORTB_REGS->GPIODATA[mask] ^= 0xFF;
			return PORTB_REGS->GPIODATA[mask] ;

    }
    else if (Portnum==2)
    {
  		PORTC_REGS->GPIODATA[mask] ^= 0xFF;
			return PORTC_REGS->GPIODATA[mask] ;
    }
    else if (Portnum==3)
    {
 			PORTD_REGS->GPIODATA[mask] ^= 0xFF;
			return PORTD_REGS->GPIODATA[mask] ;
    }
    else if (Portnum==4)
    {
			PORTE_REGS->GPIODATA[mask] ^= 0xFF;
			return PORTE_REGS->GPIODATA[mask] ;
    }
    else
    {
 			PORTF_REGS->GPIODATA[mask] ^= 0xFF;
			return PORTF_REGS->GPIODATA[mask] ;
    }
}
