#ifndef __STD_TYPES_H__
#define __STD_TYPES_H__



#define SET_BIT(REG, BITNO) (REG |= (1 << BITNO))
#define CLR_BIT(REG, BITNO) (REG &= ~(1 << BITNO))
#define TOG_BIT(REG, BITNO) (REG ^= (1 << BITNO))
#define GET_BIT(REG, BITNO) ((REG >> BITNO) & 1)

typedef signed char sint8;    
typedef unsigned char uint8;  
typedef signed short sint16;  
typedef unsigned short uint16;
typedef signed long sint32;   
typedef unsigned long uint32; 



#endif
