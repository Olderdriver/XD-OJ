#include <stdio.h>

void convert(int n) {
	int i;
	if ((i = n / 10) != 0) {
		convert(i);
	}
	putchar(n % 10 + '0');
}

int  main() {
	int number;

	scanf("%d", &number);
	if (number < 0) {
		putchar('-');
		number = -number;
	}
	convert(number);
	return 0;
}
