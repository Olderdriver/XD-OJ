#include<stdio.h>
int main()
{
	int n,j,s,i;
	scanf("%d",&n);
	if (n>0 && n<30)
	{
		for(j=1;;j+=2)
		{
			s = ((j+j+2*(n-1))*n)/2;
			if (s==n*n*n)
			{
				for (i=0;i<n;i++)
				{
					printf("%d ",j+2*i);
				}
				break;
			}
		}
	}
}