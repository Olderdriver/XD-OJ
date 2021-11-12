#include <stdio.h>
int main()
{
    int a, sum;
    sum = 0;
    while (1)
    {
        scanf("%d ",&a);
        if (a == 0)
            break;
        if ((a - 1) % 2 == 0)
            sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}