#include<stdio.h>
int main()
{
	int iFigure;//待判数 
	scanf("%d",&iFigure);
	int i;//循环数
	int iPlaces=1;//位数 
	for(i=0;iFigure/10!=0;i++)
	{
		iFigure/=10;
		iPlaces++;
	}
	printf("%d",iPlaces);
	return 0;
}
