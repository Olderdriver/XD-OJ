#include<stdio.h>
int main()
{
	int i,j;
	char c;
	int s,g,d;
	float tax,res;
	scanf("%c%d%d",&c,&g,&d);

	s=(d+(g-1)*200)*26;

	if(c=='A')
        s+=2000;
    else if(c=='B')
        s+=1200;
    else
        s+=500;

    if(s<=5000)
    {
        tax=0;
        res=s;
    }
    else if(s<=8000)
    {
        tax=(s-5000)*0.03;
        res=s-tax;
    }
    else if(s<=17000)
    {
        tax=(8000-5000)*0.03+(s-8000)*0.1;
        //tax=(s-5000)*0.1;
        res=s-tax;
    }
    else if(s<=30000)
    {
        tax=(8000-5000)*0.03+(17000-8000)*0.1+(s-17000)*0.2;
        res=s-tax;
    }
    else if(s<=40000)
    {
        tax=(8000-5000)*0.03+(17000-8000)*0.1+(30000-17000)*0.2+(s-30000)*0.25;
        res=s-tax;
    }
    else if(s<=60000)
    {
        tax=(8000-5000)*0.03+(17000-8000)*0.1+(30000-17000)*0.2+(40000-30000)*0.25+(s-40000)*0.3;
        res=s-tax;
    }
    else if(s<=85000)
    {
        tax=(8000-5000)*0.03+(17000-8000)*0.1+(30000-17000)*0.2+(40000-30000)*0.25+(60000-40000)*0.3+(s-60000)*0.35;
        res=s-tax;
    }
	else
    {
        tax=(8000-5000)*0.03+(17000-8000)*0.1+(30000-17000)*0.2+(40000-30000)*0.25+(60000-40000)*0.3+(85000-60000)*0.35+(s-85000)*0.45;
        res=s-tax;
    }

    printf("%.2f %.2f",tax,res);
	return 0;
}
