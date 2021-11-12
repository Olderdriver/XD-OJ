#include <stdio.h>
int main()
{
    int m, b, c = 0, j = 0, k,l,n;
    scanf("%d",&k);
    n=k;
    int a[10]; //存放质因数

    int i = 2;

    while (k >= i) //判断k是否合格

    {

        if (k % i == 0) //判断k是否整除当前因数

        {

            a[j] = i; //存入因数

            k /= i; //余数

            i = 2; //令i重新等于2

            j++; //计数值
        }

        else

        {

            i++; //不能整除则当前因数为非质因数
        }
    }
    for(l=0;l<j-1;l++)
       printf("%d*",a[l]);
    printf("%d",a[j-1]);
    return 0;
}
