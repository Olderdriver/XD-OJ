#include <stdio.h>

int main()
{
	int g=10,t,d;
	scanf("%d",&t);
	d=1000-g*t*t/2;
	if(d<0)
		d=0;
	printf("%d",d);
	
	return 0;
}

