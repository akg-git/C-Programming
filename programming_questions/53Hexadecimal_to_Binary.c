/*Hexadecimal to Binary*/

#include<stdio.h>
#include <math.h>
#include <string.h>

int hex_to_bin(char hex[])
{
	//hexadecimal to decimal
	long long int decimal = 0;
	int i = 0, val, len,base=16;
	
	len = strlen(hex)-1;

	for (i = 0; hex[i] != '\0'; i++) 
	{
 		//ASCII[0->48, A->65, a->97]
		if (hex[i] >= '0' && hex[i] <= '9')
			val = hex[i] - 48;
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			val = hex[i] - 97 + 10;
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			val = hex[i] - 65 + 10;

		decimal += val * pow(base, len);
		len-=1;
	}
	
	//Decimal to Binary
	base=2;
	
	long int bin=0, pow=1;
	while(decimal>0)
	{
		bin += (decimal%base)*pow;
		decimal/=base;
		pow *= 10;
	}
	return bin;
}

int main()
{
	char hex[17];	//MAX 16 hex characters (max. value of 7fffffffffffffff) convertible into decimal.
	printf("Enter a Hexadecimal number: ");
	scanf("%s",hex);
	
	printf("Binary Equivalent = %lld",hex_to_bin(hex));
	return 0;
}
