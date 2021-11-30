#include <stdio.h>

void tow(int n, char x) {
	int line, kong, imp;
	for (line = 1; line <= n; line++) {
		for (kong = n - line; kong > 0; kong--)
			printf(" ");
		for (imp = 1; imp <= line; imp++) {
			printf("%c ", x);
		}
		printf("\n");

	}
}

int main() {
	int a;
	char b;
	scanf("%c %d", &b, &a);
	tow(a, b);
	return 0;
}