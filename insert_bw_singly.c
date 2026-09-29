#include<stdio.h>
#include<stdlib.h>
struct node{

    int data ;
    struct node*next;
};
int main(){
int n,i,pos;
struct node*head = NULL ;
struct node*new,*temp,*last;
printf("ENTER THE NUMBER OF NODES = ");
scanf("%d",&n);

for(i=1 ; i<=n ; i++){
new = (struct node*)malloc(sizeof(struct node));

    printf("ENTER THE data NODE OF %d = ", i);
    scanf("%d",&new->data);
    new->next = NULL;

    if(head == NULL){
     head = new ;
     last = new ;

    }

    else{

        last->next = new ;
        last = new ;
    }

}

printf("<---------------------------BEFORE INSERTION-------------------------------------->");
temp = head ;
while(temp != NULL){


    printf("%d\n", temp->data);
    temp = temp->next ;
}

printf("<------------------------------INSERTING NEW NODE----------------------------------->");
new = (struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA OF INSERTING NODE = ");
scanf("%d",&new->data);

printf("ENTER THE POSITION WHERE NODE BE INSERTED = ");
scanf("%d",&pos);


temp = head ;
for(i=1 ; i < pos-1 ; i++){

    temp = temp->next ;
}
new->next = temp->next ;
temp->next = new;

temp = head ;
printf("<--------------AFTER INSERTING THE NODE-----------------------------> ");
while(temp != NULL){
printf("%d<-->", temp->data);
temp = temp->next ;

}

printf("NULL");

    return 0;
}