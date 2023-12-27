/*Octal to Binary*/

#include<stdio.h>

long long int octal_to_binary(int n)
{
	//Octal to Decimal
	int base=8;
	int decimal =0;
	int pow=1;
	while(n>0)
	{
		decimal += (n%10)*pow;
		pow*=base;
		n/=10;
	}
	
	//Decimal to Binary
	
	long long int bin=0;
	int dig=0;
	base=2,pow=1;
	
	while(decimal>0)
	{
		dig = decimal%base;
		bin += dig*pow;
		n/=base;
		pow *= 10;
	}
	return bin;
	
}

int main()
{
	int oct;
	printf("Enter a Octal number: ");
	scanf("%d",&oct);
	
	printf("Binary Equivalent = %lld",octal_to_binary(oct));
	return 0;
}
