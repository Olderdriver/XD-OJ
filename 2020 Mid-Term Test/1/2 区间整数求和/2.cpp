#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	int sum = 0;
	int i;
	for(i=m;i<=n;i++)
	{
		sum += i*i;
	}
	
	printf("%d\n",sum);
	return 0;
 } 
