
#ifndef __INTCTRL_TYPES_H__
#define __INTCTRL_TYPES_H__

typedef enum{
    INT_GPIO_PORT_A,
    INT_GPIO_PORT_B,
    INT_GPIO_PORT_C,
    INT_GPIO_PORT_D,
    INT_GPIO_PORT_E,
    INT_UART0,
    INT_UART1,
    INT_SSI0,
    INT_I2C0,
    INT_PWM0Fault,
    INT_PWM0Generator0,
    INT_PWM0Generator1,
    INT_PWM0Generator2,
    INT_QEI0,
    INT_ADC0Sequence0,
    INT_ADC0Sequence1,
    INT_ADC0Sequence2,
    INT_ADC0Sequence3,
    INT_WatchdogTimers_0_1,
    INT_Timer0A16_32,
    INT_Timer0B16_32,
    INT_Timer1A16_32,
    INT_Timer1B16_32,
    INT_Timer2A16_32,
    INT_Timer2B16_32,
    INT_AnalogComparator0,
    INT_AnalogComparator1,
    INT_SystemControl=28,
    INT_Flash_EEPROM_Control,
    INT_GPIO_PORT_F,
    INT_UART2=33,
    INT_SSI1,
    INT_Timer3A16_32,
    INT_Timer3B16_32,
    INT_I2C1,
    INT_QEI1,
    INT_CAN0,
    INT_CAN1,
    INT_HibernationModule=43,
    INT_USB,
    INT_PWM0Generator3,
    INT_MDMASoftware,
    INT_MDMAError,
    INT_ADC1Sequence0,
    INT_ADC1Sequence1,
    INT_ADC1Sequence2,
    INT_ADC1Sequence3,   
    INT_SSI2=57,
    INT_SSI3,
    INT_UART3,
    INT_UART4,
    INT_UART5,
    INT_UART6,
    INT_UART7,
    INT_I2C2=68,
    INT_I2C3,
    INT_Timer4A16_32,
    INT_Timer4B16_32,
    INT_Timer5A16_32,
    INT_Timer5B16_32,
    INT_Timer0A32_64,
    INT_Timer0B32_64,
    INT_Timer1A32_64,
    INT_Timer1B32_64,
    INT_Timer2A32_64,
    INT_Timer2B32_64,    
    INT_Timer3A32_64,
    INT_Timer3B32_64,
    INT_Timer4A32_64,
    INT_Timer4B32_64,
    INT_Timer5A32_64,
    INT_Timer5B32_64, 
    INT_SYSTEMEXCEPTION,
    INT_PWM1Generator0=134,
    INT_PWM1Generator1,
    INT_PWM1Generator2,    
    INT_PWM1Generator3,
    INT_PWM1FAULT

}IntCtrl_InterruptType;

typedef enum {
	g8sg1_00_,//000
	g8sg1_10_,//001
	g8sg1_20_,//010
	g8sg1_30_,//011
	g8sg1_40_,//100
	g8sg1_50_,//101
	g8sg1_60_,//110
	g8sg1_70_//111
	
}G_8_SG_1_PRIORETIES;

typedef enum {
	g4sg2_00_, //000
	g4sg2_01_, //001
	g4sg2_10_,//010
	g4sg2_11_,//011
	g4sg2_20_,//100
	g4sg2_21_,//101
	g4sg2_30_,//110
	g4sg2_31_ //111

}G_4_SG_2_PRIORETIES;

typedef enum {
	g2sg4_00_, //000
	g2sg4_01_, //001
	g2sg4_02_,//010
	g2sg4_03_,//011
	g2sg4_10_,//100
	g2sg4_11_,//101
	g2sg4_12_,//110
	g2sg4_13_ //111
}G_2_SG_4_PRIORETIES;


typedef enum {
	g1sg8_00_, //000
	g1sg8_01_, //001
	g1sg8_02_,//010
	g1sg8_03_,//011
	g1sg8_04_,//100
	g1sg8_05_,//101
	g1sg8_06_,//110
	g1sg8_07_ //111
}G_1_SG_8_PRIORETIES;



typedef enum {
	G_8_SG_1 ,
	G_4_SG_2 =0x5,
	G_2_SG_4 =0x6,
	G_1_SG_8 =0x7
}G_SG_Type ;

	



#endif

