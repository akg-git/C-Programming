/*Pair Sum*/

#include <stdio.h>

void findPairWithSum(int arr[], int n, int targetSum) 
{
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair of elements can make the given sum by the value of index %d and %d\n", i, j);
                return;
            }
        }
    }
    
    printf("No pair found with sum %d.\n", targetSum);
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
	
	int targetSum;
	printf("Enter sum value: ");
	scanf("%d",targetSum);
    
   	printf("Given Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("The given sum = %d",targetSum);

    findPairWithSum(arr, n, targetSum);

    return 0;
}

