#include<stdio.h>
int main()
{
	int n,sum=0,Sum=0,like=0,t;
	scanf("%d",&n);
	int arr[n];//���뼸�����룿
	for(int j=0;j<n;j++)
	scanf("%d",&arr[j]);//�������
	for(int i=0;i<n;i++)
	{
		t=arr[i];//����arr[i]�����ı�
		for(sum=0;t>=1;)//��λ�����
		{sum+=t%10;
		t/=10;}
		if(sum>Sum)//ѡ��ԭ��1
		{
			Sum=sum;
			like=arr[i];
		}
		else if(sum==Sum)//ԭ��2
		if(like<arr[i])like=arr[i];
	}
	printf("%d",like);//�������
	return 0;
}
