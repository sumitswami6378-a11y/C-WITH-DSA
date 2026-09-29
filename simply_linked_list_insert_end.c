#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertend(int value){
    
    struct node *newNode;
    struct node *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = NULL;
    }
}


int main(){
    int nodes;
    printf("ENTER THE NUMBER OF NODES=");
    scanf("%d",&nodes);

    struct node *temp;     // for traversal
    struct node *new;
   

    for(int i=1; i<=nodes; i++){
        
        new =(struct node*)malloc(sizeof (struct node));
        printf("ENTER THE DATA OF %d NODE=",i);
        scanf("%d",&new->data);
        new->next = NULL;

        if(head == NULL){
            head =new;
            temp = head;
            
        }
        else{
            temp->next = new;
            temp = new;

        }
        
    }
insertend(54);
//FOR PRINTING

temp = head;

while(temp != NULL){
    printf("%d<-->",temp->data);
    temp = temp->next;
}

return 0;
}