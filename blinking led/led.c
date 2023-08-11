//blink led p1

#include<reg52.h>

void ms_delay(unsigned int time);

void main()
{
	while(1)
	{
		P1 = 0xff; //on led
		ms_delay(1000); //delay 1s
		P1 = 0x00; // off led
		ms_delay(1000);
	}
	
}

void ms_delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0; i<time;i++) //time * 1 ms
		for(j=0;j<133;j++); // 1ms
}