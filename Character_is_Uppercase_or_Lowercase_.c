#include<stdio.h>
int main()
{
    char ak;
    scanf("%c",&ak);
    if(ak>='A'&&ak<='Z') printf("uppercase alphabet");
    else if(ak>='a'&&ak<='z') printf("lowercase alphabet");
    else printf("not an alphabet");
}