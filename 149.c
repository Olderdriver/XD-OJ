#include <stdio.h>
#include <math.h>

int main () {
	float b, sgn, n;
	int i, a;
	float sum = 0;
	sgn = -1;
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		for (n = 1; n <= i; n++) {
			sgn = sgn * (-1);
		}
		b = sgn * (float)i / (float) (2 * i - 1);
		sum = sum + b;
		sgn = -1;
	}
	printf("%.3f", sum);
	return 0;
}