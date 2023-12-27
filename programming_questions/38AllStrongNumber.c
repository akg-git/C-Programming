/*All Strong Number*/

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
	
	int i;
	for(i=1;i<num+1;i++)
	{
		if( i == chkStrongNumber(i))
			printf("%d ",i);
	}
	
	return 0;
}
