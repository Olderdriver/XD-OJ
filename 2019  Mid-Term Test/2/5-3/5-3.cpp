#include <stdio.h>

int main()
{
	int n,k1,k2;
	int luck_no,luck_no_sum=0,luck_no_length=0;
	scanf("%d %d %d",&n,&k1,&k2);
	for(int i=0;i<n;i++)
	{
		int no,sum=0,length=0,no_bak;
		scanf("%d",&no);
		no_bak=no;
		if(no%10==k1||no%10==k2)
		{
			do{
				int d=no%10;
				if(d==k1||d==k2)
					sum++;
				length++;
				no/=10;
			}while(no);
			if(sum>luck_no_sum)
			{
				luck_no_sum=sum;
				luck_no=no_bak;
				luck_no_length=length;
			}
			else if(sum==luck_no_sum)
			{
				if(length>luck_no_length)
				{
					luck_no=no_bak;
					luck_no_length=length;
				}
			}
		}
	}
	printf("%d %d %d",luck_no,luck_no_sum,luck_no_length);
	
	return 0;
}

