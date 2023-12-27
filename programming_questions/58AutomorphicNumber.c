/*Automorphic Number*/

/*
An automorphic number is an integer whose square `ends with` the given integer, 
as (25)2 = 6_25, and (76)2 = 577_6.

example: 0, 1, 5, 6, 25, 76, 376, 625, 9376
*/

#include<stdio.h>
#include<math.h>

int chkAutomorphic(int num)
{
	int square = num*num;
	while(num != 0)
    {
        if(num % 10 != square % 10){
            return 0;
        }
        
        num /= 10;
        square /= 10;
    }
    
    
    return 1;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(chkAutomorphic(num))
	   	printf("%d is Automorphic Number",num);
	else
	   	printf("%d is not Automorphic Number",num);
	

	return 0;
}
