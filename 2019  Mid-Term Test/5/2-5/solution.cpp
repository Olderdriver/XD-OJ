#include <stdio.h>

int main()
{
	int a,tax;
	scanf("%d",&a);
	if(a<=5000)
		tax=0;
	else if(a<=10000)
		tax=(a-5000)*5/100;
	else if(a<=20000)
		tax=5000*5/100+(a-10000)*8/100;
	else if(a<=3000)
		tax=5000*5/100+(10000)*8/100+(a-20000)*15/100;
	else
		tax=5000*5/100+(10000)*8/100+(10000)*15/100+(a-30000)*35/100;
	printf("%d %d",tax,a-tax);
	
	return 0;
}

