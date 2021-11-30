#include <stdio.h>

int summ(int x) {
	int sum = 0;
	while (1) {
		sum = sum + x % 10;
		x = x / 10;
		if (x < 1)
			break;
	}
	return sum;

}

int main() {
	int n, z, c;
	scanf("%d", &n);
	z = summ(n);
	while (1) {
		if (z / 10 < 1) {
			break;
		} else
			z = summ(z);
	}
	printf("%d", z);
	return 0;
}

