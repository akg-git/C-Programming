/*Non-Fibonacci Number 1-100*/

#include<stdio.h>

void printNonFibonacciNumber(int start, int end)
{
	int i;
	for(i=start+1;i<end;i++)
	{
		printf("%d ",i);
	}
}

int main()
{

    printf("Non-Fibonacci Numbers [1-100]: \n");
   	int prv=1, nxt=2, fibo1,fibo2,i,x;
	
	while(fibo1<101)
    {
	  fibo1=prv + nxt;
	  prv=nxt;
	  nxt=fibo1;
	  fibo2=prv + nxt;
	  
	  //print all numbers between two fibonacci number
	  for(x=fibo1+1;x<fibo2;x++)
	  {
	   if(x<101)
	    printf("%d ",x);
	  }
	  
    }
	
	return 0;
}

 
