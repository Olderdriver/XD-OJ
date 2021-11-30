#include <stdio.h>
#include <string.h>

int fun(char x[]) {
	int d[1000], k[1000], i, j, counta = 0, countb = 0;
	j = strlen(x);
	for (i = 0; i < j; i++) {
		if (i == 0 || i % 2 == 0)
			printf("%c", x[i]);
	}

	return 0;
}

int main() {
	char str[100];
	scanf("%s", &str);
	fun(str);
	return 0;
}