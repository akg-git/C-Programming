/*Binary to Octal*/
#include <stdio.h>
#include <math.h>

int binary_to_octal(long int binary)
{
	//binary to decimal
	int octal = 0, decimal = 0, i = 1;
	int base = 10;
	while(binary != 0)
	{
		decimal += (binary%base) * i;
		i*=2;
		binary/=base;
	}

	//decimal to octal
	i = 1;
	base = 8;
	
	while (decimal > 0)
	{
		octal += (decimal % base) * i;
		decimal /= base;
		i *= 10;
	}
	
	return octal;
}

int main()
{
long int binary;

printf("\nEnter a binary number: ");
scanf("%lld", &binary);

printf("\nOctal Equivalent : %d\n", binary_to_octal(binary));

return 0;
}
