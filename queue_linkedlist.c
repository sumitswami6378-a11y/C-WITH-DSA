#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* new ;
struct node* temp;

void enqueue(int n){

    new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->next = NULL;
    
    if(front == NULL){
        front = new;
        rear = new;
       
    }
    else{
        rear->next = new;
        rear = new;
    }
     printf("%d inserted successfully\n",n);
}

void dequeue(){
    temp = front;
    if(front == NULL){
        printf("QUEUE IS EMPTY\n");
    }
    else{
        printf("%d is removed\n", front->data);
        front = front->next;
        free(temp);
    }
    
}
void peek(){
    if(front == NULL){
        printf("QUEUE IS EMPTY");
    }
    else{
        printf("top= ",front->data);
    }
}
void display(){
    temp = front;
    if(front == NULL){
        printf("queue is empty\n");
    }

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next ;
    }
}

int main(){

    enqueue(2);
        enqueue(41);
            enqueue(121);
                enqueue(51);

    display();
    dequeue();
    dequeue();
    display();
    

    return 0;
}