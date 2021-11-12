#include<stdio.h>
int main()
{
	double salary,fee;
	scanf("%lf",&salary);
	
	if(salary<=3000)
		fee = salary*0.5/100;
	else if(salary<=5000)
		fee = salary/100;
	else if(salary<=10000)
		fee = salary*1.5/100;
	else
		fee = salary*2/100;
		
	printf("%.1f\n",fee);
	return 0;
} 
