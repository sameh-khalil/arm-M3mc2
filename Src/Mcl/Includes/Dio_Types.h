/**********************************************************
*   FILE DESCRIPTION
*----------------------------------------------------------
*     \file   Dio_Types.h
*       \brief
*       \details
*
*
***********************************************************
***********************************************************/
/***********************************************************
 * GUARD
 * ********************************************************/
#ifndef DIO_TYPES_H
#define DIO_TYPES_H
/**********************************************************
*   INCLUDES
***********************************************************/
#include "MCU_HW.h"
/***********************************************************
* LOCL MACROS CONSTANT/FUNCTION
***********************************************************/
typedef enum
{
    PA_1=0,
    PA_2,
    PA_3,
    PA_4,
    PA_5,
    PA_6,
    PA_7,
    PA_8,
    
    PB_1,
    PB_2,
    PB_3,
    PB_4,
    PB_5,
    PB_6,
    PB_7,
    PB_8,
    
    PC_1,
    PC_2,
    PC_3,
    PC_4,
    PC_5,
    PC_6,
    PC_7,
    PC_8,
    
    PD_1,
    PD_2,
    PD_3,
    PD_4,
    PD_5,
    PD_6,
    PD_7,
    PD_8,
    
    PE_1,
    PE_2,
    PE_3,
    PE_4,
    PE_5,
    PE_6,
    
    PF_1=40,
    PF_2,
    PF_3,
    PF_4,
    PF_5



}Dio_ChannelType ;


typedef enum {
    PA=0,
    PB,
    PC,
    PD,
    PE,
    PF
}Dio_PortType ;

typedef enum {
    low,
    high
}Dio_LevelType;

typedef unsigned char Dio_PortLevelType ;

/***********************************************************
*   LOCAL DATA 
***********************************************************/

/***********************************************************
*   GLOBAL DATA
***********************************************************/

/***********************************************************
*   LOCAL FUNCTIONS PROTOTYPE
***********************************************************/
Dio_LevelType Dio_ReadChannal (Dio_ChannelType ChannalId);
void Dio_WriteChannal (Dio_ChannelType ChannalId,Dio_LevelType Level);
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);
void Dio_WritePort (Dio_PortType PortId ,Dio_PortLevelType Level);
Dio_LevelType Dio_FlipChannal (Dio_ChannelType ChannalId);
/***********************************************************
*   LOCAL FUNCTIONS
***********************************************************/

/***********************************************************
*   GLOBAL FUNCTIONS
***********************************************************/

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
#endif
/***********************************************************
*   END OF FILE: FileName.c
***********************************************************/