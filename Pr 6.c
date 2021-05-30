//1D Array

#include<stdio.h>
main()
{
    int arr[10];
    int i,n,max;
    printf("How many array elements ??  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

//To largest number in the given array
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else
        {
            continue;
        }
    }

    printf("Largest number in the given array is:  %d",max);
}
