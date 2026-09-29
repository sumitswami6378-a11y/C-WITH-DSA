#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*new;
struct node*front = NULL;
struct node*rear = NULL;

void rinsert(int n){
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
        new->next = NULL ;
    }
    printf("%d is successfully inserted\n",n);
}
struct node*temp;
void rremove(){ 
   
    if(front == NULL){
       printf("queue is empty");
    }
    else{
       temp = front;
       while(temp->next != rear){
        temp = temp->next ;
       }
       printf("%d is removed",rear->data);
       free(rear);
       rear = temp;
       rear->next = NULL;
    }
}

void display(){
    if(front == NULL){
        printf("queue is empty");
    }
    else{
        temp = front;
        while(temp != NULL){
            printf("%d<-->\n",temp->data);
            temp = temp->next;
        }
    }
}

int main(){

rinsert(13);
rinsert(74);
rinsert(73);
rinsert(14);
rinsert(11);
display();
rremove();
rremove();
rremove();
display();



    return 0;
}