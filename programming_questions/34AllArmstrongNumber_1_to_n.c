/*All Armstrong Number between 1 to N */


#include<stdio.h>
#include<math.h>

int chkArmstrong(int n)
{
	int t=n;
	int dc=0;
	while(t>0)
	{
		t/=10;
		dc+=1;
	}
	
	int armstrong=0;
	while(n>0)
	{
		armstrong+=pow((n%10),dc);
		n/=10;
	}
	
	return armstrong;
	
	
}


int main()
{

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num<1)
	{
		printf("Invalid Input !! Enter Natural Number.");
		return -1;
	}
	
	int i;
	for(i=1;i<num+1;i++)
	{
		if(i<10)
		    printf("%d ",i);
		else if(i==chkArmstrong(i))
	 	    printf("%d ",i);
	}
	return 0;
}


