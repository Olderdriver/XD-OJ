#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b<=c || a+c<=b || b+c<=a)
		printf("不是三角形");
	else if(a*a+b*b == c*c)
		printf("%d",a*b/2);
	else if(a*a+c*c == b*b)
		printf("%d",a*c/2);
	else if(b*b+c*c == a*a)
		printf("%d",c*b/2);
	else
		printf("其他三角形");
	return 0;
}
