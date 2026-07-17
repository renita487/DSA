#include<stdio.h>

int main()
{
    int arr[100];
    int n, i, target;
    int left, right, found = 0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter target sum: ");
    scanf("%d",&target);

    left = 0;
    right = n - 1;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum == target)
        {
            printf("Pair Found: %d and %d\n", arr[left], arr[right]);
            found = 1;
            break;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    if(found == 0)
        printf("No pair found.");

    return 0;
}