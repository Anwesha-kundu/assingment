#include <stdio.h>
int main()
{
int a,b,c,n;
printf("enter the numbers \n");
scanf("%d%d%d",&a,&b,&c);
n=a;
if(b>n)
n=b;
if(c>n)
n=c;
printf("the greatest among the numbers is %",n);
retun 0;
}
