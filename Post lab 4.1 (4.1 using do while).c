#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c=0,i;
	printf("Enter a number");
	scanf("%d",&a);
	printf("\nEven numbers less than or equal to %d are:",a);
	i=2;
	do
		{
			printf("%d\t",i);
			b=b+i;
			i=i+2;
		} while (i<=a);
	printf("\nOdd numbers less than or equal to %d are:",a);
	i=1;
	do
		{
			printf("%d\t",i);
			c=c+i;
			i=i+2;
		} while (i<=a);
	printf("\nSum of even numbers less than or equal to %d = %d",a,b);
	printf("\nSum of odd numbers less than or equal to %d = %d",a,c);
}
