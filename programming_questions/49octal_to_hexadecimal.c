/*Octal to Hexadecimal*/

#include<stdio.h>


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

void octal_to_decimal(int n)
{
	//Octal to Decimal
	int base=8;
	long int pow=1, decimal =0;
	while(n>0)
	{
		decimal += (n%10)*pow;
		pow*=base;
		n/=10;
	}
	
	decimal_to_hex( decimal);
	
}

int main()
{
	int oct;
	printf("Enter a Octal number: ");
	scanf("%d",&oct);
	
	octal_to_decimal(oct);
	//printf("Hexadecimal Equivalent = %X",octal_to_decimal(oct));
	return 0;
}
