#include <stdio.h>

int main()
{
	int x1,y1,x2,y2,x3,y3,d1,d2,d3,min_d,max_d;
	
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	d1=x1*x1+y1*y1;
	d2=x2*x2+y2*y2;
	d3=x3*x3+y3*y3;
	min_d=d1;
	max_d=d1;
	if(min_d>d2)
		min_d=d2;
	if(max_d<d2);
		max_d=d2;
	if(min_d>d3)
		min_d=d3;
	if(max_d<d3)
		max_d=d3;
	if(d1==d2&&d1==d3)
	{
		printf("yes ");
	}
	else
	{
		printf("no ");
	}	
	printf("%d %d",min_d,max_d);
	
	return 0;
}

