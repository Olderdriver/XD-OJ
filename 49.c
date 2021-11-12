#include <stdio.h>
int main()
{
    long int m, n;
    scanf("%d", &m);
    for (n = 0; n <= 10000; n++)
    {
        if (m == n * n)
        {
            printf("%d", n);
            break;
        }
    }
    if (n > 10000)
        printf("no");
    return 0;
}