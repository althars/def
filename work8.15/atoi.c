#include <stdio.h>

int atoi(const char * str)
{
    int i = 0;
    int result  =0;
    int x;
    
    while(str[i]!='\0')
    {
        x = str[i]-'0';
        result = result*10+x;
        i++;
    }

    return result;
}

int main(int argc, const char *argv[])
{
    char c[4] = "123";

    printf("123 -> %d\n",atoi(c));
    return 0;
}
