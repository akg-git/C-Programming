/*Palindrome Number*/

#include<stdio.h>

int isPalin(int n)
{
	if(n<10 && n>=0)
		return n;
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
	
	if(n == isPalin(n))
 	printf("%d is a Palindrome Number", n);
	else
	printf("%d is not a Palindrome Number", n);
	return 0;
}
