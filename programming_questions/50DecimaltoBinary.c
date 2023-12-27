/*Decimal to Binary*/

#include<stdio.h>

void decimaltoBinary(unsigned int n)
{
	if(n>1)
	   decimaltoBinary(n/2);
 
    printf("%d",n%2);
}

void main()
{
	unsigned int dec;
	printf("Enter a decimal number: ");
	scanf("%u",&dec);
	
//	int base=2;
//	
//	int pow=1,dig=0;
//	long int bin=0;
//	while(n>0)
//	{
//		dig = n%base;
//		bin += dig*pow;
//		n/=base;
//		pow *= 10;
//	}

//  printf("Binary Equivalent = %ld",bin);
	
	printf("Binary Equivalent: ");
	decimaltoBinary(dec);
}
