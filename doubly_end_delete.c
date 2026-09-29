#include<stdio.h>
#include<stdlib.h>
struct node{

    int data ;
    struct node *prev ;
    struct node *next ;

};
int main(){

struct node*head = NULL ;
struct node *temp, *last, *new ;

int n,i ;

printf("ENTER THE NUMBER OF NPDES = ");
scanf("%d",&n);

for(i = 1 ; i<=n ; i++){

    new = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF NODE %d = ",i) ;
    scanf("%d", &new->data);
    new->prev = NULL ;
    new->next = NULL ;

    if(head == NULL){
        head = new ;
        new->next = NULL ;
        last = new ;
    }
    else{

        last->next = new ;
        new->prev = last ;
        last = new ;
    }
}

printf("BEFORE DELETION = ");
temp = head ;
while(temp != NULL){
    printf("%d<-->",temp->data);
    temp = temp->next ;
}

printf("AFTER DELETION   ");

temp = head;
while(temp->next != NULL){

    temp = temp->next ;
}
temp->prev->next = NULL ;
free(temp);

temp = head ;
while(temp != NULL){

    printf("%d", temp->data);
    temp = temp->next ;
}


printf("NULL");

return 0 ;
}



