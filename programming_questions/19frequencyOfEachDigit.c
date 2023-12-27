/*Find frequency of each digit in a given integer*/

#include<stdio.h>

void frequencyOfDigits(unsigned int n, int f[], int size)
{
	int dig;
	//counting each digits
	while(n>0)
	{
		dig = n%10;
		f[dig] += 1;
		n/=10;
	}
	
	//print all frequencies
	int k;
	for(k=0;k<size;k++)
	{
       if(f[k]!=0)
       {
	      	printf("%d occurs %d times\n",k, f[k]);		// {digit : frequency} mapping	{array index : value}
	   }
	}
}

int main()
{
	unsigned int n;
	printf("Enter a positive integer: ");
	scanf("%u",&n);
	unsigned int uzero = 0;

	if(n<uzero)
	{
 	    printf("Invalid Input!! Enter a positive integer.");
 	    return -1;
	}
	
    int f[] = {0,0,0,0,0,0,0,0,0,0};
	int size = sizeof(f)/sizeof(f[0]);

	//calling frequency function
	frequencyOfDigits(n,f,size);
	
	
	
	return 0;
}
