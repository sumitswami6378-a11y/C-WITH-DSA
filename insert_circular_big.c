#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
struct node *new, *last;
struct node *head = NULL ;
int n,i ;
struct node *temp;

printf("ENTER THE NUMBER OF NODES= ");
scanf("%d",&n);

for(i=1 ; i<=n ; i++){

    new = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF %d NODE = ",i);
    scanf("%d",&new->data);
    
    if(head == NULL){
        head = new ;
        last = new ;
    }

    else{
        last->next = new ;
        last = new ;
    }
    
}


last->next = head ;

new = (struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA OF INSERTING NODEC= ");
scanf("%d<-->",&new->data);

new->next = head;
last->next = new;
head = new ;

printf("THE CIRCULAR LINKED LIST IS ");
temp = head ;
printf("%d<-->",temp->data);
temp = temp->next ;

while(temp != head){
    printf("%d<-->",temp->data);
    temp = temp->next ;
}

printf("BACK TO HEAD");



    return 0;
}