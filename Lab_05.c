//Function and Recursion

#include<stdio.h>

long Fact(int);               //Function Declaration
main()
{
    int no;
    long int factorial;
    printf("Enter the number of which factorial to be find:  ");
    scanf("%d",&no);
    factorial=Fact(no);       //Calling Function

    printf("\nFactorial of %d is %d",no,factorial);
}

long Fact(int n)              //Function Definition
{
    if(n>0)
    {
        return n*Fact(n-1);   //Recursion call
    }
    else
    {
        return 1;
    }
}
