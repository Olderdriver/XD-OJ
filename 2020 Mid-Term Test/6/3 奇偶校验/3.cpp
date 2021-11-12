#include<stdio.h>
int main()
{
	int n;
	char c;
	scanf("%d",&n);
	int oddc=0,evenc=0;
	int re;
	while(1)
	{
		scanf("%c",&c);
		if(c=='!')
			break;
		if((c>='A'&&c<='Z') || (c>='a'&&c<='z'))
		{
			re = c%n;
			if(re%2==0)
				evenc ++;
			else
				oddc ++;
		}
	}
	
	printf("%d %d\n",oddc,evenc);
	return 0;
}
