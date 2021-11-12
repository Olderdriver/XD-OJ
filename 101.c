#include<stdio.h>
int main()
{   char a[3];
    scanf("%c%c%c%c",&a[0],&a[1],&a[2],&a[3]);
    int i;
    for(i=0;i<=3;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        a[i]=a[i]+32;
        else if(a[i]>='a'&&a[i]<='z')
        a[i]=a[i]-32;
        else if(a[i]>='0'&&a[i]<='9')
        a[i]='*';
        else 
        a[i]='@';
    }
    printf("%c%c%c%c",a[0],a[1],a[2],a[3]);
    return 0;
}