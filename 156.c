#include <stdio.h>
int main()
{   int i,j=0;
    for(i=100;i<500;i++)
    {   if(i%7==0&&i%11!=0)
        {   j++;
        }
        else if(i%11==0&&i%7!=0)
        {   j++;
        }
    }
    printf("%d",j);
}