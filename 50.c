#include<stdio.h>
int main()
{
	int n,sum=0,Sum=0,like=0,t;
	scanf("%d",&n);
	int arr[n];//输入几个号码？
	for(int j=0;j<n;j++)
	scanf("%d",&arr[j]);//输入号码
	for(int i=0;i<n;i++)
	{
		t=arr[i];//以免arr[i]发生改变
		for(sum=0;t>=1;)//各位数相加
		{sum+=t%10;
		t/=10;}
		if(sum>Sum)//选号原则1
		{
			Sum=sum;
			like=arr[i];
		}
		else if(sum==Sum)//原则2
		if(like<arr[i])like=arr[i];
	}
	printf("%d",like);//输出号码
	return 0;
}
