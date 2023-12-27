/*Multiplication Table*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	while(i<11)
	{
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}
