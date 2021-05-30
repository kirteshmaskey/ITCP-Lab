//Operation on File

#include<stdio.h>
main()
{
    FILE *file;
    char c;

//To print content present in the file
   file=fopen("hello.txt","r");
    do
    {
        c=fgetc(file);
        if(c==EOF)
            break;
        printf("%c",c);
    }while(1);
    fclose(file);

//TO copy content of one file into another file
    FILE *f1, *f2;
    char cp;
    f1=fopen("copy1.txt","r");
    f2=fopen("copy2.txt","w");
    do
    {
        cp=fgetc(f1);
        if(cp==EOF)
            break;
        putc(cp,f2);
    }while(1);
    
  printf("\nContent of file copied successfully\n");

}
