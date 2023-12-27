/*Count Frequency of Array Elements*/	


#include <stdio.h>
int main()
{
	int  i, j, c, n;	
	printf("\n Enter array  size:   ");
	scanf("%d", &n);               
    int a[n], f[n];           
	printf("\n Enter elements  :  \n");
	for (i = 0; i < n; i++)   
	{
    	    scanf("%d", &a[i]);
    	    f[i] = -1;  
   	}      
   	
   	
   //Count the frequency of each element
	for (i = 0; i < n; i++)
	{
		c = 1;
		for(j = i + 1; j < n; j++)
		{
			//duplicate element contains 0 value, as no need to printf its frequency again
    		if(a[i] == a[j])    
    		{
    			c++;
    			f[j] = 0;    
    		}
    	}
    	if(f[i] != 0)        
    	{
    		f[i] = c;
		}
	}
    //PRINT
 	printf("\nFrequency List : \n");
 	for (i = 0; i < n; i++)
  	{
  		if(f[i] != 0)        
  		{
  			printf("%d Occurs %d times \n", a[i], f[i]);
		}		
  	}	     
 	return 0;
}
