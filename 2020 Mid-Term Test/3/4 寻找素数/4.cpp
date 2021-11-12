#include<stdio.h>
int isPrime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	
	int count = 0;
	int i;
	for(i=2;i<n;i++)
	{
		if(isPrime(i))
			count ++;
	}
	
	printf("%d\n",count);
	return 0;
} 
