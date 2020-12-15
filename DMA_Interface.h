/*****************************************/
/* Author  :  Ahmed Assaf                */
/* Version :  V01                        */
/* Date    : 13 SEPTEMBER 2020           */
/*****************************************/
/*Preprocessor File Guard*/
#ifndef DMA_INTERFACE_H_
#define DMA_INTERFACE_H_

void DMA_voidChannel1Init(void);


void DMA_voidChannel1Start(u32* Copy_pu32SourceAddress, u32* Copy_pu32DestinationAddress, u16 Copy_u16BlockLength);

#endif