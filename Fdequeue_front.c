#include<stdio.h>
#define size 5
int front = -1 ;
int rear = -1;
int queue[size];
//int size = 5;

void fdequeue(int n){
    
    if((rear + 1) % size == front ){
        printf("fuLL");

    }
    else{
        if(front == -1){
            front = rear = 0;
            queue[front] = n;
            printf("%d inserted successfully\n",n);
           
        }
        else if(front == 0){
            front = size - 1;
            queue[front] = n;
             printf("%d inserted successfully \n",n);
         }
        

        else{

            front -- ;
            queue[front] = n;
            printf("%d inserted successfully\n",n);
        }
    }
}

void fremove(){
    if(front == -1){
        printf("empty");
    }
    else{
        if(front == 0 && rear == 0){
            printf("%d is removed\n", queue[front]);
            front = rear = -1 ;
        }

        else{
            printf("%d is removed\n", queue[front]);
            front = (front + 1) % size ;
        }
    }
}

void display(){
    if(front == -1){
        printf("queue is empty\n");

    }
    else{
        for(int i = front ;; i=(i + 1)%size){
            printf("%d\n",queue[i]);

            if(i==rear)
            break;
        }

        /* i = front;
        while(1){
        printf("%d\n",queue[i])
        
        if(i == rear)
        break ;

        i = (i+1) % size ;

        }
        */
    }
}



int main(){

    fdequeue(10);
    fdequeue(25);
    fdequeue(78);
    fdequeue(56);

    display();

    fremove();
    fremove();
    fremove();

    display();
    

    return 0;
}
