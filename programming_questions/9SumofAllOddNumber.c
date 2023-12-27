/*Sum of all odd natural number*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer number: ");
	scanf("%d",&n);
	
	int i=1,odd_sum=0;
	for(;i<=n;i+=2)
	{
		odd_sum+=i;
	}
	printf("Sum of Odd Natural Number = %d",odd_sum);
	return 0;
}
