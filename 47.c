#include<stdio.h>
int main()
{
int h,m;
float c,d;
scanf("%d %d",&h,&m);
c=m/60.0+h;
d=4*c*c/(c+2)-20;
printf("%.2f",d);


return 0;
}

