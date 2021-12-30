#include<stdio.h>
#include<conio.h>
int main ()
{
	// This program prompts the user to enter a float value, repeatedly prints the value after decreasing by 0.5 each time as long as its value >= 0
	float a;
	printf("Enter any float value");
	scanf("%f",&a);
	while (a>=0)
	{
		printf("\n%f",a);
		a=a-0.5;
	}
}
