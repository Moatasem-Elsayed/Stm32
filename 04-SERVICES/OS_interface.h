/*****************************************/
/* Author  :  Ahmed Assaf                */
/* Version :  V01                        */
/* Date    :  6 SEPTMBER 2020            */
/*****************************************/
#ifndef OS_INTERFACE_H_
#define OS_INTERFACE_H_


void SOS_voidCreateTask(u8 Copy_u8TaskID,u16 period,void (*ptr)(void),u16 Copy_u16firstDelay);
void SOS_voidStart(void);

void SOS_voidSuspendTask(u8 Copy_u8TaskID);
void SOS_voidResumeTask(u8 Copy_u8TaskID);
void SOS_voidDeleteTask(u8 Copy_u8TaskID);

#endif /* OS_H_ */