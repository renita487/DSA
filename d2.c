#include<stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int left, right;
    int maxArea = 0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter heights:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    left = 0;
    right = n - 1;

    while(left < right)
    {
        int width = right - left;
        int height;
        int area;

        if(arr[left] < arr[right])
            height = arr[left];
        else
            height = arr[right];

        area = width * height;

        if(area > maxArea)
            maxArea = area;

        if(arr[left] < arr[right])
            left++;
        else
            right--;
    }

    printf("Maximum Water = %d", maxArea);

    return 0;
}