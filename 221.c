#include <stdio.h>
#include <string.h>

int count(char x[]) {
	int d[1000], k[1000], i, j, counta = 0, countb = 0;
	j = strlen(x);
	for (i = 0; i < j; i++) {
		if (x[i] <= 'Z' && x[i] >= 'A' || x[i] <= 'z' && x[i] >= 'a')
			counta += 1;
		else if (x[i] <= '9' && x[i] >= '0')
			countb += 1;
	}
	printf("%d,%d", counta, countb);
	return 0;
}

int main() {
	char str[100];
	scanf("%s", &str);
	count(str);
	return 0;
}