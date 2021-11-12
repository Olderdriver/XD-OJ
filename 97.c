#include<stdio.h>
int main()
{   int i,p;
    char a='a';
    for(i=1;i<=26;i++)
   {
    printf("%c ",a);
     a=a+1;
   }
   i=i-1;
   a=a-1;
 
   printf("\n");
   for(;i>=1;i--)
   {
       printf("%c ",a);
       a=a-1;
    }
    return 0;
}