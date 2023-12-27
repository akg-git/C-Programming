/*WAP to find largest power of 2 less than or equal to given number*/

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
	
	int i,lpower;
	for(i=n;i>0;i--)
	{
		if(chkPowerOf2(i))		//if ltself largest power return it otherwise decrease number by 1 not bitwise) and check
		{
			lpower = i; break;
		}
	}
	printf("Largest power of 2 is %d",lpower);
	return 0;
}
