/*WAP to find nth prime number*/

#include<stdio.h>
#include<math.h>

int prime(int n)
{
	if(n<1)
	{
		printf("Enter Natural Number to check prime or not.");
		return -1;
	}
	
 	int i,flag=1;
 	for(i=2;i<=sqrt(n);i++)
 	{
 		if(n%i==0)
 		{
 			flag=0; break;
		 }
    }
    
    return flag;	
}

int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);

	int i=2,primeC=0,nPrime=2;
	while(num!=primeC)
	{
		if(prime(i))
		{
			primeC+=1;
			nPrime=i;
		}
		i+=1;
	}

	printf("Nth Prime Number = %d",nPrime);
	return 0;
}
