#include<stdio.h>
int main()
{
   int n,q,s=0;
   scanf("%d",&n);
   q=n;
   while(q!=0)
   {
       s=s*10+q%10;
       q=q/10;
   }
   if(s==n) printf("Palindrome");
   else printf("Not Palindrome");
   
}