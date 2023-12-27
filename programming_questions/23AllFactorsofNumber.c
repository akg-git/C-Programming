/*ALlfactorsofaNumber*/

#include<stdio.h>

int allFactor(int n)
{
	printf("Factors of %d are: ",n);
	int i;
	printf("1, ");
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d, ",i);
		}
	}
	printf("%d",n);
	
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	allFactor(num);
	
	return 0;
}
