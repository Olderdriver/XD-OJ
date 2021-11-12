#include <stdio.h>

int main()
{
	int p1,p2,p3,p4;
	double cost1,cost2;
	int sum;
	
	scanf("%d %d%d%d",&p1,&p2,&p3,&p4);
	sum=p1+p2+p3+p4;
	cost1=sum*0.7;
	cost2=sum-100*(sum/300);
	if(cost1<=cost2)
		printf("1 %.2f",cost1);
	else
		printf("2 %.2f",cost2);
	return 0;
}

