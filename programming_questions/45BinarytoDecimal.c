/*Binary to Decimal*/

#include<stdio.h>
#include<math.h>

int binary_to_decimal(int n)
{
	int base=2;
	int decimal =0;
	int c=0;
	while(n>0)
	{
		decimal += (n%10)*pow(base,c);
		c+=1;
		n/=10;
	}
	return decimal;
}

int main()
{
	int bin;
	printf("Enter a Binary number: ");
	scanf("%d",&bin);
	
	printf("Decimal Equivalent = %d",binary_to_decimal(bin));
	return 0;
}
