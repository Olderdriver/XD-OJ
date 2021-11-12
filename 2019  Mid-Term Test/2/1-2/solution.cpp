#include <stdio.h>

int main()
{
	int second,day,hour,minute;
	scanf("%d",&second);
	day=second/86400;
	second%=86400;
	hour=second/3600;
	second%=3600;
	minute=second/60;
	second%=60;
	
	if(day)
		printf("%d %d:%d:%d",day,hour,minute,second);
	else
		printf("%d:%d:%d",hour,minute,second);
		
	return 0;
}

