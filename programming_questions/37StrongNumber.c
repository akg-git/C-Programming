/*Strong Number
-> Sum of factorial of digits
e.g. 1, 2, 145, and 40585
*/

#include<stdio.h>

int factorial(int n)
{
	if(n==0 || n==1)
			return 1;
	else
		return n*factorial(n-1);
}

int chkStrongNumber(int n)
{
	int strongSum=0;
	while(n>0)
	{
		strongSum += factorial(n%10);
		n/=10;
	}
	
	return strongSum;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num<1)
	{
		printf("Invalid Input !! Enter any Natural Number");
		return -1;
	}
	
	if( num == chkStrongNumber(num))
		printf("%d is a Strong Number",num);
	else
	    printf("%d is not a Strong Number",num);
		
	
	return 0;
}
