#include<stdio.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];

void enqueue(int n){
    if((rear+1)%size == front){
        printf("FULLL");
    }
    else{
        if(front == -1){
            front = 0;
            
        }
    rear = (rear + 1) % size;
    queue[rear] = n;
    printf("inserted successully\n");
    }
}

void dequeue(){
    if(front == -1){
        printf("empty");

    }

    else{
         if(front == rear){
            front = -1;
            rear = -1;
         }
         printf("element deleted %d\n",queue[front]);
         front = (front +1)%size ;
    }
}

void peek(){
    if(front == -1){
        printf("queue is empty\n");
    }
    else{
        printf("%d is the peek element \n",queue[front]);
    }
}

void display(){
    if(front == -1){
        printf("empty");
    }
    else{
        for(int i = front ; i <= (i + 1)% size  ; i++){
            printf("%d\n",queue[i]);
            if(front == rear)
            break ;
        }
    }
}

int main(){
    
    enqueue(10);
    enqueue(20);
    enqueue(50);
    enqueue(651);
    display();
    dequeue();
    dequeue();
    display();

    return 0;
}