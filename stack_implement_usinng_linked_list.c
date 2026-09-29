#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top = NULL;
struct node *temp;
 struct node *new ;
void push(int n){
   
    new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL){
        printf("stack is overflow");
    }
    else{
        new->data = n;
        new->next = top;
        top = new;
        printf("%d element inserted successfully\n",n);
    }
}

void pop(){

    if(top == NULL){
        printf("stack is under flow");
    }
    else{
        printf("%d element is deleted successfully\n", top->data);
        temp = top ;
        top = top->next ;
        free(temp);
    }
}

void display(){
    temp = top;
if(temp == NULL){
    printf("stack is overflow");
}
else{
    
    while(temp != NULL){
    printf("%d<-->\n",temp->data);
    temp = temp->next ;
}
}

}

int main(){

   push(20);
   push(10);
   push(8);
   display();
   pop();
   display();
    return 0;
}