/*Print nth fibo number using recursion*/
/*
  		1st 2nd 3rd 4th 5th ..... Nth
  		 0	 1	 1	 2	 3 .......

*/

#include<stdio.h>

int fiboN(int n)
{
	if(n==0 || n==1)
			return n;
	else
		return fiboN(n-2) + fiboN(n-1);
}

int main()
{
	int num;
	printf("Enter N: ");
	scanf("%d",&num);
	printf("Nth number of fibonacci series is %d", fiboN(num-1));
	
	return 0;
}


