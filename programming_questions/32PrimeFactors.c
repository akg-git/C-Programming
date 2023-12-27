/*All Prime Factors of a Number*/

#include<stdio.h>
#include<math.h>
int primeChk(int n)
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


int allFactor(int n)
{
	printf("Factors of %d are: ",n);
	int i,cnt=2;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0 && primeChk(i))
		{
			printf("%d ",i);
		}
	}
	
}

int main()
{
 	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	allFactor(num);
	
	
	return 0;
}
