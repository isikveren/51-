#include <REGX52.h>
#include <INTRINS.H>

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

void main()
{
    unsigned char LedNum = 0;

    while (1)
    {
        if (P3_1 == 0)
        {
            Delay(20);
            while (P3_1 == 0)
                ;
            Delay(20);
            LedNum++;
            P2 = ~LedNum;
        }
    }
}
