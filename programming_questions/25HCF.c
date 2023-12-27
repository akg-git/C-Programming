/*HCF or GCD*/


#include<stdio.h>

int hcf(int a, int b)
{	
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

//int ehcf(int a, int b)
//{
// 	//EUCLIDEAN ALGORTIHM for GCD
// 	
//	if(b==0 || a==b)
//        return a;
//    else if(a==0)
//        return b;
//	else if(a>b)
//		return (ehcf(a%b, b));
//	else if(b>a)
//        return (ehcf(a, b%a));
//	
//}

int main()
{
	int x,y;
	printf("Enter Number1: "); scanf("%d",&x);
	printf("Enter Number2: "); scanf("%d",&y);
	
	if(x<1 || y<1)
 	{
 		   printf("Enter Natural Numbers to calculate LCM");
 		   return -1;
    }
	
	printf("HCF(%d, %d) = %d",x,y, hcf(x,y));
//	printf("HCF(%d, %d) = %d",x,y, ehcf(x,y));
	
	
	return 0;
}
