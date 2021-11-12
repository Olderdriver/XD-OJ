#include <stdio.h>
int main()
{
	int n;
	double sum=1.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum*=(1+1.0/i);
	}
	printf("%.1f",sum);
	
	return 0;
}
