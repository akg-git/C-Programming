/*Perfect Number
-> Sum of all factors excluding itself
e.g. 6,28,496,8128
*/

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
	
	if( num == chkPerfectNumber(num))
		printf("%d is a Perfect Number",num);
	else
	    printf("%d is not a Perfect Number",num);
		
	
	return 0;
}
