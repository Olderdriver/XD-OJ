#include <string.h>
#include <stdio.h>

void convert(char b[], char m[]) {
	int i, n;
	n = strlen(b);
	n--;
	for (i = 0; n >= 0; n--, i++)
		m[i] = b[n];
}

void main() {
	int i;
	char a[100], b[100] = {0};
	scanf("%s", &a);
	convert(a, b);
	printf("%s", b);
}