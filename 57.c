#include<stdio.h>
int fib(int n)
{   int arr,sum;
    sum =0;
    if(n==0)
    {sum=sum+7;}
    else if(n==1)
     {sum=sum+11;}
    else
    { sum=fib(n-1)+fib(n-2);}
    return sum;
}
int main()
{
    printf("%d",fib(3));
    return 0;
}