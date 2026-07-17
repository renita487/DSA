#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    i = 0;

    for(j = 0; j < n; j++)
    {
        if(arr[j] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
        }
    }

    printf("Array after moving zeros:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}