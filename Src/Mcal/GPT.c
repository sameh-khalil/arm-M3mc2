#include "GPT.h"


void Gpt_Init(const Gpt_ConfigType * TimerConfig)
{
	GPT_REGISTERS * GPT= T_arr[TimerConfig[PredegT].GptChannelId];

	RCGCTIMER=0x3F;
	GPT->GPTMCTL=0;
//	GPT->GPTMCFG=TimerConfig[PredegT].Mode;
	GPT->GPTMTAMR=0x02;
	GPT->GPTMTAPR=0;
	GPT->GPTMTAILR=TimerConfig[PredegT].GptChannelTickValueMax;
	GPT->GPTMICR=1;
	GPT->GPTMIMR|=1;
}


void Gpt_DisableNotification(Gpt_ChannelType CH)
{	GPT_REGISTERS * GPT= T_arr[CH];
		GPT->GPTMIMR&=0xfffffffe;

}
void Gpt_EnableNotification(Gpt_ChannelType CH){
	GPT_REGISTERS * GPT= T_arr[CH];
		GPT->GPTMIMR|=1;


}
void Gpt_StartTimer(Gpt_ChannelType CH, Gpt_ValueType Value){
		GPT_REGISTERS * GPT= T_arr [CH];

	GPT->GPTMTAILR=Value;
	uint32 x =GPT->GPTMTAILR ;
	GPT->GPTMCTL|=1;

}
void Gpt_StopTimer(Gpt_ChannelType CH){
			GPT_REGISTERS * GPT= T_arr [CH];

	GPT->GPTMCTL&=0xfffffffe;

}
Gpt_ValueType Gpt_GetTimeElapsed(Gpt_ChannelType CH){
		GPT_REGISTERS * GPT= T_arr [CH];

			return GPT->GPTMTAILR-GPT->GPTMTAV ;

}
Gpt_ValueType Gpt_GetTimeRemaining(Gpt_ChannelType CH){
		GPT_REGISTERS * GPT= T_arr [CH];

return GPT->GPTMTAV ;


}

/**
uint8 GPT_GetPredefTimerValue(Gpt_PredefTimerType PredefTimer ,uint32 * TimerValuePtr){





}**/
