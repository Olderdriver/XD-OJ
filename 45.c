#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,m;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	m=abs(arr[0]-arr[1]);
	for(i=1;i<n-1;i++)
	if(abs(arr[i]-arr[i+1])>m)
	m=abs(arr[i]-arr[i+1]);
	printf("%d",m);
	return 0;
}