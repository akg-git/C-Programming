/*Octal to Decimal*/

#include<stdio.h>

int octal_to_binary(int n)
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
	
	return decimal;
	
}

int main()
{
	int oct;
	printf("Enter a Octal number: ");
	scanf("%d",&oct);
	
	printf("Decimal Equivalent = %d",octal_to_binary(oct));
	return 0;
}
