#include <stdio.h>

char * dec2bin(int in,char * ch)
{
    char tmp[32]={1};
    int time=0;
    int timetmp;
    int fil;
    while(in/2!=0)
    {   
        tmp[time]=in%2+'0';
        in=in/2;
        time++;
    }
    tmp[time]=1+'0';
    tmp[time+1]='\0';

    timetmp=time;
    for(fil=0;fil<=timetmp;fil++)
    {
        ch[fil]=tmp[time];
        time--;
    }
    ch[timetmp+1]='\0';
    return 0;
}

int main(int argc, const char *argv[])
{
    int i=2;
    char ch[32]={1};
    dec2bin(i,ch);
    printf("%s\n",ch);
    return 0;
}
