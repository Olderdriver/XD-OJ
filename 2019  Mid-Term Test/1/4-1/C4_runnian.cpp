#include<stdio.h>
int main()
{int a,n=0;
scanf("%d",&a);
while(a>=1949)
{if(a%4==0&&a%100!=0||a%400==0)
{printf("%-7d",a);
n++;
if(n%5==0) printf("\n");}
a--;}
return 0;
}