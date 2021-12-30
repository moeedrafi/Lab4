#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c,d,e;
	printf("Enter first number: ");
	scanf("%d",&a); 
	printf("Enter second number: ");
	scanf("%d",&b); 
	c=a; 
	d=b; 
	while (d!=0)
	{
		e=d; 
		d=c%d; 
		c=e; 
	}
	printf("\nGCD of %d and %d is: %d",a,b,c);
}
