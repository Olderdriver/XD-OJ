#include <stdio.h>

int main() {
	int a, b, c;
	double d;
	scanf("%d %d %d", &a, &b, &c);
	d = (a + b + c) / 3.0;
	printf("%.2lf", d);
	return 0;
}
