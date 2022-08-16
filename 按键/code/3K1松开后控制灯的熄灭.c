#include <REGX52.h>
#include <INTRINS.H>

void Delay(unsigned int x) //@12.000MHz  delay x (ms)
{
    unsigned char i, j;
    while (x--)
    {
        i = 2;
        j = 239;
        do
        {
            while (--j)
                ;
        } while (--i);
    }
}

void main()
{
    while (1)
    {
        if (P3_1 == 0)
        {
            Delay(20);
            while (P3_1 == 0)
                ;
            Delay(20);
            P2_0 = ~P2_0;
        }
    }
}
