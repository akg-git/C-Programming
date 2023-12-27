/*Count bits set to 1 in an 8bit unsigned character*/

#include<stdio.h>

int countSet(int bin)
{
	int c=0;
	while(bin)
	{
		bin = bin&(bin-1);
		//printf("bin=%d",bin);
		c+=1;
		//printf("\nc=%d",c);

	}
	return c;
}

int main()
{
    char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	unsigned int n;
	n = (unsigned int )ch;
	
	printf("No of 1s = %d",countSet(n));
	return 0;
}
