#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next ;

};
struct node *new;
struct node *top = NULL;
struct node *temp;
void push(int n){
    new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL){
        printf("stack is full");
    }
    else{
        new->data = n;
        new->next = top;
        top = new ;
        printf("%d element insert successfully\n", n);
    }
}
void pop(){

    if(top == NULL){
        printf("stack is empty");
    }
    else{
        printf("\n %dTOP ELEMENT BE POPPED",top->data);
        temp = top ;
        top = top ->next ;
        free(temp);
        
    }
}
void peek(){
    if(top == NULL){
        printf("stack is empty");

    }
    else{
        printf("\n%d is the top element ", top->data);
    }
}

void display(){
    if(top == NULL){
        printf("stack is empty");

    }
    else{
        temp = top ;
        while(temp != NULL){
            printf("%d<-->", temp->data);
            temp = temp->next ;
        }
    }
}
int main(){

push(5);
push(10);
push(15);
push(14);

display();

pop();


pop();

display();
    return 0;
}