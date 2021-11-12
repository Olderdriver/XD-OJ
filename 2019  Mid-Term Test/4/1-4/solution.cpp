#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	double y;
	scanf("%d",&x);
	if(x<-100||x>12)
		printf("no");
	else
	{
		y=sqrt(2019-x*x*x+x)/(x-10);
		printf("%.2f",y);
	}
	
	return 0;
}

