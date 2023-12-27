/*Sum of  first digit and last digit of a number*/
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
	
	int first_digit = revnum(n)%10;
	int last_digit= n%10;
	printf("Sum of First and Last Digit = %d", first_digit + last_digit);
	
	
	return 0;
}
