#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int *p;
    i=1;
    p=&i;
    printf("%d\n",*p);
    *p=2;
    printf("%d\n",i);
    return 0;
}
