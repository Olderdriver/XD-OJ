#include <stdio.h>
#include <math.h>

int main () {

	double a;
	scanf("%lf", &a);
	if (a >= 0) {
		a = pow(a, (1.0 / 2.0));
	} else {
		a = pow((a + 1), 2) + (2 * a) + (1 / a);
	}

	printf("%.2lf", a);
	return 0;

}