/*Sum of all even natural number*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer number: ");
	scanf("%d",&n);
	
	int i=0,even_sum=0;
	for(;i<=n;i+=2)
	{
		even_sum+=i;
	}
	printf("Sum of Even Natural Number = %d",even_sum);
	return 0;
}
