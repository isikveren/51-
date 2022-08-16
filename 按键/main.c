#include <REGX52.h>
#include <INTRINS.H>

const unsigned char segCode[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void Delay1ms() //@12.000MHz
{
	unsigned char i, j;

	i = 2;
	j = 239;
	do
	{
		while (--j)
			;
	} while (--i);
}
void Delay(unsigned int x) // delay x ms
{
	while (x--)
	{
		Delay1ms();
	}
}

void SelectDisp(int x)
{
	switch (x)
	{
	case 0:
		P2_4 = 0;
		P2_3 = 0;
		P2_2 = 0;
		break;
	case 1:
		P2_4 = 0;
		P2_3 = 0;
		P2_2 = 1;
		break;
	case 2:
		P2_4 = 0;
		P2_3 = 1;
		P2_2 = 0;
		break;
	case 3:
		P2_4 = 0;
		P2_3 = 1;
		P2_2 = 1;
		break;
	case 4:
		P2_4 = 1;
		P2_3 = 0;
		P2_2 = 0;
		break;
	case 5:
		P2_4 = 1;
		P2_3 = 0;
		P2_2 = 1;
		break;
	case 6:
		P2_4 = 1;
		P2_3 = 1;
		P2_2 = 0;
		break;
	case 7:
		P2_4 = 1;
		P2_3 = 1;
		P2_2 = 1;
		break;
	}
}
void DispLED(int x, unsigned char y)
{
	SelectDisp(x);
	P0 = segCode[y];
	Delay(1);
	P0 = 0x00;
}
void main()
{
	unsigned char LedNum = 0;
	int i = 0;
	while (1)
	{

		for (i = 0; i < 8; i++)
		{
			DispLED(i, i + 2);
		}
	}
}
