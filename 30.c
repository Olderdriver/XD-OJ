    #include<stdio.h>
    int main()
    {
        int i, j, s, a,b;  /*变量i控制选定数范围，j控制除数范围，s记录累加因子之和*/
        scanf("%d %d", &a,&b);  /* n的值由键盘输入*/
        for( i=a; i<=b; i++ )
        {
            s=0;  /*保证每次循环时s的初值为0*/
            for( j=1; j<i; j++ )
            {
                if(i%j == 0)  /*判断j是否为i的因子*/
                    s += j;
            }
            if(s == i)  /*判断因子这和是否和原数相等*/
                printf("%d\n", i);
        }
        return 0;
    }