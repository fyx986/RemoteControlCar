#ifndef  __SYSTEM_INIT_H__
#define  __SYSTEM_INIT_H__

//  ������Ҫ��ͷ�ļ�
#include  <hw_types.h>
#include  <hw_memmap.h>
#include  <hw_ints.h>
#include  <interrupt.h>
#include  <sysctl.h>
#include  <gpio.h>

//  ���ϳ��ı�ʶ������ɽ϶̵���ʽ
#define  SysCtlPeriEnable       SysCtlPeripheralEnable
#define  SysCtlPeriDisable      SysCtlPeripheralDisable
#define  GPIOPinTypeIn          GPIOPinTypeGPIOInput
#define  GPIOPinTypeOut         GPIOPinTypeGPIOOutput
#define  GPIOPinTypeOD          GPIOPinTypeGPIOOutputOD

extern unsigned long TheSysClock;                           //  ����ȫ�ֵ�ϵͳʱ�ӱ���
extern void jtagWait(void);                                 //  ��ֹJTAGʧЧ
extern void clockInit(void);                                //  ϵͳʱ�ӳ�ʼ��

#endif  //  __SYSTEM_INIT_H__
