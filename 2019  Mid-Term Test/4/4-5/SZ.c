
#include<stdio.h>
int main(void)
{
   int i=0,n,m,x=0,y,t;

    scanf("%d%d",&n,&m);
    t=1;
    for(i=0;i<n;i++)
    {
        y=m%10;
        if (y<=1)  x=x+y*t;
        t=t*2;
        m=m/10;

    }


    printf("%d",x);

    return 0;
}
