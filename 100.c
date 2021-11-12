#include<stdio.h>
int main()
{

int a,b,c,d;

scanf("%d %d %d", &a, &b, &c);

if ( a + b > c && a + c > b && b + c > a)
{d=a+b+c;

printf("%d",d);}

else  

printf("no");

return 0;
}
