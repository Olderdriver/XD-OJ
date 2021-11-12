#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int i,x,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x>=a && x<=b)
			count ++;
	}
	
	printf("%d\n",count);
	return 0;
}
