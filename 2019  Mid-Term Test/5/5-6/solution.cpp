#include <stdio.h>

int main()
{
	int n,r,total_sum1=0,error=0;
	scanf("%d %d",&n,&r);
	for(int i=0;i<n;i++)
	{
		int data,sum1=0;
		scanf("%d",&data);
		while(data)
		{
			if(data%2)
				sum1++;
			data/=2;
		}
		if(sum1%2!=r)
			error++;
		total_sum1+=sum1;
	}
	if(error)
		printf("%d",error);
	else
	printf("%d",total_sum1);
	
	return 0;
}

