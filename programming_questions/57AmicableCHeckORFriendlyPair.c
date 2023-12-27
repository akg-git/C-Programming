/*Americable or Friendly Pair*/
/* Example: (220, 284), (1184, 1210), (2620, 2924), (5020, 5564), (6232, 6368), (10744, 10856) and (66928, 66992)*/

#include<stdio.h>

int divisorSum(int n)
{
	int i,divisor=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			divisor += i;
		}
	}
//	printf("%d\n",divisor);
	return divisor;
	
}

int chkAmicable(int n1, int n2)
{
	int sum1=0,sum2=0;
	
	sum1 = divisorSum(n1);
	sum2 = divisorSum(n2);
	
	if(sum1 == n2 && sum2 == n1)
        return 1;
	else
		return 0;
}

int main()
{
	int num1,num2;
	printf("Enter a number1: ");
	scanf("%d",&num1);
	printf("Enter a number2: ");
	scanf("%d",&num2);
	
	if(chkAmicable(num1,num2))
	   	printf("(%d and %d) are Amicable",num1,num2);
	else
	   	printf("(%d and %d) are not Amicable Number",num1,num2);
	

	return 0;
}
