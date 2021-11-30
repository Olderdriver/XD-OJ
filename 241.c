#include <stdio.h>

#include <math.h>

#include <string.h>

int main()

{

	char a[10];

	void convert(char a[]);

	gets(a);

	convert(a);

	return 0;

}

void convert(char a[])

{

	int n, i, num = 0;

	n = strlen(a);

	for (i = n - 1; i >= 0; i--)

	{

		if (a[i] >= '0' && a[i] <= '9')

			num += (a[i] - '0') * pow(16, n - 1 - i);

		else if (a[i] >= 'A' && a[i] <= 'Z')

			num += (10 + (a[i] - 'A')) * pow(16, n - 1 - i);

		else if (a[i] >= 'a' && a[i] <= 'z')

			num += (10 + (a[i] - 'a')) * pow(16, n - 1 - i);

	}
	printf("%d", num);
}