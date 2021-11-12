#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, p, s;
    scanf("%d %d %d", &a, &b, &c);
    if (a*a == b * b + c * c || b*b == a * a + c * c || c*c == a * a + b * b)
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%d", 2*s);
    }
    else
        printf("no");
    return 0;
}