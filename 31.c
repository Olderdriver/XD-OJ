#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main()
{
int a,b,i,c;
scanf("%d %d",&a,&b);
c=MAX(a,b);
for(i=c;i>0;i--)
   {if(a%i==0&&b%i==0)
     {printf("%d",i);
     break;}
   }

return 0;
}
