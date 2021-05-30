//use of arithmetic and conditional operators

#include<stdio.h>
main()
{
    int n1,n2,sum,sub,mul,div,mod,max;
    printf("Enter numbers:  ");
    scanf("%d%d",&n1,&n2);

// Arithmetic operators

    sum = n1 + n2;   //addition
    printf("%d + %d = %d\n",n1,n2,sum);

    sub = n1 - n2;   //subtraction
    printf("%d - %d = %d\n",n1,n2,sub);

    mul = n1 * n2;   //multiplication
    printf("%d * %d = %d\n",n1,n2,mul);

    div = n1 / n2;   //division
    printf("%d / %d = %d\n",n1,n2,div);

    mod = n1 % n2;   //modular division
    printf("%d %% %d = %d\n",n1,n2,mod);

// Conditional Operator

    max=(n1>n2?n1:n2);
    printf("Largest of two number is %d",max);
}
