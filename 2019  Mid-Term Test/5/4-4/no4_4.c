# include <stdio.h>
int main()
{int x,y,n,a,i,sum=0;
x=10000;y=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
if (x>a) x=a;
if (y<a) y=a;
}
for (i=x;i<=y;i++)
  if(i%2==0) sum+=i;
  
  printf("%d %d %d\n",x,y,sum);
  return 0;
}
