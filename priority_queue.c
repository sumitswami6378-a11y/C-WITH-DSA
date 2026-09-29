#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int priority;
    struct node *next;
};

struct node*new,*temp;
struct node*head =NULL;

void insert(int data,int priority){
    

    new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->priority = priority;
    new->next = NULL;

    if(head == NULL){
        head = new;
        return;
    }

    if(new->priority < head->priority){
        new->next = head;
        head = new;
        return;
    }

    temp = head;
    while(temp->next != NULL && temp->next->priority <= new->priority){
        temp = temp->next;
      
    }
      new->next = temp->next ;
        temp->next = new;
}

void peek(){
    if(head == NULL){
        printf("QUEUE IS EMPTY\n");
    }
    else{
        
        printf("%d---%d\n",head->data,head->priority);
    }
}

void display(){
    temp = head;
    if(head == NULL){
        printf("QUEUE IS EMPTY\n");
    }
    else{
        while(temp != NULL){
            printf("%d--%d\n",temp->data,temp->priority);
            temp = temp->next;
        }
    }
}

void delete(){
    if(head == NULL){
        printf("queue is empty\n");
    }
    else{
        temp = head;
        printf("%d is dlt ",temp->data);
        head = head->next;
    }
}


int main(){

insert(10,2);
insert(12,3);
insert(45,1);
insert(16,4);
insert(14,3);

display();
peek();


delete();
peek();
display();



    return 0;
}