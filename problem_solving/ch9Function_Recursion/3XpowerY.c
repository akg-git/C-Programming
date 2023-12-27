 /*Find x power y using recursion*/

#include<stdio.h>
#include<math.h>
int powerofNumber(int b, int e)
{
 	if(e==0)
  	return 1;
	else if(e==1)
	return b;
	
	else
	{
		return b*powerofNumber(b,e-1);
	}

}

main()
{
	int base,exp;

	printf("Base = ");scanf("%d",&base);
	printf("Exponent = ");scanf("%d",&exp);
	printf("%d power %d = %d",base, exp, powerofNumber(base,exp));

}

