#include<stdio.h>
int main()
{
	char c;
	int bc=0,sc=0,dc=0;
	while(1)
	{
		scanf("%c",&c);
		if(c=='!')
			break;
		if(c>='A'&&c<='Z')
			bc ++;
		else if(c>='a'&&c<='z')
			sc ++;
		else if(c>='0'&&c<='9')
			dc ++;
		else
			continue; 
	}
	
	printf("%d %d %d\n",bc,sc,dc);
	return 0;
}
