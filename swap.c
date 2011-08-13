#include <stdio.h>

int swap(int *i,int *j)
{
    int p;
    p=*i;
    *i=*j;
    *j=p;
    return 0;
}
int main(int argc, const char *argv[])
{
    int i=1;
    int j=2;
    swap(&i,&j);
    printf("%d,%d\n",i,j);
    return 0;
}

