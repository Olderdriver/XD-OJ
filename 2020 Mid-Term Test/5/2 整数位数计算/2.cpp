#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int count=0;
	if(n==0)
		count = 1;
	else
	{
		while(n!=0)
		{
			n /= 10;
			count ++;
		}
	}
	
	printf("%d\n",count);
	return 0;
}
