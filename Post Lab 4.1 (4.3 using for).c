#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,i=1;
	printf("Enter any integer to calculate it\'s factorial");
	scanf("%d",&a);
	for (b=a;b>0;b--)
		i=b*i;
	printf("Factorial of %d is: %d",a,i);
}
