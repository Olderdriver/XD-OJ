# include <stdio.h>
# include <math.h>
int main(void)
{
    int x,t;
    int i;
    double sum=0;
    scanf("%d%d",&x,&t);
    if(t>20)
        t=20;
    sum=x;
    for(i=1; i<=t; i++)
    {
        if(sum<50000)
            sum=sum*(1+0.02);
        else if(sum<200000)
            sum=sum*(1+0.03);
        else if(sum<500000)
            sum=sum*(1+0.04);
        else if(sum<2000000)
            sum=sum*(1+0.05);
        else
            sum=sum*(1+0.06);

    }
    printf("%d",(int)sum);
    return 0;
}
