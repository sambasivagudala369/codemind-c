#include<stdio.h>
int main()
{
    int b,d,h;
    scanf("%d",&b);
    float g;
    if(b<=10000)
    {
        d=b*0.8;
        h=0.2*b;
        g=b+d+h;
    }
    else if(b<=20000)
    {
        d=0.9*b;
        h=0.25*b;
        g=b+d+h;
    }
    else if(b>20000)
    {
        d=0.95*b;
        h=0.3*b;
        g=b+d+h;
    }
    printf("%.2f",g);
}