#include<stdio.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];

void DEqueue(int n){
    if((rear + 1)%size == front){
        printf("QUEUE IS FULL");
    }
    else{
        if(front == -1){
            front =0;
            rear = 0;
            queue[front] = n;
            printf("%d inserted successfully\n",n);
        }

        else{
            rear = (rear + 1)% size ;
            queue[rear] = n;
            printf("%d inserted successfully\n",n);
        }
    }
}

void display(){
    if(front == -1){
        printf("queue is empty");
    }
    else{
        for(int i = front; i<= rear; i++){
            printf("%d\n",queue[i]);
        }
    }
}

int main(){

    DEqueue(12);
      DEqueue(15);
        DEqueue(2);
          DEqueue(1);


          display();



    return 0;
}