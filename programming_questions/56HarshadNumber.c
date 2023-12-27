/*Harshad Number*/

#include<stdio.h>

int chkHarshad(int n)
{
	int temp=n;
	int s=0;
	while(temp>0)
	{
		s+=temp%10;
		temp/=10;
	}
	
	if(n%s==0)
     return 1;
    else
     return 0;
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(chkHarshad(n))
	   	printf("%d is a Harshad Number",n);
	else
	   	printf("%d is not a Harshad Number",n);
	

	return 0;
}
