#include<stdio.h>
int main()
{
	int elc;
	scanf("%d",&elc);
	
	double fee;
	if(elc<=20)
		fee = 0;
	else if(elc<=300)
		fee = (elc-20)*0.5;
	else if(elc<=600)
		fee = (300-20)*0.5 + (elc-300)*0.6;
	else
		fee = (300-20)*0.5 + (600-300)*0.6 + (elc-600)*0.8;
		
	printf("%.1f\n",fee);
	return 0;
} 
