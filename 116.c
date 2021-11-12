#include<stdio.h>
int main()
{
float a,b;
scanf("%f",&a);
if(a<=110)
 b=0.5*a;
if(a>110&&a<=210)
 b=55+(0.55*(a-110));
if(a>210)
 b=110+(0.7*(a-210));
printf("%.2f",b);
return 0;
}
