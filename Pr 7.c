//2D Array
//Transpose of a matrix

#include<stdio.h>
main()
{
    int i,j,temp;
    int arr[3][3];

    printf("Enter the matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    printf("\nTranspose of a matrix is: \n\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
