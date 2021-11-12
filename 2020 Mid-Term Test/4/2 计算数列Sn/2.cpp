#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	double sn=0;
	int i;
	for(i=1;i<=n;i++)
	{
		sn += 1+1.0/i;
	}
	
	printf("%.1f\n",sn);
	return 0;
}
