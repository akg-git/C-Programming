/*Square Root using binary search*/


#include<stdio.h>

double sqrt(int n)
{
	//binary search implementation
	int l=0, h=n/2, mid;
	
	while(n>0)
	{
		if(mid*mid>n)
		    h=mid;
        else
           l=mid;
	}
	return mid;
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	printf("Square Root(%d) = %.3f",sqrt(n));
	
}


