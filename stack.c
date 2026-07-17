#include <stdio.h>

int stack[100];
int top = -1;
int n;

void push(int ele);
void pop();
void peek();
void isEmpty();
void isFull();
void display();

int main()
{
    int i, ch, ele;

    printf("Enter the size of stack: ");
    scanf("%d", &n);

    printf("Enter the elements of stack:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &stack[i]);
        top++;
    }

    do
    {
        printf("\n===== STACK OPERATIONS =====");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Is Empty");
        printf("\n5. Is Full");
        printf("\n6. Display");
        printf("\n7. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &ele);
                push(ele);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                isEmpty();
                break;

            case 5:
                isFull();
                break;

            case 6:
                display();
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(ch != 7);

    return 0;
}


void push(int ele)
{
    if(top == n - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = ele;
        printf("%d pushed into stack.\n", ele);
    }
}


void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}


void peek()
{
    if(top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}


void isEmpty()
{
    if(top == -1)
        printf("Stack is Empty.\n");
    else
        printf("Stack is Not Empty.\n");
}


void isFull()
{
    if(top == n - 1)
        printf("Stack is Full.\n");
    else
        printf("Stack is Not Full.\n");
}


void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Stack Elements:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}