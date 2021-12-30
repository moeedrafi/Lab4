#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,i=1;
	printf("Enter any integer to calculate it\'s factorial: ");
	scanf("%d",&a);
	b=a;
	do 
	{
		i=b*i;
		b=b-1;
	} while(b>0);
	printf("Factorial of %d is: %d",a,i);
}
