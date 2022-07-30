#include "IntCtrl_Cfg.h"
#include "IntCtrl.h"
/**

choose the interupt and its priorty 



{    INT_GPIO_PORT_A,
{    INT_GPIO_PORT_B,
{    INT_GPIO_PORT_C,
{    INT_GPIO_PORT_D,
{    INT_GPIO_PORT_E,
{    INT_UART0,
{    INT_UART1,
{    INT_SSI0,
{    INT_I2C0,
{    INT_PWM0Fault,
{    INT_PWM0Generator0,
{    INT_PWM0Generator1,
{    INT_PWM0Generator2,
{    INT_QEI0,
{    INT_ADC0Sequence0,
{    INT_ADC0Sequence1,
{    INT_ADC0Sequence2,
{    INT_ADC0Sequence3,
{    INT_WatchdogTimers_0_1,
{    INT_Timer0A16_32,
{    INT_Timer0B16_32,
{    INT_Timer1A16_32,
{    INT_Timer1B16_32,
{    INT_Timer2A16_32,
{    INT_Timer2B16_32,
{    INT_AnalogComparator0,
{    INT_AnalogComparator1,
{    INT_SystemControl,
{    INT_Flash_EEPROM_Control,
{    INT_GPIO_PORT_F,
{    INT_UART2,
{    INT_SSI1,
{    INT_Timer3A16_32,
{    INT_Timer3B16_32,
{    INT_I2C1,
{    INT_QEI1,
{    INT_CAN0,
{    INT_CAN1,
{    INT_HibernationModule,
{    INT_USB,
{    INT_PWM0Generator3,
{    INT_MDMASoftware,
{    INT_MDMAError,
{    INT_ADC1Sequence0,
{    INT_ADC1Sequence1,
{    INT_ADC1Sequence2,
{    INT_ADC1Sequence3,   
{    INT_SSI2,
{    INT_SSI3,
{    INT_UART3,
{    INT_UART4,
{    INT_UART5,
{    INT_UART6,
{    INT_UART7,
{    INT_I2C2,
{    INT_I2C3,
{    INT_Timer4A16_32,
{    INT_Timer4B16_32,
{    INT_Timer5A16_32,
{    INT_Timer5B16_32,
{    INT_Timer0A32_64,
{    INT_Timer0B32_64,
{    INT_Timer1A32_64,
{    INT_Timer1B32_64,
{    INT_Timer2A32_64,
{    INT_Timer2B32_64,    
{    INT_Timer3A32_64,
{    INT_Timer3B32_64,
{    INT_Timer4A32_64,
{    INT_Timer4B32_64,
{    INT_Timer5A32_64,
{    INT_Timer5B32_64, 
{    INT_SYSTEMEXCEPTION,
{    INT_PWM1Generator0,
{    INT_PWM1Generator1,
{    INT_PWM1Generator2,    
{    INT_PWM1Generator3,
{    INT_PWM1FAULT **/

const uint8 SET_INTERUPT_PRIORTY [number_of_interrupts_defined][2] = {

{    INT_Timer0A16_32, g8sg1_00_},
{    INT_Timer1A16_32, g8sg1_10_}

};




