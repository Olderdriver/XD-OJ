#include <stdio.h>
#include <math.h>

int main()
{
	int weight, distance;
	float p = 0.5;
	double rate = 0, cost;
	
	scanf("%d%d", &weight, &distance);
	
	if (weight < 10)
		weight = 10;
	if (distance < 50)
		distance = 50;
	
	if (distance < 250)
		rate = 0.0;
	else if (distance < 500)
		rate = 0.02;
	else if (distance < 1000)
		rate = 0.05;
	else if (distance < 2000)
		rate = 0.08;
	else
		rate = 0.10;
		
	cost = p*weight*distance*(1-rate);
	printf("%.2f", cost);

	return 0;	
} 
