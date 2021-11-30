#include <stdio.h>

int Mul(int x) {
	int ml = 1, i;
	for (i = 1; i <= x; i++)
		ml = ml * i;
	return ml;
}

int main() {
	int a, b;
	float c;
	scanf("%d %d", &a, &b);

	c = Mul(a) / Mul(b) / Mul(a - b);
	printf("%.2f", c);
	return 0;
}