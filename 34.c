#include<stdio.h>
#include<math.h>
int sx(int x)
{   int a,z=x,sum=0,i=1;
    while(1)
    {z=z/10;
     if(z<1) break;
     else i++;
    }
    while(1)
    {
        a=x%10;
        x=x/10;
        sum=sum+pow(a,i);
        if(x<1) break;
    }
    return sum;
}
int main()
{   /* 
    int a=sx(153);
    printf("%d",a);
    return 0;
    */
    int a,b,temp,i,count=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
    temp=a;
    a=b;
    b=temp;}
    for(i=a;i<=b;i++)
    {
        if(i==sx(i))
        count+=1;
    }
    printf("%d",count);
    return 0;
}