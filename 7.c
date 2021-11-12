#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  c=c%10;
  printf("%d ",c);
  if(a>5||b<200)
  printf("no");
  if(a<=5&&b>=200&&b<400)
    {   if(a==1&&(c==1||c==6))
          printf("yes");
          else if(a==1)
          printf("no");
        if(a==2&&(c==2||c==7))
          printf("yes");
           else if(a==2)
            printf("no");
        if(a==3&&(c==3||c==8))
          printf("yes");
           else if(a==3)
          printf("no");
        if(a==4&&(c==4||c==9))
         printf("yes");
           else if(a==4)
          printf("no");
        if(a==5&&(c==5||c==0))
          printf("yes");
           else if(a==5)
          printf("no");
       }
  if(a<=5&&b>=400)
    {if((a==1||a==3||a==5)&&(c==1||c==3||c==5||c==7||c==9))
       printf("yes");
       else if(a==1||a==3||a==5)
         printf("no");
     if((a==2||a==4)&&(c==2||c==4||c==6||c==8))
       printf("yes");
      else if(a==2||a==4)
         printf("no");
         }
return 0;
}
