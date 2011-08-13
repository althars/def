#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i=1;
    int *p;
    p=&i;
    printf("0x%x\n",&i);
    printf("%d\n",*p);
    return 0;
}
