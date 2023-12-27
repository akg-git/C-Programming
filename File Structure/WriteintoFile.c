/*Writing into a file*/
#include<stdio.h>
#include<stdlib.h>
struct stud
    {
        int roll;
        char fname[10];
        char lname[10];

    }s;

int main()
{

    FILE *fp;

    printf("Enter Details\n-----------------\n");
    for(int i=0;i<2;i++)
    {
        printf("\nEnter Roll: "); scanf("%d",&s.roll);
        printf("\nEnter FName: "); scanf("%s",s.fname);
        printf("\nEnter LName: "); scanf("%s",s.lname);

        struct stud s={s.roll,s.fname,s.lname};

    }


    fp = fopen("MyRecords.txt","w");
    if(fp==NULL)
    {
         printf("Open Error");
         exit(1);
    }

    int flag;
    flag = fwrite(&s, sizeof(struct stud),1,fp);

    if(flag)
        printf("%d records insert Successfull",flag);
    else
        printf("Write Error");

    fclose(fp);


    return 0;
}
