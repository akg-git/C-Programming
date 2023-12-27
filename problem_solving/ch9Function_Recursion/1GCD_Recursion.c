/*1. Find GCD Of the two numbers using recutsion*/

/*HCF or GCD*/


#include<stdio.h>

int hcf(int a, int b)
{

	if(b==0)
	return a;
	else
		return hcf(b,b%a);
	
}

int main()
{
	int x,y;
	printf("Enter Number1: "); scanf("%d",&x);
	printf("Enter Number2: "); scanf("%d",&y);
	
	printf("HCF(%d, %d) = %d",x,y, hcf(x,y));
	
	
	return 0;
}
