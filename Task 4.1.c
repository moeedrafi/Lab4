#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c=0,i;
	printf("Enter a number");
	scanf("%d",&a);
	printf("\nEven numbers less than or equal to %d are:",a);
	for (i=2;i<=a;i=i+2)
		{
			printf("%d\t",i);
			b=b+i;
		}
	printf("\nOdd numbers less than or equal to %d are:",a);
	for (i=1;i<=a;i=i+2)
		{
			printf("%d\t",i);
			c=c+i;
		}
	printf("\nSum of even numbers less than or equal to %d = %d",a,b);
	printf("\nSum of odd numbers less than or equal to %d = %d",a,c);
}
