/* All Perfect Number between 1 to N*/

#include<stdio.h>

int chkPerfectNumber(int n)
{
	int i,perfectSum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
            perfectSum += i;
		}
	}
	
	return perfectSum;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	int i;
	for(i=1;i< num+1;i++)
	{
		if( i == chkPerfectNumber(i))
			printf("%d ",i);
		
	}
	
	return 0;
}
