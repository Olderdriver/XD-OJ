#include <stdio.h>
int main()
{
    long int n, i, sum, a;
    float avg;
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        sum = sum + a;
    }
    avg =(float) sum / n;
    printf("%.2f", avg);
    return 0;
}