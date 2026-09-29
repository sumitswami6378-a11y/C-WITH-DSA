#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void insertbig(int value){
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
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

insertbig(15);

//FOR PRINTING

temp = head;

while(temp != NULL){
    printf("%d<-->",temp->data);
    temp = temp->next;
}

return 0;
}