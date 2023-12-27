/*Check Power of 2 or not */

#include<stdio.h>

int chkPowerOf2(n)
{
	return n && !(n&(n-1));
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(chkPowerOf2(n))
 	  printf("%d is power of 2",n);
    else
      printf("%d is not power of 2",n);
	
	return 0;
}
