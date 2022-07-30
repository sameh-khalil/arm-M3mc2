
 #ifndef ___GPT_TYPES_H__
 
 #define 		___GPT_TYPES_H__
 
 

#include "MCU_HW.h"


#include "GPT_Cfg.h"




typedef enum
{
	CH0,
	CH1,
	CH2,
	CH3,
	CH4,
	CH5,
	CH6,
	CH7,
	CH8,
	CH9,
	CH10,
	CH11
}Gpt_ChannelType ;


typedef uint32 Gpt_ValueType ;

typedef enum {
	GPT_Cont=2,
	GPT_Oneshot=1
}Gpt_ModeType;


typedef enum
{
    GPT_PREDEF_TIMER_100US_32BIT=1,
    GPT_PREDEF_TIMER_1US_16BIT,
    GPT_PREDEF_TIMER_1US_24BIT,
    GPT_PREDEF_TIMER_1US_32BIT
} Gpt_PredefTimerType;

typedef struct Gpt_ConfigType 
	{
		Gpt_ChannelType	GptChannelId;
		Gpt_ValueType	GptChannelTickFrequancy ;
		uint32 GptChannelTickValueMax ;
		Gpt_ModeType Mode;
		void (*GptNotificationPtr)(void);



}Gpt_ConfigType ;
	
	

#endif
