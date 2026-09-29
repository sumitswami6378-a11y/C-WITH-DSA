#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int n){
    
    struct node* new;
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
    printf("%d is inserted successfully\n",n);
    
}

void dequeue(){
    struct node *temp;
    if(front == NULL){
        printf("empty");

    }
    else{
        temp =front;
        printf("%d is deleted\n",temp->data);
        front= front->next ;
        free(temp);
    }
}

void display(){

    struct node *temp = front;
    if(front == NULL){
        printf("empty\n");
    }
    else{
        temp = front;
        while(temp != NULL){
            printf("%d<-->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void peek(){
    if(front == NULL){
        printf("empty\n");
    }

    else{
        printf("%d is the peek data\n",front->data);
    }
}


int main(){

enqueue(10);
enqueue(15);
enqueue(15);

display();
dequeue();

dequeue();
display();
return 0;
}
