#include "SysClkCtrl.h"


void SYSCTRL_Init(void)
{
	STCTRL=0x04;
	RCCREG ->Bits.MOSCDIS=1;
	RCCREG ->Bits.OSCSRC=1;
	RCCREG ->Bits.BYPASS=0;
	RCCREG ->Bits.PWMDIV = 0 ;
	RCCREG ->Bits .USEPWMDIV=0;
	RCCREG ->Bits .USESYSDIV=1;
	RCCREG ->Bits .SYSDIV=0x9;

	RCC2REG->Bits .USERCC2 =0;
}
