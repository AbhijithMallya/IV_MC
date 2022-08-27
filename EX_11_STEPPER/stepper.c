#include<lpc214x.h>

unsigned int var ;
unsigned long int i,j,k;

void clock_wise(void);
void anti_clock_wise(void);

int main(void)
{
		PINSEL2 = 0X00000000;
		IO1DIR |= 0X00F00000 ;
		while(1)
		{
			for(j=0;j<25;j++)
				clock_wise();
			for(k=0;k<65000;k++);
			for(j=0;j<25;j++)
				anti_clock_wise();
			for(k=0;k<65000;k++);
		}
}

void clock_wise(void)
{
	var = 0x00080000;
	for(i=0;i<3;i++)
	{
		var<<=1;
		IO1CLR = 0x00F00000;
		IO1SET = var;
		for(k=0;k<65000;k++);
			
	}
}
	

void anti_clock_wise(void)
{
	var = 0x00800000;
	for(i=0;i<3;i++)
	{
		var>>=1;
		IO1CLR = 0x00F00000;
		IO1SET = var;
		for(k=0;k<65000;k++);
			
	}
}
