#include<stdio.h>
int main()
{
	char c;
	int sum=0,flag=0;
	while(1)
	{
		scanf("%c",&c);
		if(c=='!')
			break;
		if(c>='0'&&c<='9')
		{
			flag = 1;
			sum += c-'0';
		}	
	}
	
	if(flag)
		printf("%d\n",sum);
	else
		printf("NAN\n");
	return 0;
}
