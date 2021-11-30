#include <stdio.h>

double fib1(int n) {
	double  sum;
	sum = 0;
	if (n == 1) {
		sum = sum + 2;
	} else if (n == 2) {
		sum = sum + 3;
	} else {
		sum = fib1(n - 1) + fib1(n - 2);
	}
	return sum;
}

double fib2(int n) {
	int  sum;
	sum = 0;
	if (n == 1) {
		sum = sum + 1;
	} else if (n == 2) {
		sum = sum + 2;
	} else {
		sum = fib2(n - 1) + fib2(n - 2);
	}
	return sum;
}

int main() {
	int n, i;
	double c, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		c = fib1(i) / fib2(i);
		sum = sum + c;
	}
	printf("%.2lf", sum);
	return 0;
}
