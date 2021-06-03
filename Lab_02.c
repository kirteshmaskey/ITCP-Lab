// Conditional and Unconditional statements

#include<stdio.h>
main()
{
// Conditional Statement

    int n1,n2,n3;
    printf("Enter three number: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%d is largest\n",n1);
        }
        else
        {
            printf("%d is largest\n",n3);
        }
    }
    else
    {
        if(n2>n3)
        {
            printf("%d is largest\n",n2);
        }
        else
        {
            printf("%d is largest\n",n3);
        }
    }

// Unconditional Statement

   int no;
   printf("\nEnter number to check even or odd: ");
   scanf("%d",&no);
   if(no%2==0)
       goto even;
   else
       goto odd;

   even:
       printf("\n%d is EVEN",no);
       goto end;
   odd:
       printf("\n%d is ODD",no);

    end:
        printf("\n");
}
