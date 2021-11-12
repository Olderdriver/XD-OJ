#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    if(c==37)
    {
        d=a%b;
        printf("%d%c%d=%d",a,c,b,d);
    }
    if(c==47)
    {
        d=a/b;
        printf("%d%c%d=%d",a,c,b,d);
    }if(c==42)
    {
        d=a*b;
        printf("%d%c%d=%d",a,c,b,d);
    }if(c==43)
    {
        d=a+b;
        printf("%d%c%d=%d",a,c,b,d);
    }if(c==45)
    {
        d=a-b;
        printf("%d%c%d=%d",a,c,b,d);
    }
    return 0;
}