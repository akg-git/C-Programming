/*Prime Number between 1 to 100*/

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
	
	printf("Enter Prime Number List: ");
	int i;
	for(i=2;i<100;i++)
	{
	    if(primeChk(i))
           printf("%d\t",i);	
	}
	
	
	return 0;
}
