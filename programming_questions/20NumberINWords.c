/*print number in words*/
/*
  345 -> ThreeFourFive
*/

#include<stdio.h>

int revnum(int n)
{
	int rev;
	while(n>0)
	{
		rev = rev*10 + n%10;
		n/=10;
	}
	
	return rev;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	int reverse;
	reverse = revnum(num);
//	printf("%d ",reverse);

	int rem;
	while(reverse>0)
	{
		rem = reverse%10; 
		switch(rem)
		{
			case 0: printf("ZERO ");break;
			case 1: printf("ONE ");break;
			case 2: printf("TWO ");break;
			case 3: printf("THREE ");break;
			case 4: printf("FOUR ");break;
			case 5: printf("FIVE ");break;
			case 6: printf("SIX ");break;
			case 7: printf("SEVEN ");break;
			case 8: printf("EIGHT ");break;
			case 9: printf("NINE ");break;
		}
		reverse/=10;
	}
	
	
	
	
	return 0;
}
