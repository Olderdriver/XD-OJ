#include <stdio.h>
int prime(int n);
int main()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
		printf("yes");
	else
		printf("no");
		
	return 0;
}
int prime(int n)
{
	int i=2;
	for(;i<=n/2&&n%i;i++);
	return i>n/2;
}
