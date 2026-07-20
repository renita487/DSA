#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n],ch;
    int front=-1;
    int rear=-1;
    while(1){
        printf("==Menu==\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Is empty\n");
        printf("5.Is full\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                if(rear==n-1){
                    printf("Queue is full\n");
                }
                else{
                    int ele;
                    printf("Enter the element to enqueue: ");
                    scanf("%d",&ele);
                    if(front==-1){
                        front=0;
                    }
                    rear++;
                    arr[rear]=ele;
                    printf("%d enqueued to queue\n",ele);
                }
                break;
            case 2:
                if(front==-1 || front>rear){
                    printf("Queue is empty\n");
                }
                else{
                    printf("%d dequeued from queue\n",arr[front]);
                    front++;
                }
                break;
            case 3:
                if(front==-1 || front>rear){
                    printf("Queue is empty\n");
                }
                else{
                    printf("Queue elements are: ");
                    for(int i=front;i<=rear;i++){
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                if(front==-1 || front>rear){
                    printf("Queue is empty\n");
                }
                else{
                    printf("Queue is not empty\n");
                }
                break;
            case 5:
                if(rear==n-1){
                    printf("Queue is full\n");
                }
                else{
                    printf("Queue is not full\n");
                }
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

}