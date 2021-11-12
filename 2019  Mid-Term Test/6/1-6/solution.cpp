#include <stdio.h>

int main()
{
	int a,b,min=2000*2000,max=0;
	
	scanf("%d%d",&a,&b);
	if((a+b)*(a+b)>max)
		max=(a+b)*(a+b);
	if((a+b)*(a+b)<min)
		min=(a+b)*(a+b);
		
	if((a-b)*(a-b)>max)
		max=(a-b)*(a-b);
	if((a-b)*(a-b)<min)
		min=(a-b)*(a-b);
		
	if((a*a+b*b)>max)
		max=(a*a+b*b);
	if((a*a+b*b)<min)
		min=(a*a+b*b);
		
	if((a*a-b*b)>max)
		max=(a*a-b*b);
	if((a*a-b*b)<min)
		min=(a*a-b*b);
	printf("%d %d",max,min);
	
	return 0;
}

