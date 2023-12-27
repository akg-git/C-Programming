/*Special Number
------------------
A number is a special number , iff even digits of number are placed at even place and odd digits are placed at odd place
*/

#include<stdio.h>

int chkSpecialNum(int n);

int main()
{
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	
	if(chkSpecialNum(n))
	    printf("%d is Special Number",n);
    else
		printf("%d is not a Special Number",n);
	return 0;
}

int chkSpecialNum(int n)
{
	int dig=0,pos=0,flag=1;
	while(n>0)
	{
		dig = n%10;
		
		if(pos%2 != dig%2)
		{
			flag=0;
			break;
		}
		
		pos+=1;
		n/=10;
		
	}
	return flag;
}
