#include <stdio.h>
int main()
{
    int z[3];
    int i, j, k, a, b, temp;
    scanf("%d %d", &a, &b);
    z[1] = (a + b) * (a + b);
    z[2] = (a - b) * (a - b);
    z[3] = a * a - b * b;
    z[4] = a * a + b * b;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <4 - i; j++)
        {
       
        if (z[j] >= z[j + 1])
        {
            temp = z[j + 1];
            z[j + 1] = z[j];
            z[j] = temp;
        }
    }
}
printf("%d %d", z[3], z[1]);
return 0;
}