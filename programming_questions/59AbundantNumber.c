/*Abundant Number*/

/* Example: 12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66, 70, 72, 78, 80, 84, 88, 90, 96, 100*/

#include<stdio.h>

int divisorSum(int n)
{
	int i,divisor;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			divisor += i;
		}
	}
	
	return divisor;
	
}

int chkAbundant(int n)
{
	int dsum=0;
	
	dsum = divisorSum(n);
	
	if(dsum>n)
        return 1;
	else
		return 0;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(chkAbundant(num))
	   	printf("%d is Abundant Number",num);
	else
	   	printf("%d is not Abundant Number",num);
	

	return 0;
}
