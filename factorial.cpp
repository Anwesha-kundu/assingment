#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,afact,i;
	printf("enter the number");
	scanf("%d",&a);
	afact=1;
	for (i=1;i<a;i++)
	afact = afact*i;
	printf("\n%d factorial is %d,a,afact");
	getch();
}
