/*One's Complement*/

#include<stdio.h>

void ones_comp(long long int n)
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
	
	while(i>=0)
      bin_arr[i--]=0;
    
    printf("One\'s Complement: ");
    int j;
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
	ones_comp(bin);
	return 0;
}
