/*Count first digit and last digit of a number*/
#include<stdio.h>

int revnum(int n)
{
	int rev=0;
	while(n>0)
	{
		rev = rev*10 + n%10;
		n/=10;
	}
	return rev;
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	//First digit
	printf("First Digit = %d",revnum(n)%10);
	
	//Last digit
	printf("\nLast Digit = %d",n%10);
	
	return 0;
}
