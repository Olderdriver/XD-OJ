#include <stdio.h>

int main()
{
	int n=0;
	do{
		char ch;
		scanf("%c",&ch);
		if(ch=='0'||ch=='1')
		{
			n=n*2+(ch-'0');
		}
		else
			break;
	}while(1);
	printf("%d",n);
	
	return 0;
}
