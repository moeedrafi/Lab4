#include<stdio.h>
#include<conio.h>
int main ()
{
	float a;
	printf("Enter any float value");
	scanf("%f",&a);
	for (a;a>=0;a=a-0.5)
		printf("\n%f",a);
}
