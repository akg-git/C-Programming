//move all negative numbers one side
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// void swap(int *a, int *b)
// {
//     int t=*a;
//     *a=*b;
//     *b=t;
// }
void moveNegatives(int*,int,int);
int main()
{
 	clock_t s,e;
	s=clock();
	
	
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n],i;
    
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    moveNegatives(a,0,n-1);
    
    e=clock();
	double dur = ((double)e - (double)s)/CLOCKS_PER_SEC;
	printf("%d",dur);
    return 0;
}
void moveNegatives(int *p,int left,int right)
{
    int n = right+1;
    while(left<=right)
    {
        if(*(p+left)<0 && *(p+right)<0)
            left++;
        else if(*(p+left)>0 && *(p+right)<0)
        {
            int temp;
            temp = *(p+left);
            *(p+left) = *(p+right);
            *(p+right) = temp;
            // swap((p+left), (p+right));
            left++;
            right--;
        }
        else if(*(p+left)>0 && *(p+right)>0)
            right--;
        else
        {
            left++;
            right--;
        }
    }
    
    printf("Resultan array: ");
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
