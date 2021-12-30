#include<stdio.h>
#include<conio.h>
int main ()
{ 
	int a,b,c=0;
	printf("Enter any value: ");
	scanf("%d",&a);
	b=1;
	while (b<=a)
		{c=c+b;
		b=b+1;}
	printf("Sum of integers from 1 to %d is: %d",a,c);
}
