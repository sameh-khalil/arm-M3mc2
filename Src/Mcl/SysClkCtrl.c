#include "SysClkCtrl.h"


void SYSCTRL_Init(void)
{

	RCCREG ->Bits.MOSCDIS=1;
	RCCREG ->Bits.OSCSRC=1;
	RCCREG ->Bits.BYPASS=1;
	RCCREG ->Bits.PWMDIV = 0 ;
	RCCREG ->Bits .USEPWMDIV=0;
	RCCREG ->Bits .USESYSDIV=0;



}
