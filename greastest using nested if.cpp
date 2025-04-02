#include <stdio.h>
int main()
{
int a,b,c,n;
printf("enter three numbers"\n);
scanf("%d%d%d",&a,&b,&c);
if(a>b)
if(a>c)
n=a;
else
n=c;
else 
     if(b>c)
     n=b;
     else
     n=c;
     printf("greatest number is %d",n);
     return 0;
     }
