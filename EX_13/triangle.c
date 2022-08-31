// Trinagular Wsves

#include<lpc214x.h>

int main()
{
	unsigned long int temp = 0x00000000;
	unsigned int i =0;
	IO0DIR = 0x00FF0000;
	while(1)
	{
		for(i=0;i!=0xFF;i++)
		{temp = i ;
			temp = temp<<16;
			IO0PIN = temp ;
		}
		for(i=0xFF;i!=0;i--)
		{temp = i ;
			temp = temp<<16;
			IO0PIN = temp ;
		}
	}
}

		