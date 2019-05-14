#ifndef __MYIIC_H
#define __MYIIC_H

//*********************************************************************************
//IIC����
//�Ա�����:https://shop275468129.taobao.com/
//�޸�����:2018/6/25
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ���ݴ�о���� 2018-2028
//All rights reserved
//*********************************************************************************
#include "driver_utility.h"
#include "stm32f1xx_hal.h"


//IO��������	 
#define IIC_SCL    PBout(10) //SCL
#define IIC_SDA    PBout(11) //SDA	 
#define READ_SDA   PBin(11)  //����SDA 

//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(uint8_t txd);			//IIC����һ���ֽ�
uint8_t IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
uint8_t IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�

void IIC_Write_One_Byte(uint8_t daddr,uint8_t addr,uint8_t data);
uint8_t IIC_Read_One_Byte(uint8_t daddr,uint8_t addr);	  
#endif















