#include <stdio.h>
int su(int x)
{
    int i,z;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
             z=0;
            break;
        }
        else
            z= 1;
    }
    return z;
}
int main()
{   //debug
    //int z=su(7);
    //printf("%d",z);
    //return 0;
    
    
   int even, a, b, d = 1;
    scanf("%d", &even);
    int c = even;
    for (a = 2; a < even; a++)
    {
        if (su(a) == 1)
        {
            b = even - a;
            if (su(b) == 1 && b >= 2)
            { 
                if (a < c)
                    c = a;
                if (b > d)
                    d = b;
            }
        }
    }
    printf("%d %d",c,d);
    return 0; 
}