#include <stdio.h>

int main()
{
    int y, d;
    scanf("%d %d", &y, &d);
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        if (d <= 31)
            printf("%d %d", 1, d);
        else if (d <= 60)
            printf("%d %d", 2, d - 31);
        else if (d <= 91)
            printf("%d %d", 3, d - 60);
        else if (d <= 121)
            printf("%d %d", 4, d - 91);
        else if (d <= 152)
            printf("%d %d", 5, d - 121);
        else if (d <= 182)
            printf("%d %d", 6, d - 152);
        else if (d <= 213)
            printf("%d %d", 7, d - 182);
        else if (d <= 244)
            printf("%d %d", 8, d - 213);
        else if (d <= 274)
            printf("%d %d", 9, d - 244);
        else if (d <= 305)
            printf("%d %d", 10, d - 274);
        else if (d <= 335)
            printf("%d %d", 11, d - 305);
        else if (d <= 366)
            printf("%d %d", 12, d - 335);
    }
    else
    {
        if (d <= 31)
            printf("%d %d", 1, d);
        else if (d <= 59)
            printf("%d %d", 2, d - 31);
        else if (d <= 90)
            printf("%d %d", 3, d - 59);
        else if (d <= 120)
            printf("%d %d", 4, d - 90);
        else if (d <= 151)
            printf("%d %d", 5, d - 120);
        else if (d <= 181)
            printf("%d %d", 6, d - 151);
        else if (d <= 212)
            printf("%d %d", 7, d - 181);
        else if (d <= 243)
            printf("%d %d", 8, d - 212);
        else if (d <= 273)
            printf("%d %d", 9, d - 243);
        else if (d <= 304)
            printf("%d %d", 10, d - 273);
        else if (d <= 334)
            printf("%d %d", 11, d - 304);
        else if (d <= 365)
            printf("%d %d", 12, d - 334);
    }
    return 0;
}