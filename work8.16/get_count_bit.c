#include <stdio.h>

int get_bit(int num,int pos)
{
    int mask=0x00000001;
    mask<<pos;
    return num & mask;
}
int count_bit(int num)
{
    int sum=0;
    int i=0;
    for (i = 0; i < 32; i++) 
    {
        sum+=get_bit(num,i);
    }
    return sum;
}
int main(int argc, const char *argv[])
{
    int i=0x11111111;
    int pos=2;
    printf("%d\n",count_bit(i));
    printf("%d\n",get_bit(i,pos));
    return 0;
}
