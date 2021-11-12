#include <stdio.h>
static int k = 0;
static int l = 0;
int sum(int number)
{
    int i;
    int sum = 0;
    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
            k = k + 1;
        }
    }
    return sum;
}
int bum(int number)
{
    int i;
    int sum = 0;

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
            l = l + 1;
        }
    }
    return sum;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    bum(m);
    if (sum(n) == m)
        printf("yes ");
    else
        printf("no ");
    printf("%d %d", k, l);
    return 0;
}