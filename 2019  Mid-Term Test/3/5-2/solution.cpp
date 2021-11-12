#include <stdio.h>
int main()
{
	int x,y,start,finish;
	int sum=0;
	
	scanf("%d%d",&x,&y);
	start=x<y?x:y;
	finish=x>y?x:y;
	
	for(int i=start;i<=finish;i++)
	{
		int j=2;
		for(;j<=i/2&&(i%j);j++);
		if(j>i/2)
			sum+=i;
	}
	printf("%d",sum);
	
	return 0;
}
