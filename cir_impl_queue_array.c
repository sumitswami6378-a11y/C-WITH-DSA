#include<stdio.h>
int front = -1;
int rear = -1;
#define size 5
int queue[size];

void enqueue(int n){

if((rear + 1)%size == front){
    printf("full");
}

else{
    if(front == -1){
        front = 0;
    }
      rear = (rear + 1)%size;
      queue[rear] = n;
      printf("%d inserted successfully\n", n); 
}
}

void dequeue(){
    if(front == -1 || front > rear){
        printf("empty");
    }
    else{
        printf("element deleted %d\n", queue[front]);
        front = (front + 1) % size ;
    }
    
}
void peek(){

    if(front == -1 || front > rear){
        printf("queue is empty\n");
    }
    else{
        printf("%d is the peek element\n",queue[front]);
    }
}

void display(){
    if(front == -1 || front > rear){
        printf("queue is empty\n");
    }
    else{
        for(int i = front; i<=(i+1) % size ; i++){
            printf("%d\n",queue[i]);
            if(front == rear )
            break;
        }
    }
}

int main(){
    enqueue(10);
    enqueue(25);
    enqueue(45);
     enqueue(45);

    display();
    dequeue();

    peek();
    display();

    return 0;
}