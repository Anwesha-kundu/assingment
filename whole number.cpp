#include <stdio.h>
#include <conio.h>
int main()
{
	float a;
	printf("entre a number");
	scanf("%f",&a);
	if (a>=0&&(int)a==a)
	{
		printf("whole number");
	}
	else
	{
		printf("not whole number");
	}
	return 0;
}
