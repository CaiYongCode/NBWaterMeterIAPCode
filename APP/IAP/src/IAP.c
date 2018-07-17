/*********************************************************************************
//������
//���ߣ����ƮԾ     ʱ�䣺       �ص㣺
//CPU�ͺţ�         ϵͳ��Ƶ��
//�汾�ţ�V0.0        
*********************************************************************************/
/*********************************************************************************
�ļ�������
*********************************************************************************/
#include "IAP.h"
/*********************************************************************************
����������
*********************************************************************************/

/*********************************************************************************
��������������
*********************************************************************************/
/*********************************************************************************
�ⲿ����������
*********************************************************************************/
/*********************************************************************************
˽�б���������
*********************************************************************************/ 
//#pragma location=0x0F80
//uint32_t Vector_Table[32];
/*********************************************************************************
���Ա���������
*********************************************************************************/
/*********************************************************************************
�ڲ�����������
*********************************************************************************/
/*********************************************************************************
���ܴ��붨����
*********************************************************************************/
/*********************************************************************************
 Function:      //
 Description:   //��EEPROM��ַ����
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/
uint32_t EEPROM_ReadWord(uint32_t Address)
{
 return(*(PointerAttr uint32_t *) (uint32_t)Address);       
}

/*********************************************************************************
 Function:      //
 Description:   ////���³�ʼ��STM8���ж�������  �������¶��嵽BLD���ж�������
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/
void STM8_Interrupt_Vector_Table_Redirection(void)
{
  disableInterrupts();   //�ر��ж�  
  uint8_t Index = 0;	
  uint32_t data = 0;
 
  FLASH_Unlock(FLASH_MemType_Program);
  for(Index = 1; Index < 0X20;Index++)
  {
    data = EEPROM_ReadWord(INTERRUPT_VECTOR_ADD+4*Index);
    FLASH_ProgramWord(0X8000+4*Index,data);
  }
  FLASH_Lock(FLASH_MemType_Program);
}
/*********************************************************************************
 Function:      //
 Description:   //��ת��Ӧ�ó�������
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/
void JumptoAPP(void)
{
  sim();               // disable interrupts�����������תǰ���жϣ���ת���³��������һ���жϡ�
  asm("LDW X,  SP ");
  asm("LD  A,  $FF");
  asm("LD  XL, A  ");
  asm("LDW SP, X  ");
  asm("JPF $8000");
}
/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:	    	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/
/**************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/