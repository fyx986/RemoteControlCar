#include  "systemInit.h"

#define MOTOR_ENABLE_PERIPH  SYSCTL_PERIPH_GPIOA
#define ENA_PORT GPIO_PORTA_BASE
#define ENA_PIN  GPIO_PIN_4

#define MOTOR_CONTROL_PERIPH SYSCTL_PERIPH_GPIOC

#define MOTORAIN1_PORT GPIO_PORTC_BASE
#define MOTORAIN1_PIN  GPIO_PIN_4

#define MOTORAIN2_PORT GPIO_PORTC_BASE
#define MOTORAIN2_PIN  GPIO_PIN_5


#define ENB_PORT GPIO_PORTA_BASE
#define ENB_PIN  GPIO_PIN_5

#define MOTORBIN1_PORT GPIO_PORTC_BASE
#define MOTORBIN1_PIN  GPIO_PIN_6

#define MOTORBIN2_PORT GPIO_PORTC_BASE
#define MOTORBIN2_PIN  GPIO_PIN_7


//  ��������������ڣ�
int main(void)
{
    jtagWait();                                             //  ��ֹJTAGʧЧ����Ҫ��
    clockInit();                                            //  ʱ�ӳ�ʼ��������6MHz
    
    SysCtlPeriEnable(MOTOR_ENABLE_PERIPH);
    SysCtlPeriEnable(MOTOR_CONTROL_PERIPH);
    
    GPIOPinTypeOut(ENA_PORT, ENA_PIN); //MotorA
   
    GPIOPinTypeOut(ENB_PORT, ENB_PIN); //MotorB
    
    GPIOPinTypeOut(MOTORAIN1_PORT, MOTORAIN1_PIN); 
   
    GPIOPinTypeOut(MOTORAIN2_PORT, MOTORAIN2_PIN); //MotorA
    
    
    GPIOPinTypeOut(MOTORBIN1_PORT, MOTORBIN1_PIN); 
   
    GPIOPinTypeOut(MOTORBIN2_PORT, MOTORBIN2_PIN); //MotorB

    for (;;)
    {
      
      GPIOPinWrite(ENA_PORT, ENA_PIN, 0xFF);
      GPIOPinWrite(ENB_PORT, ENB_PIN, 0xFF);
      
      
      GPIOPinWrite(MOTORAIN1_PORT, MOTORAIN1_PIN, 0x00);
      GPIOPinWrite(MOTORAIN2_PORT, MOTORAIN2_PIN, 0x00);
      
      GPIOPinWrite(MOTORBIN1_PORT, MOTORBIN1_PIN, 0x00);
      GPIOPinWrite(MOTORBIN2_PORT, MOTORBIN2_PIN, 0x00);
      
      
    }
}
