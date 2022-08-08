#include <REGX52.h>
#include <INTRINS.H>

void Delay();
void main(){
	 

	while(1)
	{
		if(P3_1 == 0){
			P2_0 = 0;
		}
		else {
			P2_0 = 1;
		}

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


