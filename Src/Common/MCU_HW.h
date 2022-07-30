
#ifndef MCU_HW_H
#define MCU_HW_H

#include "Std_Types.h"

#define PortA_Base_Address                  0x40004000
#define PortB_Base_Address                  0x40005000
#define PortC_Base_Address                  0x40006000
#define PortD_Base_Address                  0x40007000
#define PortE_Base_Address                  0x40024000
#define PortF_Base_Address                  0x40025000
#define PD(X)                               *((volatile uint32 *)(X))



typedef struct
{
    volatile uint32 GPIODATA[256];
    volatile uint32 GPIODIR;
    volatile uint32 GPIOIS;
    volatile uint32 GPIOIBE;
    volatile uint32 GPIOIEV;
    volatile uint32 GPIOIM;
    volatile uint32 GPIORIS;
    volatile uint32 GPIOMIS;
    volatile uint32 GPIOICR;
    volatile uint32 GPIOAFSEL;
    uint32 reserved1[55];
    volatile uint32 GPIODR_X_R[3];    
    volatile uint32 GPIO_ATT_SEL[4];
    volatile uint32 GPIODEN;
    volatile uint32 GPIOLOCK;
    volatile uint32 GPIOCR;
    volatile uint32 GPIOAMSEL;
    volatile uint32 GPIOPCTL;
    volatile uint32 GPIOADCCTL;
    volatile uint32 GPIODMACTL;
	  uint32 reserved2[678];
		volatile uint32 GPIOPeriphID_X [8];
		volatile uint32	GPIOPCellID_X [8] ;
		
} PORT_REGESTERS;


#define PORTA_REGS													((PORT_REGESTERS *)(PortA_Base_Address))
#define PORTB_REGS													((PORT_REGESTERS *)(PortB_Base_Address))
#define PORTC_REGS													((PORT_REGESTERS *)(PortC_Base_Address))
#define PORTD_REGS													((PORT_REGESTERS *)(PortD_Base_Address))
#define PORTE_REGS													((PORT_REGESTERS *)(PortE_Base_Address))
#define PORTF_REGS													((PORT_REGESTERS *)(PortF_Base_Address))







#define RCGCGPIO															PD(0x400FE608)
#define RCGCTIMER															PD(0x400FE604)
#define RCGCWTIMER														PD(0x400FE65C)
#define	Cortex_M4_Peripheral_Base_Adress										 PD(0xE000E000)
#define SCB_INTCTRL																						PD(0xE000ED04)
#define SCB_APINT																							PD(0xE000ED0C)

typedef struct
{
    volatile uint32 EN[5];
    volatile uint32 reserved0[27];
    volatile uint32 DIS[5]; 
    volatile uint32 reserved1[27];
    volatile uint32 PEND[5];
    volatile uint32 reserved2[27];
    volatile uint32 UNPEND[5];
    volatile uint32 reserved3[27];
    volatile uint32 ACTIVE[5];
    volatile uint32 reserved4[59];
    volatile uint32 PRI[35];
    volatile uint32 reserved5[669];
    volatile uint32 SWTRIG; 
} NVICREGSMAP;


#define NVIC																 ((NVICREGSMAP *)(0xE000E100))

typedef struct
{
    uint32 MOSCDIS :1;//
    uint32 :3;
    uint32 OSCSRC :2;//
    uint32 XTAL :5;//
    uint32 BYPASS :1;//
    uint32 :1;
    uint32 PWRDN :1;//
    uint32 :3;
    uint32 PWMDIV :3;//
    uint32 USEPWMDIV :1;//
    uint32 :1;
    uint32 USESYSDIV :1;//
    uint32 SYSDIV :4;//
    uint32 ACG :1;//
    uint32 :4;
} RCC_FIELDS;

typedef union
{
    uint32 REG;
    RCC_FIELDS Bits;
} RCC_REG;

#define RCCREG 													((volatile RCC_REG *)(0x400FE000+ 0x060))



typedef struct
{
    volatile uint32 GPTMCFG;
    volatile uint32 GPTMTAMR;
		volatile uint32 GPTMTBMR;
    volatile uint32 GPTMCTL;
    volatile uint32 GPTMSYNC;
    volatile uint32 res0;
    volatile uint32 GPTMIMR; 
    volatile uint32 GPTMRIS;    
    volatile uint32 GPTMMIS;    
    volatile uint32 GPTMICR;         
    volatile uint32 GPTMTAILR;
		volatile uint32 GPTMTBILR;
    volatile uint32 GPTMTAMATCHR;
		volatile uint32 GPTMTBMATCHR;
    volatile uint32 GPTMTAPR;
		volatile uint32 GPTMTBPR;     
    volatile uint32 GPTMTAPMR;
    volatile uint32 GPTMTBPMR;    
    volatile uint32 GPTMTAR;
    volatile uint32 GPTMTBR;
    volatile uint32 GPTMTAV;   
    volatile uint32 GPTMTBV;
    volatile uint32 GPTMRTCPD;   
    volatile uint32 GPTMTAPS;
    volatile uint32 GPTMTBPS;   
    volatile uint32 GPTMTAPV;
    volatile uint32 GPTMTBPV;

} GPT_REGISTERS;


#define GPT_0						((GPT_REGISTERS *)(0x40030000))
#define GPT_1						((GPT_REGISTERS *)(0x40031000))
#define GPT_2						((GPT_REGISTERS *)(0x40032000))
#define GPT_3						((GPT_REGISTERS *)(0x40033000))
#define GPT_4						((GPT_REGISTERS *)(0x40034000))
#define GPT_5						((GPT_REGISTERS *)(0x40035000))
#define GPT_6						((GPT_REGISTERS *)(0x40036000))
#define GPT_7						((GPT_REGISTERS *)(0x40037000))
#define GPT_8						((GPT_REGISTERS *)(0x4004C000))
#define GPT_9						((GPT_REGISTERS *)(0x4004D000))
#define GPT_10					((GPT_REGISTERS *)(0x4004E000))
#define GPT_11					((GPT_REGISTERS *)(0x4004F000))



#endif
/***********************************************************
*   END OF FILE: MCU_HW.h
***********************************************************/