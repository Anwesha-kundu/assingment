#include <stdio.h>
#include <conio.h>
int flag=2,f;

void fibo(int a,int b)
{
if (flag>=f)
return;
else
{
flag++;
cout << "," <<a+b ;
fibo(b,a+b);
}
}

int main()
{
cout <<"Enter number upto which fibonacci is to be found : ";
cin >>f;
cout <<"\n0,1";
fibo(0,1);
cout<<"\n";
return 0;
}
