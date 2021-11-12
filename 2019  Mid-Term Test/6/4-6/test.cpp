#include <stdio.h>
int sum_factor(int n);
int judge(int x,int y);

int main()
{
	int n,m,count=0;
	scanf("%d%d",&n,&m);

	for(int i=n>1?n:2;i<=m;i++)
	{
		for(int j=i;j<=m;j++)
		{
			if(judge(i,j))
			{
				printf("%d %d\n",i,j);
				count++;
			}	
		}
	}
	printf("%d",count);
	return 0;
}

int judge(int x,int y)
{
	return sum_factor(x)==y&&sum_factor(y)==x;
}

int sum_factor(int n)
{
	int sum=1;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	
	return sum;
}


