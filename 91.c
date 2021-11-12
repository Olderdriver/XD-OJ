#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,p,q;

scanf("%f %f %f",&a,&b,&c);
p=(a+b+c)/2;
q=sqrt(p*(p-a)*(p-b)*(p-c));
printf("%.2f",q);
return 0;
}


