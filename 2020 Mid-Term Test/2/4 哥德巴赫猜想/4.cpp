#include<stdio.h>
int isPrime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int big_even;
	scanf("%d",&big_even);
	
	int a,b;
	for(a=2;a<big_even;a++)
	{
		if(isPrime(a))
		{
			b = big_even-a;
			if(isPrime(b) && b<=a)
			{
				printf("%d %d\n",b,a);
				break;
			} 
		}
	}
	return 0;
}
