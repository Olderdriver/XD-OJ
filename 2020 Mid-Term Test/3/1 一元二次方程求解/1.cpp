#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	
	double delta = b*b-4*a*c;
	double x1,x2;
	if(delta>0)
	{
		double c = sqrt(delta);
		x1 = (-b+c)/(2*a);
		x2 = (-b-c)/(2*a);
		printf("%.1f %.1f\n",x1,x2);
	}
	else if(delta == 0)
	{
		x1 = -b/(2*a);
		printf("%.1f\n",x1);
	}
	else
		printf("no\n");
	return 0;
}
