/*Armstrong Number

153 = 1^3+5^3+3^3

e.g. 0-9, 153 370 371 407 1634 8208 9474
*/

#include<stdio.h>
#include<math.h>

int chkArmstrong(int n)
{
	int t=n;
	int dc=0;
	while(t>0)
	{
		t/=10;
		dc+=1;
	}
	
	int armstrong=0;
	while(n>0)
	{
		armstrong+=pow((n%10),dc);
		n/=10;
	}
	
	return armstrong;
	
	
}


int main()
{

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Invalid Input !! Enter positive integer.");
		return -1;
	}
	
	if(num<10)
	    printf("%d is an Armstrong Number.",num);
	else if(num==chkArmstrong(num))
 	    printf("%d is an Armstrong Number.",num);
    else
    	printf("%d is not an Armstrong Number.",num);
	
	return 0;
}
