//String and Pointer

#include<stdio.h>
#include<string.h>
main()
{
    char str[100];
    char* ptr;
    ptr=&str;

    printf("Enter the string: \n");
    gets(ptr);

    printf("Entered string is: %s",ptr);
}
