#include <stdio.h>
int main()
{    
    int j(int x);
    int o(int x);
    int drei(int x);
    int funf(int x);
    int seben(int x);
    int n, ji, ou, d, f, s;
    scanf("%d", &n);
    ji = j(n);
    ou = o(n);
    d = drei(n);
    f = funf(n);
    s = seben(n);
    printf("%d %d %d %d %d", ji, ou, d, f, s);
    return 0;
}
int j(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
        if ((i - 1) % 2 == 0)
            sum = sum + 1;
    return sum;
}
int o(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
        if (i % 2 == 0)
            sum = sum + 1;
    return sum;
}
int drei(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
        if (i % 3 == 0)
            sum = sum + 1;
    return sum;
}
int funf(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
        if (i % 5 == 0)
            sum = sum + 1;
    return sum;
}
int seben(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
        if (i % 7 == 0)
            sum = sum + 1;
    return sum;
}