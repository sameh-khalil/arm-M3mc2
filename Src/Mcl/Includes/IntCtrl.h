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
#ifndef __INTCTRL_H__
#define __INTCTRL_H__
#include "IntCtrl_Types.h"
#include "IntCtrl_Cfg.h"

/***********************************************************
*   \SYNTAX            :   Std_ReturnType  FunctionName (AnyType parameterName)
*   \Description       :    Descripe this service
*   \Sync\Async        :    synchronous
*   \Reenteracy        :    Non Reenterant
*   \Parameters (in)   :    parameterName   Parameter Description
*   \Parameters (out)  :    None
*   \Retern value      :    Std_ReternType  E_OK
*                                           E_NOT_OK
***********************************************************/
void IntCtrl_init(void);

extern const uint8 SET_INTERUPT_PRIORTY [number_of_interrupts_defined][2] ;

#endif
/***********************************************************
*   END OF FILE: FileName.c
***********************************************************/