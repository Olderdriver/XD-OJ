#include<stdio.h>
int main()
{
	double profit,prize;
	scanf("%lf",&profit);
	
	if(profit<=100000)
		prize = profit*10/100;
	else if(profit<=200000)
		prize = 100000*10/100 + (profit-100000)*7.5/100;
	else if(profit<=400000)
		prize = 100000*10/100 + 100000*7.5/100+(profit-200000)*5/100;
	else if(profit<=800000)
		prize = 100000*10/100 + 100000*7.5/100+200000*5/100+(profit-400000)*3/100;
	else
		prize = 100000*10/100 + 100000*7.5/100+200000*5/100+400000*3/100+(profit-800000)/100;
	
	printf("%.1f\n",prize);
	return 0;
} 
