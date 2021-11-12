#include <stdio.h>
int main()
#define PI 3.1415926

{
	int a, b;
	float c, d;
	scanf("%d%d", &a, &b);
	a = a / 20.0;
	b = b / 20.0;
	c =  PI * a * a * a * 7.86*4/3;
	d =  PI * b * b * b * 19.3*4/3;
	printf("%.3f %.3f",c,d);
	return 0;

}
