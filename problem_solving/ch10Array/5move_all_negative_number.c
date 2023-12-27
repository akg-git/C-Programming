/*Move all negative elements to one side of array*/

#include<stdio.h>
#include<time.h>

void swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void moveAllNegatives(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr, j, j + 1);
 	    }
	}
	
	//print array
	i=0;
	printf("After taking negative elements one side. \nNew array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

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
	
	//print array
	i=0;
	printf("Real Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	//sorting brings all the negative elements one side of array
	moveAllNegatives(arr,n);
	
	return 0;
	
}
