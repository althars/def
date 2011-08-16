#include <stdio.h>

const char arr[] = "012345789ABCDEF";


char *dec2hex(int i,char *pri)
{
    char tmp[32]={1};
    int time=0;
    int timetmp;
    int j;
    char result;
    do
    {
        tmp[time] = arr[i % 16];
        time++;
        i=i/16;
    }
    while(i!=0);
    tmp[time]='\0';
    timetmp=time;
    for (j = 0; j < timetmp; j++) 
    {
        pri[j]=tmp[time-1];
        time--;
    }
    pri[timetmp]='\0';
    return 0;
}

int main(int argc, const char *argv[])
{
    int i=18;
    char print[32]={1};
    dec2hex(i,print);
    printf("%s\n",print);
    return 0;
}
