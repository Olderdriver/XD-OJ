#include <stdio.h>
int main()
{
    int n, i;
    double sum =100, h = 100;
    scanf("%d", &n);
    for (i = 1; i <= n-1; i++)
    {
        h = h * 1 / 2;
        sum = sum +2*h;
    }
    h=h*1/2;
    printf("S=%.3lf h=%.3lf", sum, h);
    return 0;
}