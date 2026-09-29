#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front = NULL;
struct node*rear = NULL;

void f_insert(int n){
struct node*new;
new = (struct node*)malloc(sizeof(struct node));
new->data = n;
new->next = NULL;
if(front == NULL){
    front= new;
    rear = new;
}
else{
    new->next = front;
    front = new;
}

printf("%d inserted successfully\n",n);
}

struct node*temp;
R_remove(){
    if(front == NULL){
        printf("QUEUE IS EMPTY\n");
    }
    temp = front;
    while(temp->next != rear){
      temp = temp->next ;
    }
    printf("%d is removwed\n",rear->data);
    free(rear);
    rear = temp;
    rear->next = NULL;
}

void display(){

if(front == NULL){
    printf("queue is full\n");
}
else{
    temp = front;
    while(temp != NULL){
        printf("%d<-->",temp->data);
        temp = temp->next;
    }
}
}

int main(){

    f_insert(56);
     f_insert(6);
      f_insert(76);
       f_insert(46);
        f_insert(16);
    display();
    R_remove();
    R_remove();
    display();



    return 0;
}