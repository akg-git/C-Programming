/*Binary to Hexadecimal*/
#include <stdio.h>
#include <math.h>

void decimal_to_hex(int decimal)
{
    int i = 1, j, base=16, dig;
    char hex[17];
	
	
    while (decimal != 0) {
        dig = decimal % base;
        if (dig < 10)
            dig = dig + 48;	//ASCII 0-> 48
        else
            dig = dig + 55; //ASCII A-> 65  in hex A->10 so dig-> 65-10=+55
        hex[i++] = dig;
        decimal = decimal / base;
    }


	//PRINT	
    printf("Hexadecimal Equivalent: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hex[j]);
}

void binary_to_decimal(long int binary)
{
	//binary to decimal
	int octal = 0, decimal = 0, pow = 1;
	int base = 10;
	while(binary != 0)
	{
		decimal += (binary%base) * pow;
		pow*=2;
		binary/=base;
	}
	
	decimal_to_hex(decimal);
}

int main()
{
	long int binary;
	
	printf("\nEnter a binary number: ");
	scanf("%lld", &binary);
	
	binary_to_decimal(binary);
	
	return 0;
}
