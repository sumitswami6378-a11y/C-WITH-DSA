#include<stdio.h>
int front = -1;
int rear = -1;
int A[5];
size = sizeof(A);
void queue(int n){


    if((rear + 1) % size == front){
        printf("Queue id not empty");
        return;
    }
    else{
        rear=(rear+1)%5;
        A[rear]=n;
        printf("%d ",A[rear]);
    }

}
int main(){
    int n;
    printf("array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        queue(arr[i]);
    }

    return 0;
}