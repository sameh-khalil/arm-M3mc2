#include <stdint.h>
#include "Std_Types.h"
#include "Dio_Types.h"
#include "GPT.h"
#include "IntCtrl.h"
#include "Port.h"
#include "SysClkCtrl.h"
#include "ON_OFF_LED_TIME_CONFIG.h"

uint32 GETTIMEINTICKS (uint32 freq ,uint32 TimeInSeconds , uint32 prescaler);
static uint32 TimeTicksOn ;
static uint32 TimeTicksOff ;
static uint8 flag = 1 ;

int main (){
	
	SYSCTRL_Init();
	IntCtrl_init();
	Port_Init(ConfiType);
	Gpt_Init(TimeConfig);
	TimeTicksOn = GETTIMEINTICKS(20000000,TIME_ON_IN_sec,1);
	TimeTicksOff = GETTIMEINTICKS(20000000,TIME_OFF_IN_sec,1);
	Gpt_StartTimer(1,TimeTicksOn);
	while(1)
	{}
}


uint32 GETTIMEINTICKS (uint32 freq ,uint32 TimeInSeconds , uint32 prescaler)
{
	return TimeInSeconds*freq/prescaler ;

}

void TIMER0A_Handler(void)
{
	
}

void TIMER1A_Handler(void)
{
	if (flag==1)
		{
			(*TimeConfig[PredegT].GptNotificationPtr)();
			Gpt_StartTimer(1,TimeTicksOff);
			flag = 0 ;
		}
		else
		{
			(*TimeConfig[PredegT].GptNotificationPtr)();
			Gpt_StartTimer(1,TimeTicksOn);
			flag = 1 ;
		}
		GPT_1->GPTMICR=1;

}
