#include <REGX52.H>
#include <string.h>
#include "XUNZHI.h"
#include "Delay.h"
#include "LCD1602.h"
void SEND(char *str) 
{
	int i,Num,length;
	length=strlen(str);
	
		for (i=0;i<=length;i++)
	{
	    Num=str[i];
		  WriteByte(i,Num%256);
			Delay(5);
			WriteByte(i+1,Num/256);
			Delay(5);
			
		
	}
	LCD_ShowString(2,1,"Write OK");
			Delay(2000);
			LCD_ShowString(2,1,"        ");
}