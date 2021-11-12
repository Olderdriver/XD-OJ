#include<stdio.h>
int main()
{
	int n,sum=0;
	int i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sum += i;
	}
	printf("%d\n",sum);
	return 0;
}
