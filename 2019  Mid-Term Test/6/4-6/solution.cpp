#include <stdio.h>

int main()
{
	int n,m,sum_n=1,sum_m=1,count_n=1,count_m=1,i;
	
	scanf("%d%d",&n,&m);

	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum_n+=i;
			count_n++;
		}	
	}

	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			sum_m+=i;
			count_m++;
		}	
	}
	
	if(sum_n==m&&sum_m==n)
		printf("yes ");
	else
		printf("no ");
	printf("%d %d",count_n,count_m);
	return 0;
}



