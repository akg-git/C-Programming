/*Leader Array*/
#include<stdio.h>

void findLeader(int [],int);
int main()
{	
	int n;
	printf("Enter Array size: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter Array Elements: \n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	findLeader(arr,n);

	return 0;
	
}

void findLeader(int arr[],int n)
{
	int leader = arr[n-1];
	printf("%d ",leader);
	int i;
	for(i=n-2;i>=0;i--)
	{
		if(arr[i]>leader)
		{
			leader = arr[i];
			printf("%d ",leader);
		}
		
	}
}
