int function(int a, int b)
{   /* 
    int a=sx(153);
    printf("%d",a);
    return 0;
    */
    int temp,i,count=0;

    if(a<100) a=100;
    if(a>b)
    {
    temp=a;
    a=b;
    b=temp;}
    for(i=a;i<=b;i++)
    {  
        int c,z=i,sum=0,q=1,x=i;
    while(1)
    {z=z/10;
     if(z<1) break;
     else q++;
    }
    while(1)
    {
        c=x%10;
        x=x/10;
        sum=sum+pow(c,q);
        if(x<1) break;
    }
        if(i==sum)
        count+=1;
    }
    return count;
}