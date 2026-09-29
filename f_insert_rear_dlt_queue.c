#include<stdio.h>
int front = -1;
int rear = -1;
#define size 5
int queue[size];
int i;

void fdequeue(int n){
    if((rear + 1)% size == front){
        printf("queue is full\n");
    }
    else {
        if(front == -1){
            front = rear = 0;
            queue[front] = n;
            printf("%d is successfully inserted\n",n);
        }

        else if(front == 0){
            front = size - 1;
            queue[front] = n;
            printf("%d is successfully inserted\n",n);
        }
        else{
            front --;
            queue[front] = n;
            printf("%d is successfully inserted\n",n);
        }
    }
}


void Rdequeue(){
    if(front == -1){

        printf("empty\n");
    }
    else{

      if(rear == 0 ){
        printf("%d is removed\n",queue[rear]);    
        rear = size - 1;    
    }
    else{
        printf("%d is removed\n", queue[rear]);
        rear-- ;
    }
}
}

void display(){
    if(front == -1){
        printf("queue is empty\n");
    }
      
    else{
       int i = front;
       while(1){
        printf("%d\n", queue[i]);

        if(i==rear){
            break;
        }
        i = (i+1)%size ;
       }

    }
}


int main(){

fdequeue(12);
fdequeue(56);
fdequeue(48);
fdequeue(476);
fdequeue(16);

display();
Rdequeue();
Rdequeue();
Rdequeue();
display();


    return 0;
}