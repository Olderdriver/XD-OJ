#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    if(a<=b)
   { temp=a;
    a=b;
    b=temp;}
    a=a%10;
    b=b*b;
    printf("%d %d\n",a,b);
    return 0;


}
