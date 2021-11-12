#include<stdio.h>
int com(int a,int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum = sum*10+a;
	}
	return sum;
}
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	
	int i,sn=0;
	for(i=1;i<=n;i++)
	{
		sn += com(a,i);
	}
	
	printf("%d\n",sn);
	return 0;
}
