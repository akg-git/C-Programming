/*Sum of all Prime Number between 1 to N*/

#include<stdio.h>
#include<math.h>

int prime(int n)
{
	if(n==2||n==3)
       return n;
 
    int i,flag=1;
    for(i=2;i<sqrt(n)+1;i++)
    {
    	if(!(n%i))
    	{
    		flag=0;
    		break;
		}
	}
	
	return flag;
}

int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	
	int i,primeSum=0;
	for(i=2;i<num+1;i++)
	{
		if(prime(i))
		{
			primeSum+= i;
		}
	}
	printf("Sum of All Prime Numbers = %d",primeSum);
	return 0;
}
