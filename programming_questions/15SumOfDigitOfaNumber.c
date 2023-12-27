/*SumOfDigitsOfNumber*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	
	printf("Sum of Digits = %d",s);
	return 0;
}
