#include<stdio.h>
int main()
{
int a,sum;
sum=0;
scanf("%d",&a);
for(;a>0;)
    {sum=sum+(a%10);
    a=a/10;}
printf("%d",sum);
return 0;
}