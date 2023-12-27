/*All Natural Number in Reverse*/
#include<stdio.h>
int main()
{
	int n;	//n: natural number
	printf("Enter a natural number: ");
	scanf("%d",&n);
	int i;
	for(i=n;i>0;i-=1)
	{
		printf("%d\t",i);
	}
	
	return 0;
}
