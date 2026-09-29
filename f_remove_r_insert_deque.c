#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

struct node*front = NULL;
struct node*rear = NULL;

void r_insert(int n){
    struct node*new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data =n;
    new->next = NULL;
    if(front = NULL){
        front = rear = new;
    }
    else{
        if(front == rear){
            rear->next = new;
            rear = new;
        }
        else{
            rear->next = new;
            rear = new;
        }
    }
}

void f_remove(){
    struct node *temp;
    temp = front;
    if(front == NULL){
        printf(" QUEUE IS EMPTY\n");
    }
    else{
        if(front == rear){
            printf("%d is removed\n",front->data);
            front = rear = NULL;
        }
        else{
            printf("%d is removed\n",front->data);
            temp = front;
            front = front->next ;
            free(temp);

        }
    }
}

void display(){
    if(front == NULL){
        printf("queue is emptu=y\n");
    }
    else{
        temp = front;
        while(temp != front){
          printf("%d<-->\n",temp->data);
          temp = temp->next;
        }
       
    }
}

int main(){

r_insert(56);
r_insert(6);
r_insert(64);
r_insert(1);
display();
f_remove();
f_remove();
display();
    return 0;
}