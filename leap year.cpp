#include <stdio.h>
int main()
{
int a;
printf("enter year");
scanf("%d"&a);
if (a%400==0)
{
             printf ("%d is a leap year ",a);
             }
             if(a%100==0);
             {
             printf ("%d is a not leap year ",a);
             }
             else
             {
                 printf ("%d is a leap year ",a);
                 }
                 return 0;
                 }
