/*Decimal to Hexadecimal*/

#include<stdio.h>
#include<conio.h>


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

void main()
{
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	
	decimal_to_hex(n);
}
