#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	
	int bd=0,sd=9;
	while(x!=0)
	{
		int d = x%10;
		if(d>bd)
			bd = d;
		if(d<sd)
			sd = d;
		x /= 10;	
	}
	
	printf("%d %d\n",bd,sd);
	return 0;
}
