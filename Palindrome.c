#include<stdio.h>
int main()
{
    int n,q,t,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        t=q%10;
        q=q/10;
        s=s*10+t;
    }
    if(s==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}