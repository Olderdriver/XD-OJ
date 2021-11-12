#include <stdio.h>

int main()
{
	int m,n,sum=0;
	
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		sum+=i*i;	
	}
	printf("%d",sum);
	
	return 0;
}

