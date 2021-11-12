#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    long long s = 0;
    int i = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n == 1)
            i = 1;

        else if (i == 1 || i == 0)
            i = 2;
        else
            i = i + 2;
        s = s + i;
        scanf("%d", &n);
    }
    printf("%lld", s);
    return 0;
}
