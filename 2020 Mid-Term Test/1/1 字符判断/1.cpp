#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
		printf("%c",c-'A'+'a');
	else if(c>='a'&&c<='z')
		printf("%c",c-'a'+'A');
	else if(c>='0'&&c<='9')
		printf("%c������",c);
	else
		printf("%c�������ַ�",c);
	return 0;
}
