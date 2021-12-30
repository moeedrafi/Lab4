#include<stdio.h>
#include<conio.h>
int main ()
{ 
	int a,b,c=0;
	printf("Enter any value: ");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
		{c=c+b;}
	printf("Sum of integers from 1 to %d is: %d",a,c);
}
