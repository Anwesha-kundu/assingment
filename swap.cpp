#include<stdio.h>
int main()
{
    float a=10,b=20;
    float c; 
    c=a;
    a=b;
    b=c;
    printf("%f%f",a,b);
    return 0;
}
