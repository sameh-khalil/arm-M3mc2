/**********************************************************
*   FILE DESCRIPTION
*----------------------------------------------------------
*     \file   FileName.c
*       \brief
*       \details
*
*
***********************************************************
***********************************************************/
/**********************************************************
*   INCLUDES
***********************************************************/
#include "IntCtrl.h"
#include "MCU_HW.h"

void IntCtrl_init(void)
{
    /*TODO Configure Grouping/subGrouping in APINT register in scb */
		SCB_APINT = 0x05FA0000 ;
		SCB_APINT |=(G_SG<<8);
	
		for(int i = 0 ; i< number_of_interrupts_defined ; i++)
		{
			uint8 PRIREGNUM,PRIBYTENUM , ENREGNUM, ENBITNUM ;
			
			PRIREGNUM=SET_INTERUPT_PRIORTY[i][0]/4;
			
			PRIBYTENUM=SET_INTERUPT_PRIORTY[i][0]%4;
			
			NVIC->PRI[PRIREGNUM] |= SET_INTERUPT_PRIORTY[i][1]<<(PRIBYTENUM*8+5);
			
			ENREGNUM=SET_INTERUPT_PRIORTY[i][0]/32;
			ENBITNUM=SET_INTERUPT_PRIORTY[i][0]%32;
			
			NVIC->EN[ENREGNUM] |= (1<<ENBITNUM);
			
		}

}
/***********************************************************
*   END OF FILE: FileName.c
***********************************************************/