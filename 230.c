#include <stdio.h>
int fun(int x, int y[]);

int main() {
	int x, i, n, a[1000];
	scanf("%d", &x);
	n = fun(x, a);
	printf("%d\n", n);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

int fun(int x, int y[]) {
	int i, a, j, k = 0;
	int b[1000];
	for (i = 0; i < x; i++)
		b[i] = i + 1;
	for (i = 1; i < x; i++) {
		for (a = 1, j = 2; j < i; j++)
			if (b[i] == 2) {
				y[k] = 2;
				k++;
			} else if (b[i] != 2)
				if (b[i] % j == 0)
					a = 0;
		if (a) {
			y[k] = b[i];
			k++;
		}
	}
	return k;
}