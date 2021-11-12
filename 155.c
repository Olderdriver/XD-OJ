#include <stdio.h>

int main() {
	int n, a, sum, i, q, k;
	sum = 0;
	a = 1;
	scanf("%d", &n);
	for (q = 1; q <= n; q++) {
		for (i = 1; i <= q; i++) {
			a = a * i;
		}
		sum = sum + a;
		k = a;
		a = 1;
	}
	printf("%d %d %d", n, k, sum);
	return 0;
}