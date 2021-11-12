#include<stdio.h>
int main()
{
	int n,t=1,i=0;
	scanf("%d",&n);
	int arr[n];
	for(;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])t++;
	}
	printf("%d",t);
	return 0;
}
