#include "GPT.h"



void Gpt_Init(const Gpt_ConfigType * TimerConfig)
{
	#if(PredegT==0)
	GPT_REGISTERS * GPT= T_arr[TimerConfig[PredegT].GptChannelId];
	#elif(PredegT!=0)
	GPT_REGISTERS * GPT= T_arr [TimerConfig[PredegT].GptChannelId];
	#endif
	RCGCTIMER=0x3F;
	GPT->GPTMCTL=0;
	GPT->GPTMCFG=TimerConfig[PredegT].Mode;
	GPT->GPTMTAMR=0x02;
	GPT->GPTMTAPR=(uint8)(16000000/TimerConfig[PredegT].GptChannelTickFrequancy);
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