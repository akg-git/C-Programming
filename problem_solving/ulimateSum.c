/*Ultimate Sum of Digits*/

#include<stdio.h>

int ultimateSum(int n)
{
	int us=0;
	while(n>0)
	{
		us+=n%10;
		n/=10;
	}
	if(us>9)
	   us=ultimateSum(us);
    
    return us;
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	printf("Ultimate Sum of %d = %d",n,ultimateSum(n));
	
}
