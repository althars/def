#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    i=1;
    int *p;
    p=&i;
    char *pc;
    pc=p;
    printf("%x,%d\n",pc,*pc);
    printf("%x,%d\n",pc+1,*(pc+1));
    printf("%x,%d\n",pc+2,*(pc+2));
    printf("%x,%d\n",pc+3,*(pc+3));

    return 0;
}
