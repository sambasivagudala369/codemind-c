#include<stdio.h>
int main()
{
    float b,c,t,s;
    scanf("%f",&b);
    if(b<200)
    {
        c=b*1.20;
        s=100;
    }
    else if(b>=200 && b<400)
    {
        c=b*1.50;
        s=100;
    }
    else if(b>=400&&b<600)
    {
        c=b*1.80;
        s=c*0.15;
    }
    else
    {
        c=b*2;
        s=c*0.15;
    }
    t=c+s;
    printf("%.2f",t);
}