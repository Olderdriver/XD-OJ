#include <stdio.h>
int main(void) 
{
 int a,i,b=0;
 scanf("%d",&a);
 if(a==2) b=0;
 else{
 
 for (i=2;i<a;i++)
    {
    if(a%i==0)
    b=1; 
    }}
 if(b==1)printf("NO");
 else if(b==0) printf("YES");
 return 0;
}