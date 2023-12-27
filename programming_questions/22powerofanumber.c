/*power of a number using loop*/

#include<stdio.h>

int powerofNumber(int base, exp)
{
	if(exp==0)
	printf("Power = 1");
	elif(exp==1)
	printf("Power = %d",base);
	
	else
	{
		int i,ans=1;
		for(i=0;i<exp;i++)
		{
			ans*=base;
		}
		printf("Power = %d",ans);
	}
}

main()
{
	int base,exp;

	printf("Base = ");scanf("%d",&base);
	printf("Exponent = ");scanf("%d",&exp);
	powerofNumber(base,exp);

}

