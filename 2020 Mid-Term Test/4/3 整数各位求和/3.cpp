#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	int sum = 0;
	while(a!=0)
	{
		sum += a%10;
		a /= 10;
	}
	
	if(sum%b == 0)
		printf("%d %d\n",sum,sum/b);
	else
		printf("%d No\n",sum); 
	return 0;
} 
