#include <REGX52.H>
#include "LCD1602.h"
#include "Key.h"
#include "XUNZHI.h"
#include "Delay.h"
#include <string.h>
#include "SEND.h"
unsigned char KeyNum;

void main()
{
	char nn[20];
	int Num,i,length;
	SEND("Hello ROBOCON");
	LCD_Init();
	             // д�������ʾWrite OK
	while(1)   //���°���4���ȡ������ʾ��LCD1602��
	{
		KeyNum=Key();
	if(KeyNum==4)	
		{
			for (i=0;i<=length;i++)
			{
				Num=ReadByte(i+10);
			  Num|=ReadByte(i+11)<<8;
			  nn[i]=Num;
			 
			}
			 LCD_ShowString(2,1,nn);
	}
	
}
		
	
}
