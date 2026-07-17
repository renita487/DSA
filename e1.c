#include<stdio.h>

int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int ele,arr[n],i;
    printf("Enter the elements:");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    for(i=0;i<=n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element is: %d\n", largest);
}