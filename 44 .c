#include<stdio.h>
int su(int x)
{
    int i,z;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
             z=0;
            break;
        }
        else
            z= 1;
    }
    return z;
}
int fib(int n)
{   int arr,sum;
    sum =0;
    if(n==1)
    {sum=sum+1;}
    else if(n==2)
     {sum=sum+1;}
    else
    { sum=fib(n-1)+fib(n-2);}
    return sum;
}
int main()
{   
    int n;
    scanf("%d",&n);
 
    if(su(fib(n))==1)
    printf("yes");
    else
    printf("%d",fib(n));
    return 0;
}