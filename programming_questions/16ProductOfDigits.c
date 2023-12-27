/*Product of Digits*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int prod=1;
	while(n>0)
	{
		prod*=n%10;
		n/=10;
	}
	
	printf("Product of Digits = %d",prod);
	return 0;
}
