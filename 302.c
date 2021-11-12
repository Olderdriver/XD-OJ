#include<stdio.h>
#include<math.h>
int main()
{
	int is_prime(int x);
	int p,i,n,sum=0,j;
	scanf("%d",&p);
	int arr[p+9];
	arr[0]=2;
	for(i=1,n=3;i<p+10;n+=2)
	if(is_prime(n))
	{
		arr[i]=n;
		++i;
	}
	for(j=p-1;j<p+10;j++)
	sum=sum+arr[j];
	printf("%d",sum);
	return 0; 
}
int is_prime(int x)
{
	 for(int a=2;a<=sqrt(x);a++)
	 if(x%a==0)return 0;
	 return 1;
}
