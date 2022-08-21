

#include "GPT.h"
#include "Dio_Types.h"

void funcion (void)
{

	Dio_FlipChannal(41);

}
	


const Gpt_ConfigType TimeConfig [5]= {{1,1000000,63999,2,&funcion},{1,10000,0xffffffff,2,0},{1,1000000,0x0000ffff,2,0},{1,1000000,0x00ffffff,2,0},{1,1000000,0xffffffff,2,0}};


