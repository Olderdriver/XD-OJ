#include <stdio.h>
#include <string.h>

int fun(char x1[], char x2[]) {
	int d[1000], k[1000], i, j, l;
	j = strlen(x1);
	l = strlen(x2);
	for (i = 0; i < j; i++) {
		printf("%c", x1[i]);
	}
	for (i = 0; i < l; i++) {
		printf("%c", x2[i]);
	}

	return 0;
}

int main() {
	char str1[100], str2[100];
	scanf("%s", &str1);
	scanf("%s", &str2);
	fun(str1, str2);
	return 0;
}