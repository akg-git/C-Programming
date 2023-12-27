/*Count no of digits in a number*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int c=0,r;
	while(n>0)
	{
		r = n%10;
		c+=1;
		n/=10;
	}
	printf("%d",c);
	return 0;
}
