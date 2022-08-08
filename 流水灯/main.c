#include <REGX52.h>
#include <INTRINS.H>

void Delay();
void main(){
	
	while(1)
	{
		P2 = 0xFE; //1111 1110
		Delay();
		P2 = 0xFD; //1111 1101
		Delay();
		P2 = 0xFB; //1111 1011
		Delay();
		P2 = 0xF7; //1111 0111
		Delay();
		P2 = 0xEF; //1110 1111
		Delay();
		P2 = 0xDF; //1101 1110
		Delay();
		P2 = 0xBF; //1111 1110
		Delay();
		P2 = 0x7F; //1110 1111
		Delay();
		
		
		P2 = 0xBF; //1111 1110
		Delay();
		P2 = 0xDF; //1101 1110
		Delay();
		P2 = 0xEF; //1110 1111
		Delay();
		P2 = 0xF7; //1111 0111
		Delay();
		P2 = 0xFB; //1111 1011
		Delay();
		P2 = 0xFD; //1111 1101
		Delay();
	}
}

void Delay()		//@12.000MHz  100ms
{
	unsigned char i, j;

	i = 195;
	j = 138;
	do
	{
		while (--j);
	} while (--i);
}


