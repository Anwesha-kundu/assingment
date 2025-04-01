#include<stdio.h>
int main()
{
    float p,r,t,amount,ci,n;
    printf("enter p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    printf("enter the number of times the interest is componded");
    scanf("%f",&n);
    amount = p*pow(1+r/n,n*t);
    ci= amount-p
    printf("the compound interest ci is %f",ci);
    return 0;
}
