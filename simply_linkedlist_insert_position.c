#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

// Global variables PEHLE declare honge
struct node *head = NULL;
struct node *temp;
struct node *new;


// INSERT AT POSITION FUNCTION
void insertpos(int value, int pos){

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    // Agar position 1 hai
    if(pos == 1){
        newnode->next = head;
        head = newnode;
        return;
    }

    temp = head;

    // Position se ek pehle node tak jana
    for(int i = 1; i < pos-1; i++){
        temp = temp->next;
    }

    // New node insert karna
    newnode->next = temp->next;
    temp->next = newnode;
}


int main(){

    int nodes;

    printf("Enter number of nodes = ");
    scanf("%d",&nodes);

    // LINKED LIST CREATE
    for(int i = 1; i <= nodes; i++){

        new = (struct node*)malloc(sizeof(struct node));

        printf("ENTER DATA OF %d node = ",i);
        scanf("%d",&new->data);

        new->next = NULL;

        if(head == NULL){
            head = new;
            temp = head;
        }
        else{
            temp->next = new;
            temp = new;
        }
    }


    // INSERT 45 AT POSITION 4
    insertpos(45,4);


    // PRINTING
    temp = head;

    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}