/*Twos Complement*/

/*One's Complement*/

#include<stdio.h>

void twos_comp(long long int n)
{
	int int_size=16,dig=0;
	int bin_arr[int_size];
	int i=int_size - 1;
	while(n>0 && i>=0)
	{
		dig = n%10;
		bin_arr[i--] = !dig;
		n/=10;
	}
	//fill rest bits with 0s
	while(i>=0)
      bin_arr[i--]=0;
    
    printf("One's\'s Complement: ");
    int j;
    for(j=0;j<int_size;j++)
    {
    	printf("%d", bin_arr[j]);
	}
    
    //Adding 1 with one's complement
    
    int k=int_size-1;
    if(bin_arr[k] == 0)
       bin_arr[k] == 1;
    else
    {
    	while(bin_arr[k])
    	{
    		bin_arr[k--]=0;
		}
        bin_arr[k] == 1;
	}
    
    printf("Two\'s Complement: ");
    j=0;
    for(j=0;j<int_size;j++)
    {
    	printf("%d", bin_arr[j]);
	}
}

int main()
{
	long long int bin;
	printf("Enter a binary number: ");
	scanf("%lld",&bin);
	twos_comp(bin);
	return 0;
}
