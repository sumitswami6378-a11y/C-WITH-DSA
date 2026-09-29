#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int priority;
    struct node *next;
};

struct node *head = NULL;
struct node *new,*temp ;

void insert(int data,int priority){
     new = (struct node*)malloc(sizeof(struct node));
     new->data = data;
     new->priority = priority;

     if(head == NULL){
        head = new;
        new->next = NULL;
     }
     else if(new->priority < head->priority){
        new->next = head;
        head = new;
     }
    else{

    temp = head;
    while(temp->next != NULL && temp->next->priority <= new->priority){
        temp = temp->next;
    }
    new->next = temp->next;
    temp->next = new;
        
     }
}


void peek(){
    if(head == NULL){
        printf("queue is empty");
    }
    else{
        printf("%d--%d\n",head->data,head->priority);
    }
}

void delete(){
    if(head == NULL){
        printf("queue is empty");
    }
    else{
        temp = head;
        printf("%d is removed]\n",temp->data);
        head = head->next;
        free(temp);
    }
}

void display(){
    if(head == NULL){
        printf("queue is empty");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("%d--%d\n",temp->data,temp->priority);
            temp = temp->next;
        }
    }
}

int main(){
insert(10,2);
insert(51,3);
insert(10,2);
insert(12,6);

display();
peek();

delete();
delete();

peek();
display();


    return 0;
}