#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e;
    scanf("%d%d",&x,&y);
    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;
    e=x%y;
    printf("Sum:%d
",a);
    printf("Difference:%d
",b);
    printf("Product:%d
",c);
    printf("Quotient:%d
",d);
    printf("Remainder:%d",e);
    
}