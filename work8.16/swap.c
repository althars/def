#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a=1;
    int b=2;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("%d,%d\n",a,b);
    return 0;
}
