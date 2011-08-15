#include <stdio.h>

char * itoa(int i,char * ch)

{
    
    int insert;
    int sign;
    int time=0;
    int tmp=i;
    do
    {
       i=i/10;
       time=time+1;
    } while(i!=0);
    sign=time-1;
    while(sign!=-1)
    {

       insert= tmp%10;
       tmp=tmp/10;
       ch[sign]=insert+'0';
       sign--;
    }
    ch[time]='\0';
    return 0;
}

int main(int argc, const char *argv[])
{
    int a=123;
    char c[32]={1};
    itoa(a,c);
    printf("123  --->  %s\n",c);
    return 0;
}
