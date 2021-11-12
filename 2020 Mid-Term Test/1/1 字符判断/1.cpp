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
		printf("%c是数字",c);
	else
		printf("%c是其他字符",c);
	return 0;
}
