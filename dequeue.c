#include<stdio.h>
int queue[5];
int size;
int front = -1;
int rear = -1;
void dequeue(){

if(front == -1 || front > rear){
    printf("queue is empty");
}
else{
    printf("%d is deleted\n",queue[front]);
    front ++ ;
    if(front > rear){
        front = -1;
        rear = -1;
    }
}

}
void enqueue(int n){
    if(rear== size-1){
        printf("queue is full\n");
    }
    else{
        if(front = -1){
            front++ ;

        }
        rear ++ ;
        queue[rear] = n;
        printf("element %d inserted\n",n);

    }
}
void display(){
    if( front == -1 || front > rear){
        printf("queue is empty\n");
    }
    else{
        for(int i=front; i<rear ; i++){
            printf("%d\n",queue[i]);
        }
    }
}

void peek(){
    if(front == -1 || front > rear){
        printf("queue is empty");
    }
    else{
        printf("%d is the top \n",queue[front]);
    }
}




int main(){
printf("enter the size=");
scanf("%d",&size);

enqueue(10);
enqueue(1);
enqueue(110);
enqueue(100);
enqueue(7);
peek();
display();


dequeue();
dequeue();
display();
peek();

return 0;
}

