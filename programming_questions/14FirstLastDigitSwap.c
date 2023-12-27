/*Swap first and Last Digit of a number*/

#include<stdio.h>

void digswap(int numarr[], int size)
{
	
	int fdig,ldig;
	
	fdig = numarr[size-1];
	ldig = numarr[0];
	
	//swapping
	numarr[0] = fdig;
	numarr[size-1] = ldig;
	
	//print the result
	printf("The Number after swapping first and last digit is: ");
	int j;
	for(j=size-1;j>=0;j--)
	{
	 	printf("%d",numarr[j]);	
	}
}

int main()
{
 	int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	
	
	int size=10;
	int numarr[size];
	
	int asize=0;
	while(num>0)
	{
		numarr[asize++] = num%10;
		num/=10;
	}
	
	digswap(numarr,asize);	
	
	return 0;
}
