#include<stdio.h>
int main()
{
    int s,h,m;
    scanf("%d",&s);
    h=s/3600;
    m=(s-(3600*h))/60;
    s=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}