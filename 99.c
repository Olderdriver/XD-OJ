#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x <= 110)
        printf("%.2f A %.2f", x / 2, 0.00);
    else if (x <= 210)
        printf("%.2f B %.2f", 110 / 2 + (x - 110) * 0.55, x - 110);
    else if (x > 210)
        printf("%.2f C %.2f", 110 / 2 + 100 * 0.55 + (x - 210) * 0.7, x - 210);

    return 0;
}