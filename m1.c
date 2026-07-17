#include<stdio.h>

int main()
{
    int arr[100];
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the sorted elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    i = 0;

    for(j=1;j<n;j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    printf("Array after removing duplicates:\n");

    for(j=0;j<=i;j++)
        printf("%d ",arr[j]);

    return 0;
}