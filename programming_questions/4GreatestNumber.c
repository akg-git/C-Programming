/*Greatest among n numbers*/

#include<stdio.h>

int main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int n;
	printf("Enter Numbers:\n");
	static int max=0;
	
	int i;
	for(i=0;i<size; i++)
	{
		scanf("%d",&n);
		max=max>n?max:n;	//max comaprision
		
	}
	
	printf("Greatest Number = %d",max);
	
	return 0;
}
