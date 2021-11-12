#include <stdio.h>
int main(void)
{
    char c;
    char flag;
    scanf("%c", &c);
    int i, j, n, length;
    n = c - 'A' + 1;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            printf(" ");
        }
        flag = 'A';
        length = 2 * i + 1;
        for (j = 0; j < length; j++)
        {
            printf("%c", flag);
            if (j < length / 2)
            {
                flag++;
            }
            else
            {
                flag--;
            }
        }
        printf("\n");
    }
}
