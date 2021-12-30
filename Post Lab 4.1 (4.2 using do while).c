#include<stdio.h>
#include<conio.h>
int main ()
{
	float a;
	printf("Enter any float value");
	scanf("%f",&a);
	do
	{
		printf("\n%f",a);
		a=a-0.5;
	} while (a>=0);
}
