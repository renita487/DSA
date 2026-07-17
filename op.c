#include<stdio.h>

int main()
{
    int n, arr[100], ch, i, pos, ele;

    printf("Enter the size: ");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do
    {
        printf("\n=== Array Operations ===");
        printf("\n1. Insert Front");
        printf("\n2. Insert Middle");
        printf("\n3. Insert End");
        printf("\n4. Delete Front");
        printf("\n5. Delete Middle");
        printf("\n6. Delete End");
        printf("\n7. Display");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d",&ele);

                for(i=n;i>0;i--)
                    arr[i]=arr[i-1];

                arr[0]=ele;
                n++;
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d",&pos);

                printf("Enter element: ");
                scanf("%d",&ele);

                for(i=n;i>=pos;i--)
                    arr[i]=arr[i-1];

                arr[pos-1]=ele;
                n++;
                break;

            case 3:
                printf("Enter element: ");
                scanf("%d",&ele);

                arr[n]=ele;
                n++;
                break;

            case 4:
                for(i=0;i<n-1;i++)
                    arr[i]=arr[i+1];

                n--;
                break;

            case 5:
                printf("Enter position: ");
                scanf("%d",&pos);

                for(i=pos-1;i<n-1;i++)
                    arr[i]=arr[i+1];

                n--;
                break;

            case 6:
                n--;
                break;

            case 7:
                printf("Array Elements: ");
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                printf("\n");
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(ch!=8);

    return 0;
}