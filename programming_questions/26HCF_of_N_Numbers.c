/*HCF/GCD of N numbers*/

#include<stdio.h>

//EUCLIDEAN ALGORTIHM for GCD
int hcf(int a, int b)
{	
	if(b==0 || a==b)
        return a;
    else if(a==0)
        return b;
	else if(a>b)
		return (hcf(a%b, b));
	else if(b>a)
        return (hcf(a, b%a));
	
}


int main()
{
	int n,num1,num;
	printf("Enter Total Numbers: ");
	scanf("%d",&n);
	
	printf("\nEnter first  number: ");
	scanf("%d",&num1);
	
	int gcd = num1;
	int i;
	for(i=1;i<n;i++)
	{
	    printf("\nEnter Next Number: ");
	    scanf("%d",&num);
	    
	    gcd = hcf(gcd,num);
	
	}
	printf("HCF = %d",gcd);
	return 0;
}
