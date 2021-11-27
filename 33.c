#include <stdio.h>
double function(int n)
{ int i;
  double c=1;
  if(n==1)  c=1.0;
  else
  { for(i=1;i<=n-1;i++)
   {
      c=1/(1+c);
    }
  }
  return c;
}
int main(void) 
{
	int n;
	double y;
	scanf("%d", &n);
	y = function(n);
	printf("%.6lf", y);
	return 0;
}
