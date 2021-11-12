#include <stdio.h>
int main()
{
    int a[4], i, j, temp;
    scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]);
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 4 - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
    }
    for (i = 1; i <= 4; i++)
        printf("%d ", a[i]);
    return 0;
}