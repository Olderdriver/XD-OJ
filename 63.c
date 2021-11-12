#include <stdio.h>
 
int main() 
{
	int s, a;
	scanf("%d", &s);
	a = s - 3500;
	if (a <= 0)
		printf("%d", s);
	else if (a <= 1500)
		printf("%d", s - (s - 3500) * 3 / 100);
	else if (a <= 4500)
		printf("%d", s - 1500 * 3 / 100 - (s - 5000) / 10);
	else if (a <= 9000)
		printf("%d", s - 1500 * 3 / 100 - 3000 / 10 - (s - 8000) * 2 / 10);
	else if (a <= 35000)
		printf("%d", s - 1500 * 3 / 100 - 3000 / 10 - 4500 * 2 / 10 - (s - 12500) * 25 / 100);
	else if (a > 35000)
		printf("%d", s - 1500 * 3 / 100 - 3000 / 10 - 4500 * 2 / 10 - 26000 * 25 / 100 - (s - 38500) * 3 / 10);
	return 0;
}