/*Prime Number*/
/*LCM*/


#include<stdio.h>
#include<math.h>
int primeChk(int n)
{
	if(n<1)
	{
		printf("Enter Natural Number to check prime or not.");
		return -1;
	}
	
 	int i,flag=1;
 	for(i=2;i<=sqrt(n);i++)
 	{
 		if(n%i==0)
 		{
 			flag=0; break;
		 }
    }
    
    return flag;
 		
	
}

int main()
{
	int num;
	printf("Enter a Number: "); scanf("%d",&num);
	
	if(primeChk(num))
        printf("%d is a Prime Number",num);
    else
		printf("%d is not a Prime Number",num);
	
	
	return 0;
}
