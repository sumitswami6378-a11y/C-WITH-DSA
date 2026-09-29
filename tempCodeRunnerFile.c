#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

struct node*front = NULL;
struct node*rear = NULL;

void dequeue_front(int n){
    struct node*new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->next = NULL;
    if(front == NULL){
        front = new;
        rear = new;
    }
    else{
      new->next = front;
      front = new;
    }
}

void f_remove(){
    struct node*temp;
   
    if(front == NULL){
        printf("QUEUE IS EMPTY");
    }
    else{
        temp = front;
        front = front->next;
        free(temp);

        if(front == NULL){
            rear = NULL;
        }
       
    }
}

void display(){
    struct node*temp;
    if(front == NULL){
        printf("queue is empty\n");
    }
    else{
        temp = front;
        while(temp != NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }

    }
}

int main(){

dequeue_front(45);
dequeue_front(10);
dequeue_front(14);
dequeue_front(36);
dequeue_front(78);

display();

f_remove();
f_remove();

display();
    return 0;
}