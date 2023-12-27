/*Print Fibonacci Series upto N terms*/

#include<stdio.h>
//using recursion
//int fiboN(int n)
//{
//	if(n==0 || n==1)
//			return n;
//	else
//		return fiboN(n-2) + fiboN(n-1);
//}

int main()
{
	int num;
	printf("Enter N: ");
	scanf("%d",&num);
	
	if(num<3)
    {
		printf("Invalid Input!! Please Enter any natural Number [atleast 3]");
        return -1;
    }

	//without recursion
    printf("Fibonacci Series [Size = %d]: \n",num);
   	int prv=0, nxt=1, fibo,i;
	printf("%d %d",prv,nxt);
	
	//i=3 as 2 numbers are already printed
	for(i=3; i<num+1; i++)
    {
	 	fibo = prv + nxt;
	 	printf(" %d",fibo);
	 	prv=nxt;
	 	nxt=fibo;
    }
	
	return 0;
}

 
