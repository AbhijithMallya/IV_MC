#include<lpc21xx.h>

void delay();

int main()
{
	PINSEL0 = 0X00000000;
	PINSEL1 = 0X00000000;
	IO0DIR = 0X00FF0000;
	while(1)
	{
		IO0PIN = 0X00000000;
		delay();
		IO0PIN = 0X00FF0000 ;
		delay();
	}
}

void delay()
{ int i;
	for(i=0;i<3000;i++);
}