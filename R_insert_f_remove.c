#include<stdio.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];

void rear_insert(int n){
    if((rear + 1) % size == front ){
        printf("queue is full");
    }
    else{
        if(rear == -1){
            front = rear = 0;
            queue[rear] = n;
            printf("%d inserted succesffuly\n",n);
        }
        else{
            rear = (rear + 1)% size ;
            queue[rear] = n;
            printf("%d is inserted successfully\n",n);
        }
    }
}

void f_remove(){
    if(front == -1){
        printf("queue is empty");
    }
    else{
        if(front == rear){
       printf("%d is removed\n",queue[front]);
       front = rear =-1;

        }
        else{
            printf("%d is removed\n",queue[front]);
            front = (front + 1)% size;
        }
    }
}


void display(){
    if(front == -1){
        printf("queue is empty\n");
    }
    else{
      int i = front ;

      while(1){

        printf("%d\n",queue[i]);

        if(i == rear){
            break ;
        }

        i =(i+1)% size ;
      }
    }
}

int main(){

rear_insert(45);
rear_insert(4);
rear_insert(5);
rear_insert(456);

display();
f_remove();
f_remove();
display();


return 0;
}