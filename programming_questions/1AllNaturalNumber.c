/*All Natural Number */
#include<stdio.h>
int main()
{
	int n;	//n: natural number
	printf("Enter a natural number: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<n+1;i++)
	{
		printf("%d\t",i);
	}
	
	return 0;
}
