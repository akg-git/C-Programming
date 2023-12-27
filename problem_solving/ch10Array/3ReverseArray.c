/*Reverse Array*/


#include <stdio.h>
int main()
{
	int  i, j, c, n;	
	printf("\n Enter array  size:   ");
	scanf("%d", &n);               
    int a[n],rev[n];
    
	for (i = 0; i < n; i++)   
	{
    	    scanf("%d", &a[i]); 
   	}  
   	
   	for (i = 0; i < n; i++)   
	{
	 	rev[i] = a[n-i-1];
   	}
   	
   	//PRINT
   	printf("Reversed Array:\n")
   	for (i = 0; i < n; i++)   
	{
    	    printf("%d ", rev[i]); 
   	} 

	return 0;
}
