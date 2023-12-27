/*Reading from a file*/
#include<stdio.h>
#include "WriteintoFile"

struct stud
    {
        int roll;
        char fname[10];
        char lname[10];

    };
    //struct stud s={1,"Raj","Dash"};

int main()
{

    FILE *rfp;


    struct stud s;

    rfp = fopen("ReadRecords.txt","rb");
    if(rfp==NULL)
    {
         printf("Open Error");
         exit(1);
    }

    int flag;
    flag = fread(&s, sizeof(struct stud),1,rfp);

    for(int i=0;i<3;i++)
    {
        if(flag)
        {
            printf(" Details\n");
            printf("\nRoll: %d",s.roll);
            printf("\nFName: %s",s.fname);
            printf("\nLName: %s",s.lname);

        }

        else
            printf("Read Error");
    }
    fclose(rfp);


    return 0;
}
