#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
struct node* head =NULL ;
struct node *temp, *last, *new, *current, *next ;
int i,n;
struct node *prev = NULL ;

printf("ENTER THE NUMBER OF NODES = ");
scanf("%d",&n);


for(i=1 ; i<=n ; i++){

new = (struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA OF NODE %d = ",i);
scanf("%d",&new->data);
new->next = NULL ;

if(head == NULL){
    head = new ;
    last = new ;
}
else{
    last->next = new ;
    last = new ;
}

}

printf("REVERSED OF THE LINKED LIST ");

current = head ;
while(current != NULL){
     
    next = current->next ;
    current->next = prev ;
    prev = current ;
    current = next ;
    
}
head = prev;

temp = head ;
while(temp != NULL){
    printf("<-->%d<-->",temp->data);
    temp = temp->next ;
}
printf("NULL");

    return 0;
}