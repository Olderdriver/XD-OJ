#include<stdio.h>
int main(){
	int m, n, min, i, t;
	scanf("%d%d",&m,&n);
	
	min=(m<n)?m:n;
	for(i=min;i>=1;i--)
		if(m%i==0&&n%i==0){
			t=i;
			break;
		}
	printf("%d %d\n",t,m*n/t);

	return 0;
}
