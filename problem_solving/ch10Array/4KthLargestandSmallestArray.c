/*Find Kth largest and smallest element in array*/

#include<stdio.h>

void swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])
                swap(arr, i, j);
 	    }
	}
	//print merged array
	int p;
	for(p=0;p<n;p++)
	{
		printf("%d ",arr[p]);
	}
}

int main()
{	
	int n;
	printf("Enter Array size: ");
	scanf("%d",&n);
	
	int k;
	printf("Enter K value: ");
	scanf("%d",&k);
	
	int arr[n];
	
	printf("Enter Array Elements: \n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	bubbleSort(arr,n,k);
	
	return 0;
	
}
