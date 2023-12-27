/*LCM*/


#include<stdio.h>

int hcf(int a, int b)
{
 	if(a<1 || b<1)
 	{
 		   printf("Enter Natural Numbers to calculate LCM");
 		   return -1;
    }
    
	int max;
 	max = a>b?a:b;
 	while(1)
 	{
 		if(max%a==0 && max%b==0)
 			{
				return max;
	 		}
	 		
 		max+=1;
    }
	
}

int main()
{
	int x,y;
	printf("Enter Number1: "); scanf("%d",&x);
	printf("Enter Number2: "); scanf("%d",&y);
	
	printf("LCM(%d, %d) = %d",x,y, hcf(x,y));
	
	
	return 0;
}
