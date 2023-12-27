/*Merge two arrays and sort in descending arrays*/

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

void merge(int arr1[], int arr2[], int n1, int n2, int merge_arr[])
{
	
	int i,j,x=0;

   for(i = 0; i < n1; i++)
       merge_arr[x++] = arr1[i];
    for(j = 0; j < n2; j++)     
        merge_arr[x++] = arr2[j];
	
	bubbleSort(merge_arr,x);
	
	
}

int main()
{	
	int n1,n2;
	printf("Enter Array1 size: ");
	scanf("%d",&n1);
	printf("Enter Array2 size: ");
	scanf("%d",&n2);
	
	int arr1[n1],arr2[n2], merge_arr[n1+n2];
	
	printf("Enter Array1 Elements: \n");
	int i;
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Array2 Elements: \n");
	int j;
	for(j=0;j<n2;j++)
	{
		scanf("%d",&arr2[j]);
	}
	
	merge(arr1,arr2,n1,n2,merge_arr);
	
	return 0;
	
}
