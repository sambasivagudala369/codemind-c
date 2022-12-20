#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1) 
        {
            printf("%d ",a);
            continue;
        }
        if(i==2)
        {
            printf("%d ",b);
            continue;
        }
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        
    }
}