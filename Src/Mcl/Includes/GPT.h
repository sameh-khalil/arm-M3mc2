
#ifndef ___GPT_H__
 
#define ___GPT_H__
 


#include "GPT_Types.h"

void Gpt_Init(const Gpt_ConfigType * TimerConfig);
void Gpt_DisableNotification(Gpt_ChannelType CH);
void Gpt_EnableNotification(Gpt_ChannelType CH);
void Gpt_StartTimer(Gpt_ChannelType CH, Gpt_ValueType Value);
void Gpt_StopTimer(Gpt_ChannelType CH);
Gpt_ValueType Gpt_GetTimeElapsed(Gpt_ChannelType CH);
Gpt_ValueType Gpt_GetTimeRemaining(Gpt_ChannelType CH);
uint8 GPT_GetPredefTimerValue(Gpt_PredefTimerType PredefTimer ,uint32 * TimerValuePtr);

extern const Gpt_ConfigType TimerConfig [5];
static GPT_REGISTERS* T_arr[12] = {GPT_0,GPT_1,GPT_2,GPT_3,GPT_4,GPT_5,GPT_6,GPT_7,GPT_8,GPT_9,GPT_10,GPT_11};



#endif
