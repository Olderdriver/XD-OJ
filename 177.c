#include <stdio.h>
int main()
{
    char str[101] = {'\0'};
    gets(str);
    int i, sum = 0;

    for (i = 0; '\0' != str[i]; i++)
        sum += str[i];

    printf("%d\n", sum & 0xFF);
    return 0;
}
