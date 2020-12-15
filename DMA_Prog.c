/*****************************************/
/* Author  :  Ahmed Assaf                */
/* Version :  V01                        */
/* Date    : 13 SEPTEMBER 2020           */
/*****************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DMA_REG.h"
#include "DMA_Interface.h"
#include "DMA_Prv.h"
#include "DMA_Config.h"

void DMA_voidChannel1Init(void)
{
	/*
		Memory to memory
		Priority very high
		Source, destination size=32bit
		MINC , PINC activated
		No circular
		Direction: peripheral to memory
		Transfer complete interrupt enable
		Channel Disable
	*/
	DMA->Channel[0].CCR=0x00007AC2;
}


void DMA_voidChannel1Start(u32* Copy_pu32SourceAddress, u32* Copy_pu32DestinationAddress, u16 Copy_u16BlockLength)
{
	/*Make sure channel is disabled*/
	CLR_BIT(DMA->Channel[0].CCR,0);
	/*Load the addresses*/
	DMA->Channel[0].CPAR=Copy_pu32SourceAddress;
	DMA->Channel[0].CMAR=Copy_pu32DestinationAddress;
	
	/*Load the block length*/
	DMA->Channel[0].CNDTR=Copy_u16BlockLength;
	
	SET_BIT(DMA->Channel[0].CCR,0);
}
