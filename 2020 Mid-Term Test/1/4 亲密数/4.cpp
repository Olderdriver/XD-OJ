#include<stdio.h>
int GetFactorSum(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sum += i;
	}
	
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	
	int a,b;
	int count = 0;
	for(a=2;a<=n;a++)
	{
		b = GetFactorSum(a);
		int temp = GetFactorSum(b);
		if(temp == a && a<b)
		{
			printf("(%d,%d)",a,b);
			count ++;
		}
	}
	if(count==0)
		printf("nothing");
	return 0;
}
