/*Decimal to Octal*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	
	int base=8, dig=0;
	
	long int pow=1,oct=0;
	while(n>0)
	{
		dig = n%base;
		oct += dig*pow;
		n/=base;
		pow *= 10;
	}
	printf("Octal Equivalent = %ld",oct);
	getch();
}
