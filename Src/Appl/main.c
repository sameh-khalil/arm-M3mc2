#include <stdint.h>
#include "Std_Types.h"
#include "Dio_Types.h"
#include "GPT.h"
#include "IntCtrl.h"
#include "Port.h"
#include "SysClkCtrl.h"
uint32 GETTIMEINTICKS (uint32 freq ,uint32 TimeInSeconds , uint32 prescaler);
int main (){
	
	SYSCTRL_Init();
	IntCtrl_init();
	Port_Init(ConfiType);
	Gpt_Init(TimeConfig);
	uint32 TimeTicks = GETTIMEINTICKS(20000000,5,1);
	Gpt_StartTimer(1,TimeTicks);
	while(1)
	{}
}


uint32 GETTIMEINTICKS (uint32 freq ,uint32 TimeInSeconds , uint32 prescaler)
{
	return TimeInSeconds*freq/prescaler ;

}

void TIMER0A_Handler(void)
{
	(*TimeConfig[PredegT].GptNotificationPtr)();
}

void TIMER1A_Handler(void)
{
	(*TimeConfig[PredegT].GptNotificationPtr)();
	GPT_1->GPTMICR=1;

}
