/*print ASCII character with values*/

#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<256;i+=1)
	{
		printf("%c -->%d\n",i,i);
	}
	
	return 0;
}
