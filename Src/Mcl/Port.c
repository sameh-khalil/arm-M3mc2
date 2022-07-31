
#include "Port.h"
#include "MCU_HW.h"

void Port_Init (const Port_ConfigType * ConfigPtr)
{
	
    for(int i =0 ;i<NumberOfCfgPins;i++)
    {
			unsigned char Portnum = ConfigPtr[i].PinNum/8 ;
      unsigned char PortPinnum = ConfigPtr[i].PinNum%8 ;
			RCGCGPIO |=(1<<Portnum);
			if(Portnum==0)
			{//PortA
				PORTA_REGS->GPIOLOCK =0x4C4F434B;
				if(ConfigPtr[i].Mode==0)
				{
					PORTA_REGS->GPIOCR |= 1<<PortPinnum ;
					PORTA_REGS->GPIOAFSEL|=1<<PortPinnum;
					PORTA_REGS->GPIODEN |=1<<PortPinnum;
					PORTA_REGS->GPIODIR |= 1<<PortPinnum;
					PORTA_REGS->GPIO_ATT_SEL[ConfigPtr[i].Attachment]|= 1<<PortPinnum ;
					PORTA_REGS->GPIODR_X_R[ConfigPtr[i].Current] |= 1<<PortPinnum ;
					if(ConfigPtr[i].PinValue ==1 )
					{PORTA_REGS->GPIODATA[0x1<<PortPinnum] =0xff ;}
					else
					{PORTA_REGS->GPIODATA[0x1<<PortPinnum] =0x00 ;}

				}

			}
			
	//PORTB		
			if(Portnum==1)
			{
				PORTB_REGS->GPIOLOCK =0x4C4F434B;
				if(ConfigPtr[i].Mode==0)
				{
					PORTB_REGS->GPIOCR |= 1<<PortPinnum ;
					PORTB_REGS->GPIOAFSEL|=1<<PortPinnum;
					PORTB_REGS->GPIODEN |=1<<PortPinnum;
					PORTB_REGS->GPIODIR |= 1<<PortPinnum;
					PORTB_REGS->GPIO_ATT_SEL[ConfigPtr[i].Attachment]|= 1<<PortPinnum ;
					PORTB_REGS->GPIODR_X_R[ConfigPtr[i].Current] |= 1<<PortPinnum ;
					if(ConfigPtr[i].PinValue ==1 )
					{PORTB_REGS->GPIODATA[0x1<<PortPinnum] =0xff ;}
					else
					{PORTB_REGS->GPIODATA[0x1<<PortPinnum] =0x00 ;}

				}

			}
			
			
//PORTC			
			if(Portnum==2)
			{
				PORTC_REGS->GPIOLOCK =0x4C4F434B;
				if(ConfigPtr[i].Mode==0)
				{
					PORTC_REGS->GPIOCR |= 1<<PortPinnum ;
					PORTC_REGS->GPIOAFSEL|=1<<PortPinnum;
					PORTC_REGS->GPIODEN |=1<<PortPinnum;
					PORTC_REGS->GPIODIR |= 1<<PortPinnum;
					PORTC_REGS->GPIO_ATT_SEL[ConfigPtr[i].Attachment]|= 1<<PortPinnum ;
					PORTC_REGS->GPIODR_X_R[ConfigPtr[i].Current] |= 1<<PortPinnum ;
					if(ConfigPtr[i].PinValue ==1 )
					{PORTC_REGS->GPIODATA[0x1<<PortPinnum] =0xff ;}
					else
					{PORTC_REGS->GPIODATA[0x1<<PortPinnum] =0x00 ;}

				}

			}
			
//PORTD		
			if(Portnum==3)
			{
				PORTD_REGS->GPIOLOCK =0x4C4F434B;
				if(ConfigPtr[i].Mode==0)
				{
					PORTD_REGS->GPIOCR |= 1<<PortPinnum ;
					PORTD_REGS->GPIOAFSEL|=1<<PortPinnum;
					PORTD_REGS->GPIODEN |=1<<PortPinnum;
					PORTD_REGS->GPIODIR |= 1<<PortPinnum;
					PORTD_REGS->GPIO_ATT_SEL[ConfigPtr[i].Attachment]|= 1<<PortPinnum ;
					PORTD_REGS->GPIODR_X_R[ConfigPtr[i].Current] |= 1<<PortPinnum ;
					if(ConfigPtr[i].PinValue ==1 )
					{PORTD_REGS->GPIODATA[0x1<<PortPinnum] =0xff ;}
					else
					{PORTD_REGS->GPIODATA[0x1<<PortPinnum] =0x00 ;}

				}

			}

//PORTE		
			if(Portnum==4)
			{
				PORTE_REGS->GPIOLOCK =0x4C4F434B;
				if(ConfigPtr[i].Mode==0)
				{
					PORTE_REGS->GPIOCR |= 1<<PortPinnum ;
					PORTE_REGS->GPIOAFSEL|=1<<PortPinnum;
					PORTE_REGS->GPIODEN |=1<<PortPinnum;
					PORTE_REGS->GPIODIR |= 1<<PortPinnum;
					PORTE_REGS->GPIO_ATT_SEL[ConfigPtr[i].Attachment]|= 1<<PortPinnum ;
					PORTE_REGS->GPIODR_X_R[ConfigPtr[i].Current] |= 1<<PortPinnum ;
					if(ConfigPtr[i].PinValue ==1 )
					{PORTE_REGS->GPIODATA[0x1<<PortPinnum] =0xff ;}
					else
					{PORTE_REGS->GPIODATA[0x1<<PortPinnum] =0x00 ;}

				}

			}

//PORTF		
			if(Portnum==5)
			{
				PORTF_REGS->GPIOLOCK =0x4C4F434B;
				if(ConfigPtr[i].Mode==0)
				{
					PORTF_REGS->GPIOCR |= 1<<PortPinnum ;
					PORTF_REGS->GPIOAFSEL|=1<<PortPinnum;
					PORTF_REGS->GPIODEN |=1<<PortPinnum;
					PORTF_REGS->GPIODIR |= 1<<PortPinnum;
					PORTF_REGS->GPIO_ATT_SEL[ConfigPtr[i].Attachment]|= 1<<PortPinnum ;
					PORTF_REGS->GPIODR_X_R[ConfigPtr[i].Current] |= 1<<PortPinnum ;
					if(ConfigPtr[i].PinValue ==1 )
					{PORTF_REGS->GPIODATA[0x1<<PortPinnum] =0xff ;}
					else
					{PORTF_REGS->GPIODATA[0x1<<PortPinnum] =0x00 ;}

				}

			}			
			
		}
	}

