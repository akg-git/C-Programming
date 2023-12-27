/* most frequency character */
#include<stdio.h>
 #include<string.h>
 int max_freq(char str[]);
 int main()
 {
    char str[100];
    printf("enter the string: ");
    gets(str);
    printf("%c",max_freq(str));
    //max_freq(str);
    return 0;
 }
 int max_freq(char str[])
 {
    int c[26]={0},i=0;
    for(i=0;str[i]!='\0';i++)
    {
    	c[str[i]-97]++;
	}

    int max=0,ind=0;
    i=0;
    for(i=0;i<26;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
            ind=i;
        }
		//printf("%c occurs %d times\n",(97+i), c[i]);
    }
    
    return (97+ind);
 }
