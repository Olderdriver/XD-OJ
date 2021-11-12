#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    if (m<60)
        printf("E");
    if (m >=60 && m <= 69)
        printf("D");
    if (m > 69 && m <= 79)
        printf("C");
    if (m >= 80 && m <= 89)
        printf("B");
    if (m >= 90)
        printf("A");
    return 0;
}