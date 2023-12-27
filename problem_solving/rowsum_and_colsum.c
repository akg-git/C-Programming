/*Sum of rows and columns of a matrix*/

#include<stdio.h>

int main()
{	
	
	int arr[2][2] = {{5,6},{7,8}};
	int rowsum[2]={0,0};
	int colsum[2]={0,0};
	
	int i=0,j=0;
	for(i=0;i<2;i++)
	{
		rowsum[i]=0;
		colsum[i]=0;
		for(j=0;j<2;j++)
		{
			rowsum[i] += arr[i][j]; 
			colsum[i] += arr[j][i];
		}
	}
	
//print matrix result
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%2d",&arr[i][j]);
		}
		
		printf("%4d\n",rowsum[i]);
		
		for(j=0;j<2;j++)
		{
			printf("%4d",colsum[j]);
		}
	}
	
	
	
	

	return 0;
	
}

