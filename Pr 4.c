//Looping statements

#include<stdio.h>
main()
{
    int i;

//For Loop
    printf("Using FOR loop :\n");
    for(i=0;i<5;i++)
    {
        printf("%d  ",i);
    }

//While Loop
    i=0;
    printf("\nUsing WHILE loop:\n");
    while(i!=5)
    {
        printf("%d  ",i);
        i++;
    }

//Do-While Loop
    i=0;
    printf("\nUsing DO-WHILE loop:\n");
    do
    {
        printf("%d  ",i);
        i++;
    }while(i!=5);
}
