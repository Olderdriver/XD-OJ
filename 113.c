#include<stdio.h>
int main(){
float a,c,d,e,f,g;
int b;
scanf("%f %d",&a,&b);
e=a;


if(a<=3&&b<5)
{
    c=10;
    printf("%.0f",c);
}
if(a<=3&&b>=5)
{

    b=b/5;
    d=(b)*2.0;
    c=d+10.0;
    printf("%.0f",c);
}
if(a>3&&b<5&&e<=10)
{
    e=e-3;
    c=10+e*2;
    printf("%.0f",c);
}
if(a>3&&b>=5&&e<=10)
{
    e=e-3;
    b=b/5;
    d=(b)*2;
    c=d+10+e*2;
    printf("%.0f",c);
}
if(a>3&&b<5&&e>10)
{
    f=(e-10)*3;
    c=10+14+f;
    printf("%.0f",c);
}if(a>3&&b>=5&&e>10)
{
    b=b/5;
    f=(e-10)*3;
    d=(b)*2;
    c=d+10+14+f;
    printf("%.0f",c);
}
return 0;
}