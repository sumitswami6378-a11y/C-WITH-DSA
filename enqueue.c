#include<stdio.h>
int queue[100];
int front = -1;
int rear = -1;
int size;
void Enqueue(int n){

    if(rear == size - 1){
        printf("enqueue is full ");
    }
    else{
        if(front == -1){
            front = 0 ;

        }
        rear ++ ;
        queue[rear] = n;
        printf("element %d inserted\n", n);
    }
}
int main(){

    printf("enter size=");
    scanf("%d", &size);
    Enqueue(10);
    Enqueue(100);
    Enqueue(1);
    
    return 0;
}