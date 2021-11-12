#include<stdio.h> 
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int c;
	if (m > n)
	{
		c = m;
		m = n;
		n = c;
	}
	int i;
	for (i = n; i >0; i--)
	{
		if (m % i == 0 && n % i == 0) 
			break;
	}
	int j;
	for (j = n; j <= m*n; j++)
	{
		if (j % m == 0 && j % n == 0)
			break;
	}
	printf("%d %d", i, j);
	return 0;
}