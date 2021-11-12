#include<stdio.h>
int gcd(int m,int n)
{
	if(m>n)
	{
		int temp;
		temp = m;
		m = n;
		n = temp;
	}
	
	int i;
	for(i=m;i>=1;i--)
	{
		if(m%i==0 && n%i==0)
			return i;
	}
}
int gbs(int m,int n)
{
	if(m>n)
	{
		int temp;
		temp = m;
		m = n;
		n = temp;
	}
	int i;
	for(i=n;i<=m*n;i++)
	{
		if(i%m==0 && i%n==0)
			return i;
	}
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	printf("%d %d\n",gcd(m,n),gbs(m,n));
	return 0;
} 
