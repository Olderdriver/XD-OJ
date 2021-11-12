#include <stdio.h>
int main()
{
    int i,bonus;
    scanf("%d", &i);
    if (i <= 100000)
        bonus = i * 0.1;
    else if (i > 100000 && i <= 200000)
        bonus = 10000 + (i - 100000) * 0.075;
    else if (i > 200000 && i <= 400000)
        bonus = 17500 + (i - 200000) * 0.05;
    else if (i > 400000 && i <= 600000)
        bonus = 27500 + (i - 400000) * 0.03;
    else if (i > 600000 && i <= 1000000)
        bonus = 33500 + (i - 600000) * 0.015;
    else
        bonus = 39500 + (i - 1000000) * 0.01;
    printf("%d", bonus);
    return 0;
}
