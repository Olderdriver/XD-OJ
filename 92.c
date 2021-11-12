#include<stdio.h>
int main(){
int a[6]={100,50,20,10,5,1};
 int N;
scanf("%d",&N);
 int i;
 for(i=0;i<=5;i++)
 {
  int n;
  n=N/a[i];
  printf("%d ",n);
  N=N%a[i];
 
 }
 return 0;
 }
