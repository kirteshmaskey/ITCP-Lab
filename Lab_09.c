//Structure

#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
};
main()
{
    int n,i,j;
    struct student stud[10],temp;

    printf("Number of students in the class:  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER NAME AND ROLL NUMBER OF A STUDENT:  ");
        scanf("%s",stud[i].name);
        scanf("%d",&stud[i].roll);
    }

    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(stud[j].roll<stud[j+1].roll)
            {
                continue;
            }
            else
            {
                temp=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=temp;
            }
        }
    }

    for(i=0;i<20;i++)
    {
        printf("-");
    }
    printf("\n\nSTUDENTS DETAILS: \n");
    printf("STUDENT NAME \tROLL NUMBER\n\n");
    for(i=0;i<n;i++)
    {
        printf("%s \t%d \n",stud[i].name,stud[i].roll);
    }
}
