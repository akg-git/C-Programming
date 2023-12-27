/*Factorial*/

#include<stdio.h>

int factorial(int n)
{
	if(n==0 || n==1)
			return 1;
	else
		return n*factorial(n-1);
}

int main()
{
	int i,fact,n;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	printf("Factorial of %d = %d! = %d", n,n,factorial(n));
	
//	if(n<=2)
//			printf("Factorial of %d is : %d!= %d",n,n,n);
//	else
//	{
//		for(i=1,fact=1;i<=n;fact*=i,i++);
//		printf("Factorial of %d is : %d!= %d",n,n,fact);
//	}
	
	return 0;
}
