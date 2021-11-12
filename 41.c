#include<stdio.h>
int main()
{
    float aver;
	int a[100],b[6]={0,0,0,0,0,0},i,n,t,h,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	   sum+=a[i];
}
aver=(float)sum/n;
printf("%.2f\n",aver);
for(i=0;i<n;i++)
{
	if(a[i]>=0&&a[i]<=50)
	b[0]++;
	else if(a[i]>=51&&a[i]<=100)
	b[1]++;
	else if(a[i]>=101&&a[i]<=150)
	b[2]++;
	else if(a[i]>=151&&a[i]<=200)
	b[3]++;
	else if(a[i]>=201&&a[i]<=300)
	b[4]++;
	else
	b[5]++;
	}
	for(i=0;i<6;i++)
	printf("%d ",b[i]);
	return 0;


}
