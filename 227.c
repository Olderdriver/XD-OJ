#include <stdio.h>
#include <string.h>

int fun(char x[]) {
	int d[1000], k[1000], i, j, counta = 0, countb = 0;
	j = strlen(x);
	for (i = 0; i < j; i++) {
		if (x[i] <= 'Z' && x[i] >= 'A' || x[i] <= 'z' && x[i] >= 'a')
			counta += 1;
	}
	printf("%d", counta);
	return 0;
}

int main() {
	char str[100];
	scanf("%s", &str);
	fun(str);
	return 0;
}