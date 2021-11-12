#include<stdio.h>
void swap(int *a, int *b){
int t;
t = *a;
*a = *b;
*b = t;
}
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=1;i<=n-1;i++)
{
   for(j=1;j<=n-i;j++)
    {
       if(a[j]>=a[j+1])
         swap(&a[j],&a[j+1]);
         }
            }

k=n-1;
int b[k];
    for(i=1;i<=k;i++)
    {
      b[i]=a[i+1]-a[i];
    }
for(i=1;i<=k-1;i++)
{
   for(j=1;j<=k-i;j++)
    {
       if(b[j]>=b[j+1])
         swap(&b[j],&b[j+1]);
         }
            }
printf("%d",b[1]);
return 0;
}
