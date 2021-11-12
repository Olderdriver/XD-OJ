#include<stdio.h>
int isRight(int n)
{
	int f=1,sum=0;
	if(n==0) return 1;
	while(n!=0)
	{
		f *= n%10;
		sum += n%10;
		n /= 10;
	}
	return f==sum;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	int i;
	for(i=a;i<=b;i++)
	{
		if(i<0)
			continue;
		if(isRight(i))
			printf("%d ",i);
	}
	return 0;
}
